#include <fstream>
#include <iostream>
#include <cmath>

using namespace std;

struct Point {
	int x, y;
};

int main(int argc, char* argv[]) {
	
	ifstream input(argv[1]);

	Point A, B;
	char sep;

	while (input >> sep >> A.x >> sep >> A.y >> sep >> sep >> B.x >> sep >> B.y >> sep) {
		int length = (B.x > A.x) ? B.x - A.x : A.x - B.x;
		int height = (B.y > A.y) ? B.y - A.y : A.y - B.y;
		float distance = sqrt(length*length + height*height);

		cout << distance << endl;
	}



	return 0;
}
