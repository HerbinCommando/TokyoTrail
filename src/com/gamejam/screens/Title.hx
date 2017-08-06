package com.gamejam.screens;


import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.Lib;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;

import com.gamejam.utils.TextFormats;


// Title is the screen that shows up first
class Title extends Sprite {

    public var screenBg:Bitmap;
    public var titleBg:Sprite;
    public var descBg:Sprite;
    public var title:TextField;
    public var desc:TextField;
    public var newGame:TextField;

    public function new () {

        super();

        screenBg = new Bitmap (Assets.getBitmapData ("assets/images/Shin-Okubo.png"));
        addChild(screenBg);

        titleBg = new Sprite();
        titleBg.graphics.beginFill(0x000000);
        titleBg.graphics.drawRect(0, 0, 600, 80);
        titleBg.graphics.endFill();
        addChild(titleBg);
        titleBg.x = (1080-600)/2;
        titleBg.y = 185;

        title = new TextField();
        title.setTextFormat(TextFormats.SIZE_46);
        title.text = "The Tokyo Trail";
        title.width = 600;
        title.height = 80;
        title.autoSize = TextFieldAutoSize.CENTER;
        titleBg.addChild(title);

        descBg = new Sprite();
        descBg.graphics.beginFill(0x000000);
        descBg.graphics.drawRect(0, 0, 775, 200);
        descBg.graphics.endFill();
        addChild(descBg);
        descBg.x = (1080-775)/2;
        descBg.y = 450;

        desc = new TextField();
        desc.setTextFormat(TextFormats.SIZE_24);
        desc.text = "In the year 20XX, travelers to Tokyo struggled with hunger, thirst, \nboredom, and the ever-pressing need to make an impace on their social \nmedia feeds.\n\nWill you brave the Tokyo Trail?";
        desc.width = 760;
        desc.height = 200;
        desc.autoSize = TextFieldAutoSize.CENTER;
        descBg.addChild(desc);

        newGame = new TextField();
        newGame.setTextFormat(TextFormats.SIZE_24);
        newGame.text = "NEW GAME (Click anywhere...)";
        newGame.width = 760;
        newGame.height = 40;
        newGame.autoSize = TextFieldAutoSize.CENTER;
        descBg.addChild(newGame);
        newGame.y = 200 - 45;

    }

}
