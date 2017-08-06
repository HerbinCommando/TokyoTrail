package com.gamejam.screens;


import openfl.display.SimpleButton;
import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;
import openfl.Lib;

import com.gamejam.utils.TextButton;
import com.gamejam.utils.TextFormats;


// GameOver is the place players end up when the game is over
class GameOver extends Sprite {

    public var gameOverText:TextField;
    public var restartButton:TextButton;

    public function new () {

        super ();

        gameOverText = new TextField();
        gameOverText.setTextFormat(TextFormats.SIZE_32);
        gameOverText.width = 800;
        gameOverText.height = 50;
        gameOverText.text = "You have exhausted yourself to death!";
        gameOverText.autoSize = TextFieldAutoSize.CENTER;
        addChild(gameOverText);
        gameOverText.x = (Lib.current.stage.stageWidth - gameOverText.width)/2;
        gameOverText.y = 20;

        restartButton = new TextButton("The next great adventure", 300, 40);
        addChild(restartButton);
        restartButton.x = Lib.current.stage.stageWidth - 320;
        restartButton.y = Lib.current.stage.stageHeight - 60;

    }

}