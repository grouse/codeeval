#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

	fstream input(argv[1]);
	
	string str;
	while (input >> str) {

		char unique = '\0';
		
		for (unsigned int i = 0; i < str.length(); i++) {
			bool repeated = false;
			
			for (unsigned int j = 0; j < str.length(); j++) {
				if (i == j) continue; 

				if (str[i] == str[j]) 
					repeated = true;
			}

			if (!repeated) {
				unique = str[i];
				break;
			}
		}

		cout << unique << endl;
	}


	input.close();
	return 0;
}
