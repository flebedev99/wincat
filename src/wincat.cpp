#include<Windows.h>
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

bool read(char* filename) {
	string line;
	ifstream file (filename);
	if (file.is_open()) {
		while(getline(file, line)) {
			cout << line << endl;
		}
		file.close();
	} else cout << "Could not open file" << endl;
}

int main(int argc, char* argv[]) {
	if (argc == 1) { //if user did not supply filename
		cout << "Invalid Syntax: Missing filename \nSyntax wincat <filename>" << endl;
	} else { //if the path was specified in argv[1]
		cout << "---------------------\n";
		cout << "WinCat by flebedev99. File: " << argv[1] << endl;
		cout << "---------------------\n\n";
		read(argv[1]);
	}
}
