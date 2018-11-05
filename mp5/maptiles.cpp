/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */
    vector<Point<3>> points;
    for (size_t i = 0; i < theTiles.size(); i++) {
      points.push_back(convertToXYZ(theTiles[i].getAverageColor()));
    }
    KDTree<3> imgTree(points);

    MosaicCanvas* canvas = new MosaicCanvas (theSource.getRows(), theSource.getColumns());
    Point<3> imgPoint;
    TileImage* myImgPtr;

    for (int i = 0; i < theSource.getRows(); i++) {
      for (int j = 0; j < theSource.getColumns(); j++) {
        imgPoint = imgTree.findNearestNeighbor(convertToXYZ(theSource.getRegionColor(i, j)));
        for (size_t k = 0; k < theTiles.size(); k++) {
          if (imgPoint == convertToXYZ(theTiles[k].getAverageColor())) {
            myImgPtr = &(theTiles[k]);
            canvas->setTile(i, j, myImgPtr);
            break;
          }
        }
      }
    }
    return canvas;
}
