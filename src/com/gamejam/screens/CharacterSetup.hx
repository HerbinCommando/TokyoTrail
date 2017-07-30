package com.gamejam.screens;

import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.SimpleButton;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.text.TextField;
import openfl.text.TextFieldType;
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

    //public var cycleCharLeft:SimpleButton;
    //public var cycleCharRight:SimpleButton;

    public function new (characterClassData:Array<Dynamic>) {

        super ();

        /*
        var imgPath:String = "assets/activity_icons/default_activity_icon.png";
        var downImgPath:String = "assets/activity_icons/default_activity_icon_down.png";
        var buttonState:Bitmap = new Bitmap (Assets.getBitmapData (imgPath));
        var downState:Bitmap = new Bitmap (Assets.getBitmapData (downImgPath));
        cycleCharLeft = new SimpleButton(buttonState,buttonState,downState,buttonState);
        addChild(cycleCharLeft);
        */

        createdCharacter = null;
        characterData = characterClassData;
        selectedCharacterClassData = characterData[0];

        var centerX:Float = Lib.current.stage.stageWidth / 2;

        var numClasses:Int = 0;
        for (charData in characterData) {
            var characterClassBtn:TextButton = new TextButton(charData.Class, 300, 40);
            characterClassBtn.addEventListener(MouseEvent.CLICK, onClickCharacterClass);
            characterClassBtn.cargo = charData;
            addChild(characterClassBtn);
            characterClassBtn.y = numClasses++ * 55;
        }

        createCharacterText = new TextField();
        createCharacterText.setTextFormat(TextFormats.TITLES);
        createCharacterText.width = 800;
        createCharacterText.height = 50;
        createCharacterText.text = "Choose Your Occupation";
        addChild(createCharacterText);
        createCharacterText.x = centerX;

        createCharacterButton = new TextButton("Begin Your Journey", 300, 40);
        createCharacterButton.addEventListener(MouseEvent.CLICK, onClickCreateCharacter);
        addChild(createCharacterButton);
        createCharacterButton.x = centerX;
        createCharacterButton.y = Lib.current.stage.stageHeight - 125;

        characterNameText = new TextField();
        characterNameText.setTextFormat(TextFormats.FORM_PROPMPS);
        characterNameText.width = 400;
        characterNameText.height = 50;
        characterNameText.text = "Enter Name...";
        characterNameText.multiline = false;
        characterNameText.type = TextFieldType.INPUT;
        characterNameText.border = true;
        characterNameText.addEventListener(MouseEvent.CLICK, function(e:MouseEvent){ characterNameText.setSelection(0,characterNameText.text.length); });
        addChild(characterNameText);
        characterNameText.y = 425;

        /*
        statBar = new StatBar();
        addChild(statBar);


        characterImage = new Bitmap (Assets.getBitmapData ("assets/images/bald_bull_headshot.jpeg"));
        addChild(characterImage);
        characterImage.y = 100;
        */
    }


    public function onClickCharacterClass(e:MouseEvent):Void {

        var btn:TextButton = cast(e.currentTarget, TextButton);
        selectedCharacterClassData = btn.cargo;

    }


    public function onClickCreateCharacter(e:MouseEvent):Void {

        createdCharacter = new Character(characterNameText.text, selectedCharacterClassData);

    }

}
