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
void Screen::begin()
{
    matrix->begin();
    matrix->setTextWrap(false);
    matrix->setBrightness(200);
    matrix->setTextColor(matrix->Color(0, 255, 0));
}
void Screen::hello_world(int x)
{
    matrix->fillScreen(0);
    matrix->setCursor(x, 0);
    matrix->print("Hello World!");   
    matrix->show();
}
void Screen::cleanScreen()
{
    matrix->clear();
}