#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
	fstream input(argv[1]);

	char sep;
	int x, n;

	while (input >> x >> sep >> n) {
		while ((x & (n-1)) != 0) 
			x++;

		std::cout << x << std::endl;
	}


	return 0;
}
