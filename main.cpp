#include <iostream>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

int main() {
    int width, height, nrChannels;

    unsigned char *data = stbi_load("/home/astercraker/projects/c++/test_image/container.jpg", &width, &height, &nrChannels, 4);

    if (data == NULL)
    {
        std::cout << "Cannot load texture" << std::endl;
        std::cout << stbi_failure_reason() << std::endl;
    }
    else{
        if (nrChannels == 3)
        {
            int size = sizeof(data)/sizeof(data[0]);
            std::cout << size << std::endl;
            std::cout << "First pixel: RGB --- "
                      << static_cast<int>(data[0]) << " "
                      << static_cast<int>(data[1]) << " "
                      << static_cast<int>(data[1009999]) << std::endl;
        }
        else if (nrChannels == 4)
        {
            std::cout << "First pixel: RGBA "
                      << static_cast<int>(data[0]) << " "
                      << static_cast<int>(data[1]) << " "
                      << static_cast<int>(data[2]) << " "
                      << static_cast<int>(data[3]) << '\n';
        }
    }
    std::cout << "Image width = " << width << '\n';
    std::cout << "Image height = " << height << '\n';

    stbi_image_free(data);
}
