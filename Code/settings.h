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
// # Hardware settings:
// ###########################################################################################################################################
#define LEDPIN 32              // Arduino-Pin connected to the NeoPixels
#define NUMPIXELS 256          // How many NeoPixels are attached to the Arduino
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, LEDPIN, NEO_GRB + NEO_KHZ800);


// ###########################################################################################################################################
// # EOF - You have successfully reached the end of the code - well done ;-)
// ###########################################################################################################################################