#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int make_move(int current, char direction, int steps) {
	// Number of moves can be more than 100, but moving 100 steps in either direction means you end-up in the starting spot
	// So we can simply discard these 100 moves, and work with the remainders
	steps = steps % 100;

	// Moving left is the same as going to lower positions
	if (direction == 'L') {
		current -= steps;
		if (current < 0)
			current = 100 + current;
	}
	// Moving right is the same as going to higher positions
	else {
		current = (current + steps) % 100;
	}

	return current;
}


int main(void) {
	fstream input_file;
	string move;
	char direction;
	int steps;

	int current = 50;
	int zero_count = 0;
	// input_file.open("test-input.txt", fstream::in);
	input_file.open("puzzle.txt", fstream::in);

	while (input_file >> move) {
		direction = move.at(0);
		steps = stoi(move.substr(1));
		current = make_move(current, direction, steps);
		if (current == 0)	zero_count++;
	}

	cout << zero_count << endl;

	return 0;
}
