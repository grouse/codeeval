#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
	
	fstream input(argv[1]);

	while (!input.eof()) {
		int a, b, N;
		input >> a >> b >> N;

		for (int i = 1; i <= N; i++) {
			if (i % a == 0 && i % b == 0)
				std::cout << "FB";
			else if (i % a == 0)
				std::cout << "F";
			else if (i % b == 0)
				std::cout << "B";
			else
				std::cout << i;

			if (i < N)
				std::cout << " ";
		}

		std::cout << "\n";
	}

	return 0;
}
