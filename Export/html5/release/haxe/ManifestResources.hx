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
		
		#end
		
		var data, manifest, library;
		
		data = '{"name":null,"assets":"aoy4:pathy51:assets%2Factivity_icons%2Fdefault_activity_icon.pngy4:sizei2062y4:typey5:IMAGEy2:idR1y7:preloadtgoR0y56:assets%2Factivity_icons%2Fdefault_activity_icon_down.pngR2i2076R3R4R5R7R6tgoR0y41:assets%2Fdata%2FActivityDescriptions.jsonR2i998R3y4:TEXTR5R8R6tgoR0y35:assets%2Fdata%2FCharacterTypes.jsonR2i824R3R9R5R10R6tgoR0y33:assets%2Fdata%2FHungerLevels.jsonR2i759R3R9R5R11R6tgoR0y30:assets%2Fdata%2FLocations.jsonR2i5768R3R9R5R12R6tgoR0y33:assets%2Fdata%2FThirstLevels.jsonR2i674R3R9R5R13R6tgoR0y41:assets%2Fimages%2Fbald_bull_headshot.jpegR2i5386R3R4R5R14R6tgoR0y50:assets%2Fimages%2Fbald_bull_headshot_inverted.jpegR2i7663R3R4R5R15R6tgh","version":2,"libraryArgs":[],"libraryType":null}';
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

@:keep @:bind #if display private #end class __ASSET__assets_activity_icons_default_activity_icon_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_activity_icons_default_activity_icon_down_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_data_activitydescriptions_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_charactertypes_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_hungerlevels_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_locations_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_thirstlevels_json extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_images_bald_bull_headshot_jpeg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__assets_images_bald_bull_headshot_inverted_jpeg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:image("Assets/activity_icons/default_activity_icon.png") #if display private #end class __ASSET__assets_activity_icons_default_activity_icon_png extends lime.graphics.Image {}
@:image("Assets/activity_icons/default_activity_icon_down.png") #if display private #end class __ASSET__assets_activity_icons_default_activity_icon_down_png extends lime.graphics.Image {}
@:file("Assets/data/ActivityDescriptions.json") #if display private #end class __ASSET__assets_data_activitydescriptions_json extends haxe.io.Bytes {}
@:file("Assets/data/CharacterTypes.json") #if display private #end class __ASSET__assets_data_charactertypes_json extends haxe.io.Bytes {}
@:file("Assets/data/HungerLevels.json") #if display private #end class __ASSET__assets_data_hungerlevels_json extends haxe.io.Bytes {}
@:file("Assets/data/Locations.json") #if display private #end class __ASSET__assets_data_locations_json extends haxe.io.Bytes {}
@:file("Assets/data/ThirstLevels.json") #if display private #end class __ASSET__assets_data_thirstlevels_json extends haxe.io.Bytes {}
@:image("Assets/images/bald_bull_headshot.jpeg") #if display private #end class __ASSET__assets_images_bald_bull_headshot_jpeg extends lime.graphics.Image {}
@:image("Assets/images/bald_bull_headshot_inverted.jpeg") #if display private #end class __ASSET__assets_images_bald_bull_headshot_inverted_jpeg extends lime.graphics.Image {}
@:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else



#end

#if (openfl && !flash)



#end
#end