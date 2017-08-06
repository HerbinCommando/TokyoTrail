package com.gamejam.screens;


import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;
import openfl.Lib;

import com.gamejam.activities.ActivitySelection;
import com.gamejam.game.CharacterStatusDisplay;
import com.gamejam.game.MainGameState;
import com.gamejam.locations.LocationSelection;
import com.gamejam.utils.TextButton;
import com.gamejam.utils.TextFormats;


// A city location is a main location, where the player hangs out at
class CityLocation extends Sprite {

    public var stageBg:Sprite;
    public var textBg:Sprite;
    public var cityLocationText:TextField;
    public var cityDescriptionText:TextField;
    public var locationData:Array<Dynamic>;
    public var activityData:Array<Dynamic>;

    public var cityBg:Bitmap;
    public var maxActivitySelectionYPos:Int = 185;
    public var activitySelection:ActivitySelection;

    public var changeLocationButton:TextButton;
    public var locationSelection:LocationSelection;
    public var isLocationSelectionOpen:Bool;

    public var mainGameState:MainGameState;


    private var gameOverHackFn:Void->Void;

    public function new (locations:Array<Dynamic>, gameOverHack:Void->Void) {

        super ();

        var centerX:Float = Lib.current.stage.stageWidth / 2;

        locationData = locations;
        gameOverHackFn = gameOverHack;

        stageBg = new Sprite();
        stageBg.graphics.beginFill(0x000000);
        stageBg.graphics.drawRect(0, 0, Lib.current.stage.stageWidth, Lib.current.stage.stageHeight);
        stageBg.graphics.endFill();
        addChild(stageBg);

        textBg = new Sprite();
        textBg.graphics.beginFill(0x000000);
        textBg.graphics.drawRect(0, 0, 500, 150);
        textBg.graphics.endFill();
        //addChild(textBg);
        textBg.x = 20;
        textBg.y = 20;

        cityLocationText = new TextField();
        cityLocationText.setTextFormat(TextFormats.WHITE_TITLES);
        cityLocationText.width = 500;
        cityLocationText.height = 50;
        cityLocationText.autoSize = TextFieldAutoSize.CENTER;
        textBg.addChild(cityLocationText);
        //addChild(cityLocationText);
        //cityLocationText.x = centerX;

        cityDescriptionText = new TextField();
        cityDescriptionText.setTextFormat(TextFormats.WHITE_SUBTITLES);
        cityDescriptionText.multiline = true;
        cityDescriptionText.wordWrap = true;
        cityDescriptionText.width = 500;
        cityDescriptionText.height = 100;
        cityDescriptionText.autoSize = TextFieldAutoSize.CENTER;
        textBg.addChild(cityDescriptionText);
        //addChild(cityDescriptionText);
        cityDescriptionText.y = 65;

        changeLocationButton = new TextButton("Change Location", 300, 40);
        changeLocationButton.addEventListener(MouseEvent.CLICK, onClickChangeLocation);
        //addChild(changeLocationButton);
        changeLocationButton.x = Lib.current.stage.stageWidth - 320;
        changeLocationButton.y = Lib.current.stage.stageHeight - 60;

        locationSelection = new LocationSelection(onNewLocationSelected);
        isLocationSelectionOpen = false;

        //this.addEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
        this.addEventListener(MouseEvent.MOUSE_WHEEL, onScrollMouseWheel);
    }

    public function setupGame(gameState:MainGameState):Void {

        mainGameState = gameState;

    }

    public function setupLocation(location:Dynamic):Void {

        //trace("setup location");
        //trace(location);

        if (cityBg != null) {
            //cityBg.removeEventListener(MouseEvent.MOUSE_WHEEL, onScrollMouseWheel);
            //cityBg.removeEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
            removeChild(cityBg);
            cityBg = null;
        }
        cityBg = new Bitmap (Assets.getBitmapData ("assets/images/" + location.Name + ".png"));
        //cityBg.addEventListener(MouseEvent.MOUSE_WHEEL, onScrollMouseWheel);
        //cityBg.addEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
        addChild(cityBg);
        cityBg.x = (Lib.current.stage.stageWidth - cityBg.width)/2;

        //addChild(cityLocationText);
        //addChild(cityDescriptionText);
        addChild(changeLocationButton);

        cityLocationText.text = location.Name;
        cityDescriptionText.text = location.Description;
        activityData = location.Activities;
        //trace(activityData);

        setupActivitySelection();
        addChild(textBg);
    }

    public function setupActivitySelection():Void {

        if (activitySelection == null) {
            activitySelection = new ActivitySelection(onActivitySelected);
            activitySelection.x = 20;
            activitySelection.y = maxActivitySelectionYPos;
        }
        activitySelection.setupActivityData(activityData);

        addChild(activitySelection);
        //activitySelection.x = cityBg.x + 20;

    }

    public function onActivitySelected(activityData:Dynamic):Void {

        if (mainGameState.canDoActivity(activityData)) {

            var isGameOver:Bool = mainGameState.doActivity(activityData);
            if (isGameOver) {
                gameOverHackFn();
            }

        }

    }

    public function onClickChangeLocation(e:MouseEvent):Void {

        if (!isLocationSelectionOpen) {
            isLocationSelectionOpen = true;
            locationSelection.setupLocationData(locationData);
            addChild(locationSelection);
        }

    }

    public function onNewLocationSelected(locData:Dynamic):Void {

        isLocationSelectionOpen = false;
        removeChild(locationSelection);

        setupLocation(locData);

    }

    public function onScrollMouseWheel(e:MouseEvent):Void {

        //trace(e);

        // If the activitySelection element is large enough to drop off the bottom of the screen, calculate the bottom extreme position
        if (maxActivitySelectionYPos + activitySelection.height + 20 > Lib.current.stage.stageHeight) {
            activitySelection.y += e.delta;

            var minActivitySelectionYPos:Int = Math.ceil(Lib.current.stage.stageHeight - (/*maxActivitySelectionYPos +*/ activitySelection.height + 20));

            if (activitySelection.y > maxActivitySelectionYPos) activitySelection.y = maxActivitySelectionYPos;

            //trace("min pos = " + minActivitySelectionYPos);
            if (activitySelection.y < minActivitySelectionYPos) activitySelection.y = minActivitySelectionYPos;

        }

        //activitySelection.y < maxActivitySelectionYPos)
        //trace("activity height = " + activitySelection.height);
        //trace("stage height = " + Lib.current.stage.stageHeight);

    }

    public function onMouseDown(e:MouseEvent):Void {

        //trace(e);

    }
}