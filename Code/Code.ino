// ###########################################################################################################################################
// #
// # WordClock WIFI MANAGER library SETTINGS CLEANUP code for the printables WordClock 16x16 matrix project:
// # https://www.printables.com/de/model/331012-wordclock-16x16-led-matrix
// #
// # Code by https://github.com/AWSW-de
// #
// # Released under license: GNU General Public License v3.0: https://github.com/AWSW-de/WordClock-16x16-LED-matrix/blob/main/LICENSE
// #
// ###########################################################################################################################################
/*

      ___           ___           ___           ___           ___           ___       ___           ___           ___                                      
     /\__\         /\  \         /\  \         /\  \         /\  \         /\__\     /\  \         /\  \         /\__\                                     
    /:/ _/_       /::\  \       /::\  \       /::\  \       /::\  \       /:/  /    /::\  \       /::\  \       /:/  /                                     
   /:/ /\__\     /:/\:\  \     /:/\:\  \     /:/\:\  \     /:/\:\  \     /:/  /    /:/\:\  \     /:/\:\  \     /:/__/                                      
  /:/ /:/ _/_   /:/  \:\  \   /::\~\:\  \   /:/  \:\__\   /:/  \:\  \   /:/  /    /:/  \:\  \   /:/  \:\  \   /::\__\____                                  
 /:/_/:/ /\__\ /:/__/ \:\__\ /:/\:\ \:\__\ /:/__/ \:|__| /:/__/ \:\__\ /:/__/    /:/__/ \:\__\ /:/__/ \:\__\ /:/\:::::\__\                                 
 \:\/:/ /:/  / \:\  \ /:/  / \/_|::\/:/  / \:\  \ /:/  / \:\  \  \/__/ \:\  \    \:\  \ /:/  / \:\  \  \/__/ \/_|:|~~|~                                    
  \::/_/:/  /   \:\  /:/  /     |:|::/  /   \:\  /:/  /   \:\  \        \:\  \    \:\  /:/  /   \:\  \          |:|  |                                     
   \:\/:/  /     \:\/:/  /      |:|\/__/     \:\/:/  /     \:\  \        \:\  \    \:\/:/  /     \:\  \         |:|  |                                     
    \::/  /       \::/  /       |:|  |        \::/__/       \:\__\        \:\__\    \::/  /       \:\__\        |:|  |                                     
     \/__/         \/__/         \|__|         ~~            \/__/         \/__/     \/__/         \/__/         \|__|                                     
      ___                       ___                                ___           ___       ___           ___           ___           ___           ___     
     /\__\          ___        /\  \          ___                 /\  \         /\__\     /\  \         /\  \         /\__\         /\__\         /\  \    
    /:/ _/_        /\  \      /::\  \        /\  \               /::\  \       /:/  /    /::\  \       /::\  \       /::|  |       /:/  /        /::\  \   
   /:/ /\__\       \:\  \    /:/\:\  \       \:\  \             /:/\:\  \     /:/  /    /:/\:\  \     /:/\:\  \     /:|:|  |      /:/  /        /:/\:\  \  
  /:/ /:/ _/_      /::\__\  /::\~\:\  \      /::\__\           /:/  \:\  \   /:/  /    /::\~\:\  \   /::\~\:\  \   /:/|:|  |__   /:/  /  ___   /::\~\:\  \ 
 /:/_/:/ /\__\  __/:/\/__/ /:/\:\ \:\__\  __/:/\/__/          /:/__/ \:\__\ /:/__/    /:/\:\ \:\__\ /:/\:\ \:\__\ /:/ |:| /\__\ /:/__/  /\__\ /:/\:\ \:\__\
 \:\/:/ /:/  / /\/:/  /    \/__\:\ \/__/ /\/:/  /             \:\  \  \/__/ \:\  \    \:\~\:\ \/__/ \/__\:\/:/  / \/__|:|/:/  / \:\  \ /:/  / \/__\:\/:/  /
  \::/_/:/  /  \::/__/          \:\__\   \::/__/               \:\  \        \:\  \    \:\ \:\__\        \::/  /      |:/:/  /   \:\  /:/  /       \::/  / 
   \:\/:/  /    \:\__\           \/__/    \:\__\                \:\  \        \:\  \    \:\ \/__/        /:/  /       |::/  /     \:\/:/  /         \/__/  
    \::/  /      \/__/                     \/__/                 \:\__\        \:\__\    \:\__\         /:/  /        /:/  /       \::/  /                 
     \/__/                                                        \/__/         \/__/     \/__/         \/__/         \/__/         \/__/                  

*/


