package com.gamejam.screens;

import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.SimpleButton;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.text.TextField;
//import openfl.text.TextFormat;
import openfl.Lib;

import com.gamejam.character.Character;
import com.gamejam.character.StatBar;
import com.gamejam.utils.TextButton;
import com.gamejam.utils.TextFormats;

// CharacterSetup is the place we setup the player's character
class CharacterSetup extends Sprite {

    public var characterNameText:TextField;
    public var createCharacterText:TextField;
    public var createCharacterButton:TextButton;
    public var statBar:StatBar;
    public var characterImage:Bitmap;

    public var createdCharacter:Character;

    public var characterData:Array<Dynamic>;
    public var selectedCharacterClassData:Dynamic;

    public function new (characterClassData:Array<Dynamic>) {

        super ();

        createdCharacter = null;
        characterData = characterClassData;
        selectedCharacterClassData = characterData[0];

        var centerX:Float = Lib.current.stage.stageWidth / 2;

        createCharacterText = new TextField();
        createCharacterText.setTextFormat(TextFormats.TITLES);
        createCharacterText.width = 800;
        createCharacterText.height = 50;
        createCharacterText.text = "Choose Your Occupation";
        addChild(createCharacterText);
        createCharacterText.x = centerX;

        createCharacterButton = new TextButton("Start Your Journey", 300, 40);
        createCharacterButton.addEventListener(MouseEvent.CLICK, onClickCreateCharacter);
        addChild(createCharacterButton);
        createCharacterButton.x = centerX;
        createCharacterButton.y = Lib.current.stage.stageHeight - 125;

        characterNameText = new TextField();
        characterNameText.setTextFormat(TextFormats.FORM_PROPMPS);
        characterNameText.width = 800;
        characterNameText.height = 50;
        characterNameText.text = "Enter Name...";
        addChild(characterNameText);
        characterNameText.y = 425;

        statBar = new StatBar();
        addChild(statBar);

        characterImage = new Bitmap (Assets.getBitmapData ("assets/images/bald_bull_headshot.jpeg"));
        addChild(characterImage);
        characterImage.y = 100;
    }

    public function onClickCreateCharacter(e:MouseEvent):Void {

        createdCharacter = new Character(characterNameText.text, selectedCharacterClassData);

    }

}
