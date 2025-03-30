#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;


int process(vector<int> locations1, vector<int> locations2) {
    // Pre-Process the 2nd list, but counting how many time each ID is present in it
    map<int, int> location_count;
    for (auto l = locations2.begin(); l != locations2.end(); l++) {
        location_count[*l] += 1;
    }

    // Iterate over the locations count, and then multiply it with the ID
    int count = 0;
    for (auto l: locations1) {
        count += l * location_count[l];
    }

    return count;   
}

int main(int argc, char const *argv[]) {
    // ifstream input("test-input.txt", ifstream::in);
    ifstream input("puzzle-input.txt", ifstream::in);
    vector<int> locations1, locations2;
    int c1, c2;

    while(input >> c1 >> c2) {
        locations1.push_back(c1);
        locations2.push_back(c2);
    }

    // map<int, int> count = preprocess(locations2);
    cout << process(locations1, locations2) << endl;

    return 0;
}