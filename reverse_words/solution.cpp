#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) {
	ifstream stream(argv[1]);
	string buffer;

	bool first = true;

	while (getline(stream, buffer)) {

		stringstream line(buffer);

		list<string> words;
		string word;
		
		
		if (line >> word) {
					
			do words.push_front(word);
			while (line >> word);
			
			for (list<string>::iterator it = words.begin(); it != words.end(); ++it) {
				if (it != words.begin())
					cout << " ";

				cout << *it;
			}

			cout << endl;
		}
	}


	return 0;
}

