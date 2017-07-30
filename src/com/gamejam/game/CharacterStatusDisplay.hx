package com.gamejam.game;


import openfl.display.Sprite;
//import openfl.text.TextFormat;
import openfl.text.TextField;

import com.gamejam.character.Character;
import com.gamejam.utils.TextFormats;

// CharacterStatusDisplay shows the character's general gameplay information
class CharacterStatusDisplay extends Sprite {

    public var hungerData:Array<Dynamic>;
    public var thirstData:Array<Dynamic>;

    //public var format:TextFormat;
    public var nameText:TextField;
    public var classText:TextField;
    public var staminaStatusText:TextField;
    public var hungerStatusText:TextField;
    public var thirstStatusText:TextField;

    public function new (hungerLevelData:Array<Dynamic>, thirstLevelData:Array<Dynamic>) {

        super ();

        hungerData = hungerLevelData;
        thirstData = thirstLevelData;

        nameText = new TextField();
        nameText.setTextFormat(TextFormats.NORMAL_TEXT);
        nameText.width = 300;
        nameText.height = 20;
        addChild(nameText);

        classText = new TextField();
        classText.setTextFormat(TextFormats.NORMAL_TEXT);
        classText.width = 300;
        classText.height = 20;
        addChild(classText);
        classText.y = 20;

        staminaStatusText = new TextField();
        staminaStatusText.setTextFormat(TextFormats.NORMAL_TEXT);
        staminaStatusText.width = 300;
        staminaStatusText.height = 20;
        addChild(staminaStatusText);
        staminaStatusText.y = 40;

        hungerStatusText = new TextField();
        hungerStatusText.setTextFormat(TextFormats.NORMAL_TEXT);
        hungerStatusText.width = 300;
        hungerStatusText.height = 20;
        addChild(hungerStatusText);
        hungerStatusText.y = 60;

        thirstStatusText = new TextField();
        thirstStatusText.setTextFormat(TextFormats.NORMAL_TEXT);
        thirstStatusText.width = 300;
        thirstStatusText.height = 20;
        addChild(thirstStatusText);
        thirstStatusText.y = 80;

    }

    public function updateDisplay(char:Character):Void {

        nameText.text = char.charName;
        classText.text = char.className;

        for (data in hungerData) {
            if (char.hunger >= data.level) {
                hungerStatusText.text = data.description;
                break;
            }
        }

        for (data in thirstData) {
            if (char.thirst >= data.level) {
                thirstStatusText.text = data.description;
                break;
            }
        }

        staminaStatusText.text = char.stamina;

    }


}