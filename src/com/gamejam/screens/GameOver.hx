package com.gamejam.screens;


import openfl.display.SimpleButton;
import openfl.display.Sprite;
import openfl.text.TextField;
//import openfl.text.TextFormat;
import openfl.Lib;

import com.gamejam.utils.TextButton;
import com.gamejam.utils.TextFormats;


// GameOver is the place players end up when the game is over
class GameOver extends Sprite {

    public var gameOverText:TextField;
    public var restartButton:TextButton;

    public function new () {

        super ();

        //var centerX:Float = Lib.current.stage.stageWidth / 2;

        gameOverText = new TextField();
        gameOverText.setTextFormat(TextFormats.WHITE_TITLES);
        gameOverText.width = 800;
        gameOverText.height = 50;
        gameOverText.text = "Game Over!";
        addChild(gameOverText);
        gameOverText.x = (Lib.current.stage.stageWidth - gameOverText.width)/2;
        gameOverText.y = 20;

        restartButton = new TextButton("New Game (Click anywhere...)", 300, 40);
        addChild(restartButton);
        restartButton.x = Lib.current.stage.stageWidth - 320;
        restartButton.y = Lib.current.stage.stageHeight - 60;

    }

}