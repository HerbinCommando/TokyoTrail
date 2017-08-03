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

    // 1080x939

    public function new () {

        super();
        //this.mouseChildren = true;
        //this.buttonMode = true;

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
        title.setTextFormat(TextFormats.WHITE_TITLES);
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
        desc.setTextFormat(TextFormats.WHITE_SUBTITLES);
        desc.text = "In the year 20XX, travelers to Tokyo struggled with hunger, thirst, \nboredom, and the ever-pressing need to make an impace on their social \nmedia feeds.\n\nWill you brave the Tokyo Trail?\n\nNEW GAME";
        desc.width = 760;
        desc.height = 200;
        desc.autoSize = TextFieldAutoSize.CENTER;
        descBg.addChild(desc);

        /*
        this.addEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
        this.addEventListener(MouseEvent.MOUSE_UP, onMouseUp);
        this.addEventListener(MouseEvent.MOUSE_OUT, onMouseUp);
        */

    }

}
