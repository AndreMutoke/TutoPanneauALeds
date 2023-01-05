#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_I2CDevice.h>
#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>

#include <Screen.hpp>
Screen *ecran = new Screen(13, 13, 4); int x;
void setup()
{
  x = 14;
  ecran->begin();
}
void loop()
{
  if(x <= -66) x = 14;
  else x--;
  ecran->hello_world(x);
  delay(100);

}