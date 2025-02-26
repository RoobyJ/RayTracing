//
// Created by robert on 2/4/25.
//

#ifndef COLOR_H
#define COLOR_H

#include <iostream>

#include "vec3.h"

//using color = vec3;
typedef vec3 color;

//void write_color(std::ostream& out, const color& pixel_color);

inline void write_color(std::ostream& out, const color& pixel_color) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // Translate the [0,1] component values to the byte range [0,255].
    int rbyte = int(255.999 * r);
    int gbyte = int(255.999 * g);
    int bbyte = int(255.999 * b);

    // Write out the pixel color components.
    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

inline std::string get_color(const color& pixel_color) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // Translate the [0,1] component values to the byte range [0,255].
    return  std::to_string(int(255.999 * r)) + ' ' +
            std::to_string(int(255.999 * g)) + ' ' +
            std::to_string(int(255.999 * b)) + '\n';
}

#endif //COLOR_H
