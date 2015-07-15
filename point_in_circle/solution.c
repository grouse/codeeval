#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]) {
	FILE* fptr = fopen(argv[1], "r");

	char line[1024];
	double cx, cy, r, px, py;	
	
	while (fgets(line, 1024, fptr)) {

		sscanf(line, "Center: (%lf, %lf); Radius: %lf; Point: (%lf, %lf)", &cx, &cy, &r, &px, &py);

		double dx = cx - px;
		double dy = cy - py;

		double distance = sqrt(dx*dx + dy*dy);

		if (distance < r)
			printf("true\n");
		else 
			printf("false\n");
	} 

	return 0;
}
