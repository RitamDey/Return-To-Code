#include <iostream>
#include <fstream>
#include <algorithm>
#include <cctype>
#include <cstdlib>
using namespace std;


int extract_number(string s) {
    char first = '\0', second = '\0';
    for (auto i = s.begin(); i != s.end(); i++) {
        if (isdigit(*i)) {
            if (first == '\0') {
                first = *i;
                second = *i;
            } else {
                second = *i;
            }
        }
    }
    return (first - '0') * 10 + (second - '0');
}



int main() {
    // ifstream input ("sample-input.txt", ifstream::in);
    ifstream input ("puzzle-input.txt", ifstream::in);
    string current;
    int sum = 0;

    while (input >> current) {
        sum += extract_number(current);
    }
    cout << sum << endl;
}