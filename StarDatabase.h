#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Star.h"

using namespace  std;


#ifndef THE_STELLAR_CODERS_STARDATABASE_H
#define THE_STELLAR_CODERS_STARDATABASE_H


class StarDatabase {
    vector<Star> stars;
public:
    void add_star(Star star)
    {
        stars.push_back(star);
        //cout << stars.size() << endl;
    }
    void print()
    {
        cout << stars.size() << endl;
//        for(int i = 0; i < 5; i++)
//        {
//            Star star = stars[i];
//            cout << "id: " << star.get_id() << " distance: " << star.get_distance() << " luminosity: " << star.get_luminosity() << " magnitude: " << star.get_magnitude() << endl;
//        }
        for(Star star: stars)
        {
            cout << star.get_id() << " " << star.get_distance() << " " << star.get_luminosity() << " " << star.get_magnitude() << endl;
        }
    }
};


#endif //THE_STELLAR_CODERS_STARDATABASE_H
