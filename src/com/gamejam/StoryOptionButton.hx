package com.gamejam;


import openfl.display.Sprite;

// An option to pick as a response to a multiple choice dialog
class StoryOptionButton extends SimpleButton {

    public var text:String;

    public function new (buttonText:String) {

        super ();

        text = buttonText;

    }


}