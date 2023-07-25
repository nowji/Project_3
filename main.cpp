#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Star.h"
#include "StarDatabase.h"

using namespace std;

vector<std::string> splitString(const std::string& input, char delimiter) {
    vector<string> result;
    stringstream stream(input);
    string item;
    while (getline(stream, item, delimiter)) {
        result.push_back(item);
    }
    return result;
}

void readStarsFromCSV(string filename, StarDatabase& database) {
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }

    string line;
    int id;
    double distance, magnitude, luminosity;
    getline(file, line); // Skip the header line

    while (getline(file, line)) {
        vector<string> starData = splitString(line, ',');

        // Assuming the columns are in the same order as you mentioned (dist, mag, lum)
        if (starData.size() >= 8) {
            id = stoi(starData[0]);
            distance = stod(starData[9]);
            magnitude = stod(starData[13]);
            luminosity = stod(starData[33]);

            // Create a Star object and add it to the database
            Star star(id, distance, luminosity, magnitude);
            database.add_star(star);
        }
    }

    file.close();
}






int main() {
    StarDatabase database;
    std::string filename = "hyg_v35.csv"; // Replace this with the actual file path

    readStarsFromCSV(filename, database);
    database.print();


    return 0;
}
