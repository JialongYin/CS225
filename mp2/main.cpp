#include "Image.h"
#include "StickerSheet.h"

int main() {
  Image alma;
  alma.readFromFile("alma.png");
  Image i;
  i.readFromFile("i.png");
  StickerSheet alma_sticker(alma, 3);
  alma_sticker.addSticker(i, 30, 30);
  alma_sticker.addSticker(i, 800, 100);
  alma_sticker.addSticker(i, 600, 600);
  alma = alma_sticker.render();
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png

  alma.writeToFile("myImage.png");

  return 0;
}
