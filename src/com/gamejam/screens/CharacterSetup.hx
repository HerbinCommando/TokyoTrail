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

import com.gamejam.game.Character;
import com.gamejam.utils.TextButton;
import com.gamejam.utils.TextFormats;


// CharacterSetup is the place we create and setup the player's character
class CharacterSetup extends Sprite {

    public var stageBg:Sprite;
    public var characterNameText:TextField;
    public var createCharacterText:TextField;
    public var createCharacterButton:TextButton;

    public var didSetupCharacter:Bool;
    public var createdCharacter:Character;

    public var characterClassButtons:Array<TextButton>;
    public var selectedCharacterClassData:Dynamic;

    public function new (characterClassData:Array<Dynamic>) {

        super ();

        stageBg = new Sprite();
        stageBg.graphics.beginFill(0x000000);
        stageBg.graphics.drawRect(0,0,Lib.current.stage.stageWidth,Lib.current.stage.stageHeight);
        stageBg.graphics.endFill();
        addChild(stageBg);

        characterClassButtons = new Array<TextButton>();
        for (charData in characterClassData) {
            var characterClassBtn:TextButton = new TextButton(charData.Class, 300, 40);
            characterClassBtn.addEventListener(MouseEvent.CLICK, onClickCharacterClass);
            characterClassBtn.cargo = charData;
            addChild(characterClassBtn);
            characterClassBtn.y = 185 + characterClassButtons.length * 55;
            characterClassButtons.push(characterClassBtn);
        }

        selectedCharacterClassData = characterClassData[0];
        characterClassButtons[0].setSelected(true);

        createCharacterText = new TextField();
        createCharacterText.setTextFormat(TextFormats.SIZE_32);
        createCharacterText.width = 800;
        createCharacterText.height = 50;
        createCharacterText.text = "What is your name and occupation?";
        addChild(createCharacterText);

        createCharacterButton = new TextButton("Embark", 300, 40);
        createCharacterButton.addEventListener(MouseEvent.CLICK, onClickCreateCharacter);
        addChild(createCharacterButton);
        createCharacterButton.x = Lib.current.stage.stageWidth - 320;
        createCharacterButton.y = Lib.current.stage.stageHeight - 60;

        characterNameText = new TextField();
        characterNameText.setTextFormat(TextFormats.FORM_PROPMPS);
        characterNameText.width = 400;
        characterNameText.height = 50;
        characterNameText.text = "Your Name...";
        characterNameText.multiline = false;
        characterNameText.type = TextFieldType.INPUT;
        characterNameText.borderColor = 0xFFFFFF;
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
