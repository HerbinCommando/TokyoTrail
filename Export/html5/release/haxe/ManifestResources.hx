package;


import lime.app.Config;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {
	
	
	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	
	
	public static function init (config:Config):Void {
		
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
		
		var rootPath = null;
		
		if (config != null && Reflect.hasField (config, "rootPath")) {
			
			rootPath = Reflect.field (config, "rootPath");
			
		}
		
		if (rootPath == null) {
			
			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif (windows && !cs)
			rootPath = FileSystem.absolutePath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
			#else
			rootPath = "";
			#end
			
		}
		
		Assets.defaultRootPath = rootPath;
		
		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_font_vt323_regular_ttf);
		
		#end
		
		var data, manifest, library;
		
		data = '{"name":null,"assets":"aoy4:pathy35:assets%2Fdata%2FCharacterTypes.jsony4:sizei824y4:typey4:TEXTy2:idR1y7:preloadtgoR0y33:assets%2Fdata%2FHungerLevels.jsonR2i759R3R4R5R7R6tgoR0y30:assets%2Fdata%2FLocations.jsonR2i22547R3R4R5R8R6tgoR0y34:assets%2Fdata%2FStaminaLevels.jsonR2i830R3R4R5R9R6tgoR0y33:assets%2Fdata%2FThirstLevels.jsonR2i674R3R4R5R10R6tgoR2i153116R3y4:FONTy9:classNamey38:__ASSET__assets_font_vt323_regular_ttfR5y33:assets%2Ffont%2FVT323-Regular.ttfR6tgoR0y27:assets%2Ffont%2FVT323.woff2R2i7020R3y6:BINARYR5R15R6tgoR0y44:assets%2Fimages%2FBuy%20Lame%20Souvenirs.pngR2i68641R3y5:IMAGER5R17R6tgoR0y52:assets%2Fimages%2FConvenience%20Store%20Beverage.pngR2i47163R3R18R5R19R6tgoR0y49:assets%2Fimages%2FConvenience%20Store%20Snack.pngR2i60105R3R18R5R20R6tgoR0y47:assets%2Fimages%2FEat%20at%20a%20Restaurant.pngR2i43334R3R18R5R21R6tgoR0y39:assets%2Fimages%2FGet%20a%20Massage.pngR2i76521R3R18R5R22R6tgoR0y45:assets%2Fimages%2FGo%20for%20a%20Walk%202.pngR2i51577R3R18R5R23R6tgoR0y41:assets%2Fimages%2FGo%20for%20a%20Walk.pngR2i77499R3R18R5R24R6tgoR0y38:assets%2Fimages%2FHotel%20Vicinity.pngR2i47216R3R18R5R25R6tgoR0y31:assets%2Fimages%2FIkebukuro.pngR2i40093R3R18R5R26R6tgoR0y33:assets%2Fimages%2FMaid%20Cafe.pngR2i74961R3R18R5R27R6tgoR0y34:assets%2Fimages%2FManga%20Cafe.pngR2i55818R3R18R5R28R6tgoR0y45:assets%2Fimages%2FPlay%20Fighting%20Games.pngR2i67067R3R18R5R29R6tgoR0y43:assets%2Fimages%2FPlay%20Games%20Online.pngR2i50451R3R18R5R30R6tgoR0y50:assets%2Fimages%2FPlay%20the%20Claw%20Machines.pngR2i59061R3R18R5R31R6tgoR0y37:assets%2Fimages%2FRide%20a%20Taxi.pngR2i106257R3R18R5R32R6tgoR0y40:assets%2Fimages%2FRide%20the%20Train.pngR2i47500R3R18R5R33R6tgoR0y32:assets%2Fimages%2FShin-Okubo.pngR2i50465R3R18R5R34R6tgoR0y42:assets%2Fimages%2FShop%20for%20Gadgets.pngR2i59684R3R18R5R35R6tgoR0y42:assets%2Fimages%2FShop%20in%20Harajuku.pngR2i59364R3R18R5R36R6tgoR0y54:assets%2Fimages%2FSleep%20in%20a%20Capsule%20Hotel.pngR2i54215R3R18R5R37R6tgoR0y48:assets%2Fimages%2FSleep%20in%20a%20Stairwell.pngR2i51577R3R18R5R38R6tgoR0y47:assets%2Fimages%2FSleep%20in%20Hotel%20Room.pngR2i49740R3R18R5R39R6tgoR0y45:assets%2Fimages%2FSome%20Street%20%282%29.pngR2i55993R3R18R5R40R6tgoR0y39:assets%2Fimages%2FSome%20Street%202.pngR2i52933R3R18R5R41R6tgoR0y35:assets%2Fimages%2FSome%20Street.pngR2i55993R3R18R5R42R6tgoR0y31:assets%2Fimages%2FSubwayMap.pngR2i516917R3R18R5R43R6tgoR0y48:assets%2Fimages%2FThe%20Akihabara%20District.pngR2i66281R3R18R5R44R6tgoR0y45:assets%2Fimages%2FThe%20Boring%20District.pngR2i60974R3R18R5R45R6tgoR0y45:assets%2Fimages%2FUse%20a%20Photo%20Booth.pngR2i43907R3R18R5R46R6tgoR0y54:assets%2Fimages%2FVending%20Machine%20Refreshments.pngR2i57173R3R18R5R47R6tgoR0y47:assets%2Fimages%2FVending%20Machine%20Snack.pngR2i59825R3R18R5R48R6tgoR0y38:assets%2Fimages%2FVisit%20a%20Park.pngR2i61122R3R18R5R49R6tgoR0y40:assets%2Fimages%2FVisit%20a%20Shrine.pngR2i59600R3R18R5R50R6tgoR0y46:assets%2Fimages%2FVisit%20a%20Tall%20Tower.pngR2i123415R3R18R5R51R6tgoR0y51:assets%2Fimages%2FVisit%20an%20Amusement%20Park.pngR2i72247R3R18R5R52R6tgoR0y40:assets%2Fimages%2FVisit%20Shin-Okubo.pngR2i50465R3R18R5R53R6tgoR0y64:assets%2Fimages%2FVisit%20the%20Fake%20Statue%20of%20Liberty.pngR2i57042R3R18R5R54R6tgh","version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		
		
		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_data_charactertypes_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_hungerlevels_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_locations_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_staminalevels_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_thirstlevels_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_font_vt323_regular_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_font_vt323_woff2 extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_buy_lame_souvenirs_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_convenience_store_beverage_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_convenience_store_snack_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_eat_at_a_restaurant_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_get_a_massage_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_go_for_a_walk_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_go_for_a_walk_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_hotel_vicinity_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_ikebukuro_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_maid_cafe_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_manga_cafe_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_play_fighting_games_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_play_games_online_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_play_the_claw_machines_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_ride_a_taxi_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_ride_the_train_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_shin_okubo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_shop_for_gadgets_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_shop_in_harajuku_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_sleep_in_a_capsule_hotel_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_sleep_in_a_stairwell_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_sleep_in_hotel_room_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_some_street__2__png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_some_street_2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_some_street_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_subwaymap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_the_akihabara_district_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_the_boring_district_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_use_a_photo_booth_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_vending_machine_refreshments_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_vending_machine_snack_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_visit_a_park_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_visit_a_shrine_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_visit_a_tall_tower_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_visit_an_amusement_park_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_visit_shin_okubo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_visit_the_fake_statue_of_liberty_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:file("Assets/data/CharacterTypes.json") #if display private #end class __ASSET__assets_data_charactertypes_json extends haxe.io.Bytes {}
@:file("Assets/data/HungerLevels.json") #if display private #end class __ASSET__assets_data_hungerlevels_json extends haxe.io.Bytes {}
@:file("Assets/data/Locations.json") #if display private #end class __ASSET__assets_data_locations_json extends haxe.io.Bytes {}
@:file("Assets/data/StaminaLevels.json") #if display private #end class __ASSET__assets_data_staminalevels_json extends haxe.io.Bytes {}
@:file("Assets/data/ThirstLevels.json") #if display private #end class __ASSET__assets_data_thirstlevels_json extends haxe.io.Bytes {}
@:font("Export/html5/release/obj/webfont/VT323-Regular.ttf") #if display private #end class __ASSET__assets_font_vt323_regular_ttf extends lime.text.Font {}
@:file("Assets/font/VT323.woff2") #if display private #end class __ASSET__assets_font_vt323_woff2 extends haxe.io.Bytes {}
@:image("Assets/images/Buy Lame Souvenirs.png") #if display private #end class __ASSET__assets_images_buy_lame_souvenirs_png extends lime.graphics.Image {}
@:image("Assets/images/Convenience Store Beverage.png") #if display private #end class __ASSET__assets_images_convenience_store_beverage_png extends lime.graphics.Image {}
@:image("Assets/images/Convenience Store Snack.png") #if display private #end class __ASSET__assets_images_convenience_store_snack_png extends lime.graphics.Image {}
@:image("Assets/images/Eat at a Restaurant.png") #if display private #end class __ASSET__assets_images_eat_at_a_restaurant_png extends lime.graphics.Image {}
@:image("Assets/images/Get a Massage.png") #if display private #end class __ASSET__assets_images_get_a_massage_png extends lime.graphics.Image {}
@:image("Assets/images/Go for a Walk 2.png") #if display private #end class __ASSET__assets_images_go_for_a_walk_2_png extends lime.graphics.Image {}
@:image("Assets/images/Go for a Walk.png") #if display private #end class __ASSET__assets_images_go_for_a_walk_png extends lime.graphics.Image {}
@:image("Assets/images/Hotel Vicinity.png") #if display private #end class __ASSET__assets_images_hotel_vicinity_png extends lime.graphics.Image {}
@:image("Assets/images/Ikebukuro.png") #if display private #end class __ASSET__assets_images_ikebukuro_png extends lime.graphics.Image {}
@:image("Assets/images/Maid Cafe.png") #if display private #end class __ASSET__assets_images_maid_cafe_png extends lime.graphics.Image {}
@:image("Assets/images/Manga Cafe.png") #if display private #end class __ASSET__assets_images_manga_cafe_png extends lime.graphics.Image {}
@:image("Assets/images/Play Fighting Games.png") #if display private #end class __ASSET__assets_images_play_fighting_games_png extends lime.graphics.Image {}
@:image("Assets/images/Play Games Online.png") #if display private #end class __ASSET__assets_images_play_games_online_png extends lime.graphics.Image {}
@:image("Assets/images/Play the Claw Machines.png") #if display private #end class __ASSET__assets_images_play_the_claw_machines_png extends lime.graphics.Image {}
@:image("Assets/images/Ride a Taxi.png") #if display private #end class __ASSET__assets_images_ride_a_taxi_png extends lime.graphics.Image {}
@:image("Assets/images/Ride the Train.png") #if display private #end class __ASSET__assets_images_ride_the_train_png extends lime.graphics.Image {}
@:image("Assets/images/Shin-Okubo.png") #if display private #end class __ASSET__assets_images_shin_okubo_png extends lime.graphics.Image {}
@:image("Assets/images/Shop for Gadgets.png") #if display private #end class __ASSET__assets_images_shop_for_gadgets_png extends lime.graphics.Image {}
@:image("Assets/images/Shop in Harajuku.png") #if display private #end class __ASSET__assets_images_shop_in_harajuku_png extends lime.graphics.Image {}
@:image("Assets/images/Sleep in a Capsule Hotel.png") #if display private #end class __ASSET__assets_images_sleep_in_a_capsule_hotel_png extends lime.graphics.Image {}
@:image("Assets/images/Sleep in a Stairwell.png") #if display private #end class __ASSET__assets_images_sleep_in_a_stairwell_png extends lime.graphics.Image {}
@:image("Assets/images/Sleep in Hotel Room.png") #if display private #end class __ASSET__assets_images_sleep_in_hotel_room_png extends lime.graphics.Image {}
@:image("Assets/images/Some Street (2).png") #if display private #end class __ASSET__assets_images_some_street__2__png extends lime.graphics.Image {}
@:image("Assets/images/Some Street 2.png") #if display private #end class __ASSET__assets_images_some_street_2_png extends lime.graphics.Image {}
@:image("Assets/images/Some Street.png") #if display private #end class __ASSET__assets_images_some_street_png extends lime.graphics.Image {}
@:image("Assets/images/SubwayMap.png") #if display private #end class __ASSET__assets_images_subwaymap_png extends lime.graphics.Image {}
@:image("Assets/images/The Akihabara District.png") #if display private #end class __ASSET__assets_images_the_akihabara_district_png extends lime.graphics.Image {}
@:image("Assets/images/The Boring District.png") #if display private #end class __ASSET__assets_images_the_boring_district_png extends lime.graphics.Image {}
@:image("Assets/images/Use a Photo Booth.png") #if display private #end class __ASSET__assets_images_use_a_photo_booth_png extends lime.graphics.Image {}
@:image("Assets/images/Vending Machine Refreshments.png") #if display private #end class __ASSET__assets_images_vending_machine_refreshments_png extends lime.graphics.Image {}
@:image("Assets/images/Vending Machine Snack.png") #if display private #end class __ASSET__assets_images_vending_machine_snack_png extends lime.graphics.Image {}
@:image("Assets/images/Visit a Park.png") #if display private #end class __ASSET__assets_images_visit_a_park_png extends lime.graphics.Image {}
@:image("Assets/images/Visit a Shrine.png") #if display private #end class __ASSET__assets_images_visit_a_shrine_png extends lime.graphics.Image {}
@:image("Assets/images/Visit a Tall Tower.png") #if display private #end class __ASSET__assets_images_visit_a_tall_tower_png extends lime.graphics.Image {}
@:image("Assets/images/Visit an Amusement Park.png") #if display private #end class __ASSET__assets_images_visit_an_amusement_park_png extends lime.graphics.Image {}
@:image("Assets/images/Visit Shin-Okubo.png") #if display private #end class __ASSET__assets_images_visit_shin_okubo_png extends lime.graphics.Image {}
@:image("Assets/images/Visit the Fake Statue of Liberty.png") #if display private #end class __ASSET__assets_images_visit_the_fake_statue_of_liberty_png extends lime.graphics.Image {}
@:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else

@:keep @:expose('__ASSET__assets_font_vt323_regular_ttf') #if display private #end class __ASSET__assets_font_vt323_regular_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/font/VT323-Regular"; #end name = "VT323 Regular"; super (); }}


#end

#if (openfl && !flash)

@:keep @:expose('__ASSET__OPENFL__assets_font_vt323_regular_ttf') #if display private #end class __ASSET__OPENFL__assets_font_vt323_regular_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_font_vt323_regular_ttf (); src = font.src; name = font.name; super (); }}


#end
#end