package com.gamejam.screens;


import openfl.display.SimpleButton;
import openfl.display.Sprite;
import openfl.text.TextField;
//import openfl.text.TextFormat;
import openfl.Lib;

import com.gamejam.utils.TextButton;
import com.gamejam.utils.TextFormats;


// GameOver is the place players end up when they die
class GameOver extends Sprite {

    public var gameOverText:TextField;
    public var restartButton:TextButton;

    public function new () {

        super ();

        var centerX:Float = Lib.current.stage.stageWidth / 2;

        gameOverText = new TextField();
        gameOverText.setTextFormat(TextFormats.TITLES);
        gameOverText.text = "Game Over!";
        addChild(gameOverText);
        gameOverText.x = centerX;

        restartButton = new TextButton("Start a New Game", 300, 40);
        addChild(restartButton);
        restartButton.x = centerX;
        restartButton.y = Lib.current.stage.stageHeight - 125;

    }

}