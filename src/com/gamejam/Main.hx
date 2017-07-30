package com.gamejam;


import haxe.Json;

//import lime.app.Application;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.events.MouseEvent;

import com.gamejam.character.Character;
import com.gamejam.game.MainGameState;
import com.gamejam.screens.CityLocation;
import com.gamejam.screens.CharacterSetup;
import com.gamejam.screens.GameOver;
import com.gamejam.utils.ImageButton;
import com.gamejam.utils.TextButton;

class Main extends Sprite {

	//var currentLocation:CityLocation;
	//var character:Character;

    var testSpriteAsset:Sprite;
    var testJsonAsset:String;

    public var mainGameState:MainGameState;

    public var characterSetupScreen:CharacterSetup;
    public var cityLocationScreen:CityLocation;
    public var gameOverScreen:GameOver;

    public var thirstLevels:Array<Dynamic>;
    public var hungerLevels:Array<Dynamic>;
    public var locations:Array<Dynamic>;
    public var characterTypes:Array<Dynamic>;

	public function new () {

		super ();

		trace("running");

        Assets.loadText("assets/data/ActivityDescriptions.json", handleActivityDescriptionsJson);
        Assets.loadText("assets/data/Locations.json", handleLocationsJson);
        Assets.loadText("assets/data/HungerLevels.json", handleHungerLevelsJson);
        Assets.loadText("assets/data/ThirstLevels.json", handleThirstLevelsJson);
        Assets.loadText("assets/data/CharacterTypes.json", handleCharacterTypesJson);

        //var bitmap = new Bitmap (Assets.getBitmapData ("images/bald_bull_headshot.jpeg"));
        //addChild(bitmap);
        //bitmap.y = 100;
        //bald_bull_headshot_inverted.gif

        //var myImageButton:ImageButton = new ImageButton("images/bald_bull_headshot.jpeg", "images/bald_bull_headshot_inverted.jpeg");
        //addChild(myImageButton);

        //var myTextButton:TextButton = new TextButton("Start...", 100, 40);
        //addChild(myTextButton);

        showCreateCharacterScreen();

	}

    public function handleCharacterTypesJson(s:String):Void {

        trace(s);
        var data:Dynamic = Json.parse(s);
        //trace(data);
        characterTypes = data.CharacterTypes;

    }

    public function handleThirstLevelsJson(s:String):Void {

        trace(s);
        var data:Dynamic = Json.parse(s);
        //trace(data);
        thirstLevels = data.ThirstLevels;

    }

    public function handleHungerLevelsJson(s:String):Void {

        trace(s);
        var data:Dynamic = Json.parse(s);
        hungerLevels = data.HungerLevels;

    }

    public function handleLocationsJson(s:String):Void {

        trace(s);
        var data:Dynamic = Json.parse(s);
        trace(data);
        locations = data.Locations;

    }

    public function handleActivityDescriptionsJson(s:String):Void {

        trace(s);
        var activityDescriptions:Dynamic = Json.parse(s);
        //trace("parsed");

    }

	public function showCreateCharacterScreen() {

        if (characterSetupScreen == null) {
            characterSetupScreen = new CharacterSetup();
            characterSetupScreen.createCharacterButton.addEventListener(MouseEvent.CLICK, onClickCreateCharacter);
        }
        addChild(characterSetupScreen);

    }

    public function onClickCreateCharacter(e:MouseEvent):Void {

        var activeChar:Character = characterSetupScreen.createdCharacter;
        mainGameState = new MainGameState(activeChar);

        if (cityLocationScreen == null) {
            cityLocationScreen = new CityLocation(locations, onGameIsNowOver);
        }
        cityLocationScreen.setupGame(mainGameState);
        cityLocationScreen.setupLocation(0);

        removeChild(characterSetupScreen);
        addChild(cityLocationScreen);

    }

    public function onGameIsNowOver():Void {

        if (gameOverScreen == null) {
            gameOverScreen = new GameOver();
            gameOverScreen.restartButton.addEventListener(MouseEvent.CLICK, onClickRestartGame);
        }
        removeChild(cityLocationScreen);
        addChild(gameOverScreen);

    }

    public function onClickRestartGame(e:MouseEvent):Void {

        removeChild(gameOverScreen);
        showCreateCharacterScreen();

    }

}