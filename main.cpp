#include <iostream>

// color 0000 0000  0000 0000  0000 0000  0000 0000

void UIntToColor(const uint8_t& red, const uint8_t& green, const uint8_t& blue, const uint8_t& alpha, uint32_t& color)
{
    color = (red << 24) | (green << 16) | (blue << 8) | alpha;
}

void ColorToUInt(const uint32_t& color, uint8_t& red, uint8_t& green, uint8_t& blue, uint8_t& alpha)
{
    red     = (color & 0xFF000000) >> 24;
    green   = (color & 0x00FF0000) >> 16;
    blue    = (color & 0x0000FF00) >> 8;
    alpha   = (color & 0x000000FF);
}

int main()
{
    uint8_t red = 57;
    uint8_t green = 129;
    uint8_t blue = 21;
    uint8_t alpha = 240; // прозрачность

    uint32_t color = 0;

    UIntToColor(red, green, blue, alpha, color);
    std::cout << "color: " << color << std::endl;

    uint8_t red2 = 57;
    uint8_t green2 = 129;
    uint8_t blue2 = 21;
    uint8_t alpha2 = 240;

    ColorToUInt(color, red2, green2, blue2, alpha2);
    std::cout << "red: " << static_cast<int>(red) << std::endl;
    std::cout << "green: " << static_cast<int>(green) << std::endl;
    std::cout << "blue: " << static_cast<int>(blue) << std::endl;
    std::cout << "alpha: " << static_cast<int>(alpha) << std::endl;
    return 0;
}