#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace  std;

#ifndef THE_STELLAR_CODERS_STAR_H
#define THE_STELLAR_CODERS_STAR_H


class Star {
    double distance, luminosity, magnitude;
    int id;
public:
    Star(int id, double distance, double luminosity, double magnitude)
    {
        this->id = id;
        this->distance = distance;
        this->luminosity = luminosity;
        this->magnitude = magnitude;
    }
    int get_id(){return id;}
    double get_distance(){return distance;}
    double get_luminosity(){return luminosity;}
    double get_magnitude(){return magnitude;}

};


#endif //THE_STELLAR_CODERS_STAR_H
