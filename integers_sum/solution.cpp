#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
	
	fstream input(argv[1]);

	int i, sum = 0;
	while (input >> i)
		sum += i;

	std::cout << sum << std::endl;

	return 0;
}
