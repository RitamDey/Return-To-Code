#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
#include <cmath>
#include <algorithm>
using namespace std;


int process(vector<int> locations1, vector<int> locations2) {
    vector<int> differences;
    sort(locations1.begin(), locations1.end());
    sort(locations2.begin(), locations2.end());

    auto l1_end = locations1.end();
    auto l2_end = locations2.end();

    for (auto s1 = locations1.begin(), s2 = locations2.begin(); s1 != l1_end && s2 != l2_end; s1++, s2++) {
        differences.push_back(abs(*s1 - *s2));
    }

    return accumulate(differences.begin(), differences.end(), 0);
}

int main(int argc, char const *argv[]) {
    //ifstream input("input.txt", ifstream::in);
    ifstream input("puzzle_input.txt", ifstream::in);
    vector<int> locations1, locations2;
    int c1, c2;

    while(input >> c1 >> c2) {
        locations1.push_back(c1);
        locations2.push_back(c2);
    }

    cout << process(locations1, locations2) << endl;

    return 0;
}