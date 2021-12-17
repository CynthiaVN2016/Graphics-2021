/*
 * =====================================================================================
 *
 *       Filename:  color.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/17/2021 17:10:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Cynthia Vu (cnv), mscynthiavu@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>

void write_color(std::ostream &out, color pixel_color) 
{
    // Write the translated [0,255] value of each color component.
    out << static_cast<int>(255.999 * pixel_color.x()) << ' '
        << static_cast<int>(255.999 * pixel_color.y()) << ' '
        << static_cast<int>(255.999 * pixel_color.z()) << '\n';
}

#endif
