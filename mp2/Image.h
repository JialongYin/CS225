/**
 * @file Image.h
 * Contains your declaration of the interface for the Image class.
 */

#pragma once
#include "cs225/PNG.h"
using namespace cs225;

class Image : public PNG{
private:
  int x_;
  int y_;

public:
  void setX(int x){x_ = x;}
  void setY(int y){y_ = y;}
  int getX(){return x_;}
  int getY(){return y_;}
  
  void lighten(){
    for (unsigned x = 0; x < width(); x++) {
      for (unsigned y = 0; y < height(); y++) {

        HSLAPixel & pixel = getPixel(x, y);
        if (pixel.l <= (1 - 0.1))
        pixel.l = pixel.l + 0.1;
        else pixel.l = 1;
      }
    }
  }

  void lighten(double amount){

    for (unsigned x = 0; x < width(); x++) {
      for (unsigned y = 0; y < height(); y++) {

          HSLAPixel & pixel = getPixel(x, y);
          if (pixel.l <= (1 - amount))
          pixel.l = pixel.l + amount;
          else pixel.l = 1;
      }
    }
  }

  void darken(){
    for (unsigned x = 0; x < width(); x++) {
      for (unsigned y = 0; y < height(); y++) {

        HSLAPixel & pixel = getPixel(x, y);
        if (pixel.l >= (0 + 0.1))
        pixel.l = pixel.l - 0.1;
        else pixel.l = 0;
      }
    }
  }

  void darken(double amount){
    for (unsigned x = 0; x < width(); x++) {
      for (unsigned y = 0; y < height(); y++) {

          HSLAPixel & pixel = getPixel(x, y);
          if (pixel.l >= (0 + amount))
          pixel.l = pixel.l - amount;
          else pixel.l = 0;
      }
    }
  }

  void saturate(){
    for (unsigned x = 0; x < width(); x++) {
      for (unsigned y = 0; y < height(); y++) {

          HSLAPixel & pixel = getPixel(x, y);
          if (pixel.s <= (1 - 0.1))
          pixel.s = pixel.s + 0.1;
          else pixel.s = 1;
      }
    }
  }

  void saturate(double amount){
    for (unsigned x = 0; x < width(); x++) {
      for (unsigned y = 0; y < height(); y++) {

          HSLAPixel & pixel = getPixel(x, y);
          if (pixel.s <= (1 - amount))
          pixel.s = pixel.s + amount;
          else pixel.s = 1;
      }
    }
  }

  void desaturate(){
    for (unsigned x = 0; x < width(); x++) {
      for (unsigned y = 0; y < height(); y++) {

          HSLAPixel & pixel = getPixel(x, y);
          if (pixel.s >= (0 + 0.1))
          pixel.s = pixel.s - 0.1;
          else pixel.s = 0;
      }
    }
  }

  void desaturate(double amount){
    for (unsigned x = 0; x < width(); x++) {
      for (unsigned y = 0; y < height(); y++) {

          HSLAPixel & pixel = getPixel(x, y);
          if (pixel.s >= (0 + amount))
          pixel.s = pixel.s - amount;
          else pixel.s = 0;
      }
    }
  }

  void grayscale(){
    for (unsigned x = 0; x < width(); x++) {
      for (unsigned y = 0; y < height(); y++) {

        HSLAPixel & pixel = getPixel(x, y);
        pixel.s = 0;
      }
    }
  }

  void rotateColor(double degrees){
    for (unsigned x = 0; x < width(); x++) {
      for (unsigned y = 0; y < height(); y++) {

        HSLAPixel & pixel = getPixel(x, y);
        if ((pixel.h + degrees) <= 360 && (pixel.h + degrees) >= 0)
        pixel.h = pixel.h + degrees;
        else if ((pixel.h + degrees) >= 360)
        pixel.h = pixel.h + degrees - 360;
        else if ((pixel.h + degrees) <= 0)
        pixel.h = pixel.h + degrees + 360;
      }
    }
  }


  void illinify(){
    for (unsigned x = 0; x < width(); x++) {
      for (unsigned y = 0; y < height(); y++) {

        HSLAPixel & pixel = getPixel(x, y);
        if ((pixel.h>113.5)&&(pixel.h<293.5)) {
          pixel.h=216;
        } else {
          pixel.h=11;
        }
      }
    }

  }


  void scale(unsigned w, unsigned h){
    int factor = width() / w;
    resize(w, h);
    for (int x = (width() - 1); x >= 0; x--) {
      for (int y = (height() - 1); y >= 0; y--) {

          HSLAPixel & pixel = getPixel(x, y);
          HSLAPixel & newPixel = getPixel(x / factor, y / factor);
          pixel = newPixel;
      }
    }

  }


  void scale(double factor){
    Image image_copy = *this;
    resize(width() * factor, height() * factor);
    for (int x = (width() - 1); x >= 0; x--) {
      for (int y = (height() - 1); y >= 0; y--) {

          HSLAPixel & pixel = getPixel(x, y);
          HSLAPixel & newPixel = image_copy.getPixel(x / factor, y / factor);
          pixel = newPixel;
      }
    }
  }


};
