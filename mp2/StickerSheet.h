/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#pragma once
#include "Image.h"
using namespace cs225;

class StickerSheet{
public:
  StickerSheet (const Image &picture, unsigned max){
    max_ = max;
    layer_ = 0;
    base_ = picture;
    images_ = new Image[max_];
  }

  ~StickerSheet (){
    _destroy();
  }

  StickerSheet (const StickerSheet &other){
    _copy(other);
  }

  const StickerSheet & 	operator= (const StickerSheet &other){
    if(this != &other){
      _destroy();
      _copy(other);
    }
    return *this;
  }

  void changeMaxStickers (unsigned max){
    Image *images_copy = new Image[max];
    for(unsigned i = 0; i < max_; i++){
      if(i < max) images_copy[i] = images_[i];
    }
    if(max < layer_) layer_ = max;
    max_ = max;
    delete [] images_;
    images_ = images_copy;
  }

  int addSticker (Image &sticker, unsigned x, unsigned y){
    if (layer_ < max_){
    images_[layer_] = sticker;
    images_[layer_].setX(x);
    images_[layer_].setY(y);
    layer_++;
    return layer_ - 1;
    }
    else return -1;

  }

  bool translate (unsigned index, unsigned x, unsigned y){
    if(index < layer_){
      images_[index].setX(x);
      images_[index].setY(y);
      return true;
    }else return false;
  }

  void removeSticker (unsigned index){
    if (index < layer_){
      Image *images_copy = new Image[max_];
      for(unsigned i = 0; i < layer_; i++){
        if(i < index) images_copy[i] = images_[i];
        else if (i < layer_ - 1) images_copy[i] = images_[i + 1];
      }
      delete [] images_;
      images_ = images_copy;
      layer_--;
    }
  }

  Image * 	getSticker (unsigned index) const{
    if (index < layer_) return (images_ + index);
    else return NULL;
  }

  Image render() const{
    Image base_copy = base_;
    for(unsigned i = 0; i < layer_; i++){
      unsigned xr = images_[i].getX();
      unsigned yr = images_[i].getY();
      unsigned x_w = images_[i].width();
      unsigned y_w = images_[i].height();
      if (xr+x_w > base_copy.width()){
        unsigned yb = base_copy.height();
        base_copy.resize(xr+x_w, yb);
      }
      if (yr+y_w > base_copy.height()){
        unsigned xb = base_copy.width();
        base_copy.resize(xb, yr+y_w);
      }
      for (unsigned x = 0; x < images_[i].width(); x++) {
        for (unsigned y = 0; y < images_[i].height(); y++) {
          HSLAPixel & pixel_s = images_[i].getPixel(x, y);
          HSLAPixel & pixel_b = base_copy.getPixel(x + xr, y + yr);
          if(pixel_s.a != 0)
          pixel_b = pixel_s;
        }
      }
    }
    return base_copy;
  }
  
private:

  void _copy(const StickerSheet &other){
    max_ = other.max_;
    layer_ = other.layer_;
    base_ = other.base_;
    images_ = new Image[max_];
    for(unsigned i = 0; i < max_; i++){
      images_[i] = other.images_[i];
    }
  }

  void _destroy(){
    if (images_ != NULL){
      delete [] images_;
      images_ = NULL;
    }
  }

  unsigned max_;
  unsigned layer_;
  Image base_;
  Image *images_;


};
