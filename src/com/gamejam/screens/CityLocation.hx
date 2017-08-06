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
import com.gamejam.screens.LocationSelection;
import com.gamejam.utils.TextButton;
import com.gamejam.utils.TextFormats;


// A city location is a location and a list of activities
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
    public var locationSelectionScreen:LocationSelection;
    public var isLocationSelectionOpen:Bool;

    public var mainGameState:MainGameState;

    private var gameOverHackFn:Void->Void;

    public function new (locations:Array<Dynamic>, gameOverHack:Void->Void) {

        super ();

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
        textBg.x = 20;
        textBg.y = 20;

        cityLocationText = new TextField();
        cityLocationText.setTextFormat(TextFormats.SIZE_32);
        cityLocationText.width = 500;
        cityLocationText.height = 50;
        cityLocationText.autoSize = TextFieldAutoSize.CENTER;
        textBg.addChild(cityLocationText);

        cityDescriptionText = new TextField();
        cityDescriptionText.setTextFormat(TextFormats.SIZE_24);
        cityDescriptionText.multiline = true;
        cityDescriptionText.wordWrap = true;
        cityDescriptionText.width = 500;
        cityDescriptionText.height = 100;
        cityDescriptionText.autoSize = TextFieldAutoSize.CENTER;
        textBg.addChild(cityDescriptionText);
        cityDescriptionText.y = 65;

        changeLocationButton = new TextButton("Travel somewhere else", 300, 40);
        changeLocationButton.addEventListener(MouseEvent.CLICK, onClickChangeLocation);
        changeLocationButton.x = Lib.current.stage.stageWidth - 320;
        changeLocationButton.y = Lib.current.stage.stageHeight - 60;

        locationSelectionScreen = new LocationSelection(onNewLocationSelected);
        isLocationSelectionOpen = false;

        this.addEventListener(MouseEvent.MOUSE_WHEEL, onScrollMouseWheel);

    }

    public function setupGame(gameState:MainGameState):Void {

        mainGameState = gameState;

    }

    public function setupLocation(location:Dynamic):Void {

        if (cityBg != null) {
            removeChild(cityBg);
            cityBg = null;
        }
        cityBg = new Bitmap (Assets.getBitmapData ("assets/images/" + location.Name + ".png"));
        addChild(cityBg);
        cityBg.x = (Lib.current.stage.stageWidth - cityBg.width)/2;

        addChild(changeLocationButton);

        cityLocationText.text = location.Name;
        cityDescriptionText.text = location.Description;
        activityData = location.Activities;

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
            locationSelectionScreen.setupLocationData(locationData);
            addChild(locationSelectionScreen);
        }

    }

    public function onNewLocationSelected(locData:Dynamic):Void {

        isLocationSelectionOpen = false;
        removeChild(locationSelectionScreen);

        setupLocation(locData);

    }

    public function onScrollMouseWheel(e:MouseEvent):Void {

        // If the activitySelection element is large enough to drop off the bottom of the screen, calculate the bottom extreme position
        if (maxActivitySelectionYPos + activitySelection.height + 20 > Lib.current.stage.stageHeight) {
            activitySelection.y += e.delta;

            var minActivitySelectionYPos:Int = Math.ceil(Lib.current.stage.stageHeight - (activitySelection.height + 20));
            if (activitySelection.y > maxActivitySelectionYPos) activitySelection.y = maxActivitySelectionYPos;
            if (activitySelection.y < minActivitySelectionYPos) activitySelection.y = minActivitySelectionYPos;
        }

    }

}
