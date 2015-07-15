#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {

	ifstream input(argv[1]);
	int integer;

	while (input >> integer) {
		int mask = 1;
		int num_ones = 0;

		while (mask < integer) {
			if ((integer & mask) != 0)
				num_ones++;

			mask = mask << 1;
		}

		cout << num_ones << endl;
	}

	return 0;
}