// ###########################################################################################################################################
// # Includes:
// #
// # You will need to add the following libraries to your Arduino IDE to use the project:
// # - Adafruit NeoPixel      // by Adafruit:                     https://github.com/adafruit/Adafruit_NeoPixel
// # - WiFiManager            // by tablatronix / tzapu:          https://github.com/tzapu/WiFiManager
// #
// ###########################################################################################################################################
#include <WiFi.h>               // Used to connect the ESP32 to your WiFi
#include <WiFiManager.h>        // Used for the WiFi Manager option to be able to connect the WordClock to your WiFi without code changes
#include <Adafruit_NeoPixel.h>  // Used to drive the NeoPixel LEDs
#include <Preferences.h>        // Used to save the configuration to the ESP32 flash
#include "settings.h"           // Settings are stored in a seperate file to make to code better readable and to be able to switch to other settings faster


// ###########################################################################################################################################
// # Version number of the code:
// ###########################################################################################################################################
const char* VERSION = "V1.0.0";


// ###########################################################################################################################################
// # Declartions and variables used in the functions:
// ###########################################################################################################################################
Preferences preferences;


// ###########################################################################################################################################
// # Setup function that runs once at startup of the ESP:
// ###########################################################################################################################################
void setup() {
  Serial.begin(115200);
  delay(500);
  preferences.begin("wordclock", false);  // Init ESP32 flash
  Serial.println("##########################################################################");
  Serial.print("# WordClock WIFI MANAGER library WIFI CLEANUP startup of version: ");
  Serial.print(VERSION);
  Serial.println(" #");
  Serial.println("##########################################################################");
  strip.begin();            // Init the LEDs
  strip.setBrightness(25);  // Set LED brightness
  Serial.println("#######################################################");
  Serial.println("# RESET CONFIGURATION FOR WIFI AND WORDCLOCK SETTINGS #");
  Serial.println("#######################################################");
  colorWipe(strip.Color(255, 0, 0), 5);  // Red
  delay(500);
  preferences.clear();
  delay(500);
  WiFi.disconnect();
  delay(500);
  WiFiManager manager;
  manager.resetSettings();
  delay(500);
  preferences.end();
  delay(500);
  colorWipe(strip.Color(0, 255, 0), 5);  // Green
  delay(500);
  colorWipe(strip.Color(0, 0, 0), 1);  // Off
  Serial.println("##############################################################################################################");
  Serial.println("# WIFI SETTING WERE DELETED... WORDCLOCK SKETCH NEEDS TO BE UPLOADED AGAIN... PLEASE CONFIGURE WIFI AGAIN... #");
  Serial.println("##############################################################################################################");
}


// ###########################################################################################################################################
// # Loop function which runs all the time after the startup was done:
// ###########################################################################################################################################
void loop() {
  // NO LOOP FUNCTION
}


// ###########################################################################################################################################
// # LED color wipe:
// ###########################################################################################################################################
void colorWipe(uint32_t color, int wait) {
  for (int i = 0; i < strip.numPixels(); i++) {    // For each pixel in strip...
    strip.setPixelColor(i, color);                 //  Set pixel's color (in RAM)
    strip.show();                                  //  Update strip to match
    delay(wait);                                   //  Pause for a moment
    strip.setPixelColor(i, strip.Color(0, 0, 0));  //  Set pixel's color (in RAM)
    delay(wait);                                   //  Pause for a moment
  }
}


// ###########################################################################################################################################
// # EOF - You have successfully reached the end of the code - well done ;-)
// ###########################################################################################################################################