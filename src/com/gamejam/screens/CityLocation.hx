package com.gamejam.screens;


import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
//import openfl.text.TextFormat;
import openfl.text.TextField;
import openfl.Lib;

import com.gamejam.activities.CityActivity;
import com.gamejam.game.CharacterStatusDisplay;
import com.gamejam.game.MainGameState;
import com.gamejam.utils.TextFormats;


// A city location is a main location, where the player hangs out at
class CityLocation extends Sprite {

    public var cityLocationText:TextField;
    public var cityDescriptionText:TextField;
    public var locationData:Array<Dynamic>;
    public var activityData:Array<Dynamic>;

    public var cityBg:Bitmap;
    public var cityActivities:List<CityActivity>;

    public var mainGameState:MainGameState;

    private var gameOverHackFunction:Void->Void;

    public function new (locations:Array<Dynamic>, gameOverHack:Void->Void) {

        super ();

        var centerX:Float = Lib.current.stage.stageWidth / 2;

        locationData = locations;
        gameOverHackFunction = gameOverHack;
        cityActivities = new List<CityActivity>();

        cityLocationText = new TextField();
        cityLocationText.setTextFormat(TextFormats.TITLES);
        cityLocationText.width = 800;
        cityLocationText.height = 50;
        addChild(cityLocationText);
        cityLocationText.x = centerX;

        cityDescriptionText = new TextField();
        cityDescriptionText.setTextFormat(TextFormats.SUBTITLES);
        cityDescriptionText.width = 800;
        cityDescriptionText.height = 50;
        addChild(cityDescriptionText);
        cityDescriptionText.x = centerX;
        cityDescriptionText.y = 55;

    }

    public function setupGame(gameState:MainGameState):Void {

        mainGameState = gameState;

    }

    public function setupLocation(locationDataIndex:Int):Void {

        var location:Dynamic = locationData[locationDataIndex];

        //trace("setup location");
        //trace(location);

        cityLocationText.text = location.Name;
        cityDescriptionText.text = location.Description;
        activityData = location.Activities;
        //trace(activityData);

        setupActivities();

    }

    public function setupActivities():Void {

        // ASSUMES activityData has been set, probably in setupLocation()
        var maxX:Int = Lib.current.stage.stageWidth;
        var maxY:Int = Lib.current.stage.stageHeight;

        // Make sure we have a CityActivity for each Activity in the data
        while (activityData.length > cityActivities.length) {
            cityActivities.push(new CityActivity());
        }

        trace("activityData.length = " + activityData.length);
        trace("cityActivities.length = " + cityActivities.length);

        // Setup all CityActivities, remove unused instances
        var activityIndex:Int = 0;
        for (cityActivity in cityActivities) {
            if (activityIndex < cityActivities.length) {
                trace("City Activity being added");
                cityActivity.setupCityActivity(activityData[activityIndex++]);
                cityActivity.addEventListener(MouseEvent.CLICK, onCityActivityClicked);
                addChild(cityActivity);
                cityActivity.x = Math.round(Math.random()*maxX);
                cityActivity.y = Math.round(Math.random()*maxY);
            } else {
                removeChild(cityActivity);
            }
        }

    }

    public function onCityActivityClicked(e:MouseEvent):Void {

        var activity:CityActivity = cast(e.currentTarget, CityActivity);

        if (mainGameState.canDoActivity(activity.activityData)) {

            var isGameOver:Bool = mainGameState.doActivity(activity.activityData);
            if (isGameOver) {
                gameOverHackFunction();
            }

        }

    }

}