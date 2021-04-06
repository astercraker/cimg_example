#include <iostream>
using namespace std;

#include "CImg.h"
#include <string>
using namespace cimg_library;
int main() {
    CImg<unsigned char> src("icon.jpg");
    int width = src.width();
    int height = src.height();
    cout << width << "x" << height << endl;
    int counter = 0;
    for (int r = 0; r < height; r++){
        for (int c = 0; c < width; c++){
            counter += 1;
            cout << "counter: " << counter
                 << " (" << r << "," << c << ") ="
                 << " R: " << (int)src(c,r,0,0)
                 << " G: " << (int)src(c,r,0,1)
                 << " B: " << (int)src(c,r,0,2) << endl;
        }
    }
    cout << "counter: " << counter;
    return 0;
}
