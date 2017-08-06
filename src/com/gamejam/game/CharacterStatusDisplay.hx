package com.gamejam.game;


import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;

import com.gamejam.character.Character;
import com.gamejam.utils.TextFormats;


// CharacterStatusDisplay shows the character's status and gameplay information
class CharacterStatusDisplay extends Sprite {

    public var hungerData:Array<Dynamic>;
    public var thirstData:Array<Dynamic>;

    public var dialogBg:Sprite;
    public var nameText:TextField;
    public var classText:TextField;
    public var staminaStatusText:TextField;
    public var staminaAmountText:TextField;
    public var hungerStatusText:TextField;
    public var thirstStatusText:TextField;

    public function new (hungerLevelData:Array<Dynamic>, thirstLevelData:Array<Dynamic>) {

        super ();

        hungerData = hungerLevelData;
        thirstData = thirstLevelData;

        dialogBg = new Sprite();
        dialogBg.graphics.beginFill(0x000000);
        dialogBg.graphics.drawRect(0, 0, 180, 100);
        dialogBg.graphics.endFill();
        addChild(dialogBg);

        nameText = new TextField();
        nameText.setTextFormat(TextFormats.SIZE_16);
        nameText.width = 300;
        nameText.height = 20;
        nameText.selectable = false;
        dialogBg.addChild(nameText);

        classText = new TextField();
        classText.setTextFormat(TextFormats.SIZE_16);
        classText.width = 80;
        classText.height = 20;
        classText.autoSize = TextFieldAutoSize.LEFT;
        classText.selectable = false;
        dialogBg.addChild(classText);
        classText.y = 20;

        staminaStatusText = new TextField();
        staminaStatusText.setTextFormat(TextFormats.SIZE_16);
        staminaStatusText.width = 40;
        staminaStatusText.height = 20;
        staminaStatusText.autoSize = TextFieldAutoSize.LEFT;
        staminaStatusText.text = "Stamina :";
        staminaStatusText.selectable = false;
        dialogBg.addChild(staminaStatusText);
        staminaStatusText.y = 40;

        staminaAmountText = new TextField();
        staminaAmountText.setTextFormat(TextFormats.SIZE_16);
        staminaAmountText.width = 40;
        staminaAmountText.height = 20;
        staminaAmountText.autoSize = TextFieldAutoSize.RIGHT;
        staminaAmountText.selectable = false;
        dialogBg.addChild(staminaAmountText);
        staminaAmountText.x = 40;
        staminaAmountText.y = 40;

        hungerStatusText = new TextField();
        hungerStatusText.setTextFormat(TextFormats.SIZE_16);
        hungerStatusText.width = 80;
        hungerStatusText.height = 20;
        hungerStatusText.autoSize = TextFieldAutoSize.LEFT;
        hungerStatusText.selectable = false;
        dialogBg.addChild(hungerStatusText);
        hungerStatusText.y = 60;

        thirstStatusText = new TextField();
        thirstStatusText.setTextFormat(TextFormats.SIZE_16);
        thirstStatusText.width = 80;
        thirstStatusText.height = 20;
        thirstStatusText.autoSize = TextFieldAutoSize.LEFT;
        thirstStatusText.selectable = false;
        dialogBg.addChild(thirstStatusText);
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

        staminaAmountText.text = char.stamina;

    }

}
