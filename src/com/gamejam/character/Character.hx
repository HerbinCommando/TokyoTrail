package com.gamejam.character;


import openfl.display.Bitmap;
import openfl.display.Sprite;


class Character extends Sprite {

    //public var stats:List<CharacterStat>;
    public var charName:String;
    public var profileImage:Bitmap;

    public var className:String;
    public var stamina:Int;
    public var maxStamina:Int;
    public var thirst:Int;
    public var maxThirst:Int;
    public var money:Int;
    public var hoursLeft:Int; // Snould this be here Maybe in game rules??
    public var entertainmentPoints:Int;
    public var socialMediaEngagement:Int;

    public var characterData:Dynamic;

    /*
    	"Class":"Engineer",
	"Stamina":24, //Either you die at zero, or it just says "You're too tired!" when you try to do anything other than curl up and sleep
	"MaxStamina":24,
	"Hunger":0, //Increases by 1 point every waking hour
	"MaxHunger":48, //You die when you hit this amount
	"Thirst":0, //Increases by 1 point every waking hour
	"MaxThirst":24, //You die
	"Money":2000, //US dollars
	"HoursLeft":168, //7 days
	"Entertainment":0, //Your overall score
	"SocialMediaEngagement":0 //Another type of score, need a better name though
     */

	public function new (characterName:String, data:Dynamic) {

		super ();

        //stats = new List<CharacterStat>();
        charName = characterName;
        className = data.Class;
        maxStamina = data.MaxStamina;
        stamina = maxStamina;
        maxThirst = data.maxThirst;
        thirst = 0;
        money = data.Money;
        hoursLeft = data.HoursLeft;
        entertainmentPoints = 0;
        socialMediaEngagement = 0;

	}


}