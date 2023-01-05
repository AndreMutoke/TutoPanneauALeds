#include "Screen.hpp"

Screen::Screen(int width, 
               int height, 
               uint8_t pin, 
               uint8_t matrixType, 
               neoPixelType ledType)
{
    m_largeur=width; 
    m_hauteur = height; 
    m_pin_out =pin;
    matrix = new Adafruit_NeoMatrix(m_largeur, m_hauteur, m_pin_out, matrixType, ledType);
}
Screen::~Screen()
{
    delete matrix;
}