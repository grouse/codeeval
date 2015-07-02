#include <iostream>
#include <string>
#include <fstream>
#include <locale>

using namespace std;

int main (int argc, char* argv[]) {

	ifstream input(argv[1]);

	locale loc;

	string line;
	while (getline(input, line)) {
		for (unsigned int i = 0; i < line.length(); ++i)
			cout << tolower(line[i], loc);

		cout << endl;
	}


	return 0;
}
