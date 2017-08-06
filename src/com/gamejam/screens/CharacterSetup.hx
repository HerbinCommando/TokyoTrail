package com.gamejam.screens;


import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.SimpleButton;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.events.TextEvent;
import openfl.text.TextField;
import openfl.text.TextFieldType;
import openfl.Lib;

import com.gamejam.character.Character;
import com.gamejam.utils.TextButton;
import com.gamejam.utils.TextFormats;


// CharacterSetup is the place we create and setup the player's character
class CharacterSetup extends Sprite {

    public var stageBg:Sprite;
    public var characterNameText:TextField;
    public var createCharacterText:TextField;
    public var createCharacterButton:TextButton;
    //public var characterImage:Bitmap;

    public var didSetupCharacter:Bool;
    public var createdCharacter:Character;

    public var characterData:Array<Dynamic>;
    public var characterClassButtons:Array<TextButton>;
    public var selectedCharacterClassData:Dynamic;

    public function new (characterClassData:Array<Dynamic>) {

        super ();

        createdCharacter = null;
        characterClassButtons = new Array<TextButton>();

        characterData = characterClassData;

        //var centerX:Float = Lib.current.stage.stageWidth / 2;

        stageBg = new Sprite();
        stageBg.graphics.beginFill(0xFFFFFF);
        stageBg.graphics.drawRect(0,0,Lib.current.stage.stageWidth,Lib.current.stage.stageHeight);
        stageBg.graphics.endFill();
        addChild(stageBg);

        var numClasses:Int = 0;
        for (charData in characterData) {
            var characterClassBtn:TextButton = new TextButton(charData.Class, 300, 40);
            characterClassButtons.push(characterClassBtn);
            characterClassBtn.addEventListener(MouseEvent.CLICK, onClickCharacterClass);
            characterClassBtn.cargo = charData;
            addChild(characterClassBtn);
            characterClassBtn.y = 185 + numClasses++ * 55;
        }

        selectedCharacterClassData = characterData[0];
        characterClassButtons[0].setSelected(true);

        createCharacterText = new TextField();
        createCharacterText.setTextFormat(TextFormats.TITLES);
        createCharacterText.width = 800;
        createCharacterText.height = 50;
        createCharacterText.text = "Choose Your Occupation";
        addChild(createCharacterText);
        //createCharacterText.x = centerX;

        createCharacterButton = new TextButton("Begin Your Journey", 300, 40);
        createCharacterButton.addEventListener(MouseEvent.CLICK, onClickCreateCharacter);
        addChild(createCharacterButton);
        //createCharacterButton.x = centerX;
        createCharacterButton.x = Lib.current.stage.stageWidth - 320;
        createCharacterButton.y = Lib.current.stage.stageHeight - 60;

        characterNameText = new TextField();
        characterNameText.setTextFormat(TextFormats.FORM_PROPMPS);
        characterNameText.width = 400;
        characterNameText.height = 50;
        characterNameText.text = "Enter Name...";
        characterNameText.multiline = false;
        characterNameText.type = TextFieldType.INPUT;
        characterNameText.border = true;
        characterNameText.addEventListener(MouseEvent.CLICK, function(e:MouseEvent){ characterNameText.setSelection(0,characterNameText.text.length); });
        characterNameText.addEventListener(TextEvent.TEXT_INPUT, function(e:TextEvent){ didSetupCharacter = true; });
        addChild(characterNameText);
        characterNameText.y = 65;

    }


    public function onClickCharacterClass(e:MouseEvent):Void {

        var btn:TextButton = cast(e.currentTarget, TextButton);
        selectedCharacterClassData = btn.cargo;

        for (button in characterClassButtons) {
            button.setSelected(false);
        }
        btn.setSelected(true);

    }


    public function onClickCreateCharacter(e:MouseEvent):Void {

        createdCharacter = new Character(characterNameText.text, selectedCharacterClassData);

    }

}
