package com.gamejam.utils;


//import openfl.display.SimpleButton;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.Lib;
import openfl.text.TextField;

import com.gamejam.utils.TextFormats;

class TextButton extends Sprite {

    public var upColor:Int = 0x303030;
    public var downColor:Int = 0x606060;
    public var selectedColor:Int = 0x03AA03;

    public var text:TextField;

    public var cargo:Dynamic;
    public var isSelected:Bool;

    public function new (buttonText:String, w:Float, h:Float) {

        super();
        this.mouseChildren = true;
        this.buttonMode = true;
        //this.width = w;
        //this.height = h;

        text = new TextField();
        text.setTextFormat(TextFormats.BUTTONS);
        text.width = w - 20;
        text.height = h - 5;
        text.text = buttonText;
        addChild(text);

        //trace("ImageButton hitSprite has w,h = " + this.width + "," + this.height);
        //trace("ImageButton hitSprite has params w,h = " + w + "," + h);

        isSelected = false;

        graphics.beginFill(upColor);
        graphics.drawRoundRect(0, 0, w, h, 25, 25);
        graphics.endFill();

        this.addEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
        this.addEventListener(MouseEvent.MOUSE_UP, onMouseUp);
        this.addEventListener(MouseEvent.MOUSE_OUT, onMouseUp);

    }

    public function onMouseDown(e:MouseEvent):Void {

        this.graphics.beginFill(downColor);
        this.graphics.drawRoundRect(0, 0, this.width, this.height, 25, 25);
        this.graphics.endFill();

    }

    public function onMouseUp(e:MouseEvent):Void {

        var fillColor:Int = isSelected ? selectedColor : upColor;
        this.graphics.beginFill(fillColor);
        this.graphics.drawRoundRect(0, 0, this.width, this.height, 25, 25);
        this.graphics.endFill();

    }

    public function setSelected(selected:Bool):Void {

        var fillColor:Int = (isSelected = selected) ? selectedColor : upColor;
        this.graphics.beginFill(fillColor);
        this.graphics.drawRoundRect(0, 0, this.width, this.height, 25, 25);
        this.graphics.endFill();

    }
}

// TextButton is a button with some text
// FIXME this button doesnt work on html5
    /*
class TextButton extends SimpleButton {

    var bg:Sprite;
    var text:TextField;

    public function new (buttonText:String, w:Float, h:Float) {

        var format:TextFormat = new TextFormat();
        format.color = 0x808080;
        format.size = 48;

        text = new TextField();
        text.setTextFormat(format);
        text.width = w - 20;
        text.height = h - 20;
        text.text = buttonText;

        bg = new Sprite();
        bg.width = w;
        bg.height = h;
        bg.addChild(text);
        super (bg, bg, bg, bg);
    }


}
    */