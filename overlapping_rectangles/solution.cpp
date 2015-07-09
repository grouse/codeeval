#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

struct Vector {
	int x, y;
};

int main(int argc, char* argv[]) {
	Vector aUL, aLR;
	Vector bUL, bLR;

	ifstream input(argv[1]);

	std::string line;
	while (getline(input, line)) {
		stringstream line_stream(line);
		char sep;

		line_stream >> aUL.x >> sep >> aUL.y >> sep >> aLR.x >> sep >> aLR.y;
		line_stream >> sep >> bUL.x >> sep >> bUL.y >> sep >> bLR.x >> sep >> bLR.y;

		bool collision = false;

		if (!(aLR.x < bUL.x || aUL.x > bLR.x || aLR.y > bUL.y || aUL.y < bLR.y))
		   collision = true;	
		
		if (collision)
			std::cout << "True" << std::endl;
		else 
			std::cout << "False" << std::endl;
	}

	return 0;
}
