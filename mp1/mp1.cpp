#include "cs225/PNG.h"
using cs225::PNG;

#include "cs225/HSLAPixel.h"
using cs225::HSLAPixel;

#include <string>

PNG* setupOutput(unsigned w, unsigned h) {
  PNG* image = new PNG(w, h);
  return image;
}

void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2
  PNG* original = new PNG();

  original->readFromFile(inputFile);
  unsigned width = original->width();
  unsigned height = original->height();

  PNG* output = setupOutput(width, height);

  for (unsigned y = 0; y< height; y++) {
      for (unsigned x = 0; x < width; x++) {

          HSLAPixel &currOutPixel = (*output).getPixel(width - x -1, height - y -1);
          currOutPixel = original->getPixel(x, y);

      }
    }

  output->writeToFile(outputFile);

  delete output;
  delete original;

}

PNG myArt(unsigned int width, unsigned int height) {
  PNG png(width, height);
  // TODO: Part 3
  for (unsigned x = 0; x < png.width(); x++) {
    for (unsigned y = 0; y < png.height(); y++) {

        HSLAPixel & pixel = png.getPixel(x, y);

        if (x <= 360){
          pixel.h = x;
        } else if (x <= 720){
          pixel.h = x - 360;
        } else{
          pixel.h = x - 720;
        }

        //if (y >= 400){
          pixel.l = pixel.l + (y /*- 400*/) * 0.001;
        //}

    }
  }

  return png;
}
