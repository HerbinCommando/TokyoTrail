package com.gamejam.game;


import openfl.display.Sprite;
import openfl.text.TextFormat;
import openfl.text.TextField;


// CharacterStatusDisplay shows the character's general gameplay information
class CharacterStatusDisplay extends Sprite {

    public var hungerData:Array<Dynamic>;
    public var thirstData:Array<Dynamic>;

    public var format;
    public var nameText:TextField;

    public function new (hungerLevelData:Array<Dynamic>, thirstLevelData:Array<Dynamic>) {

        super ();

        hungerData = hungerLevelData;
        thirstData = thirstLevelData;
    }

    public function updateDisplay(char:Character):Void {

    }


}