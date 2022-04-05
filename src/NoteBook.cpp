// NoteBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>

using namespace std;

// Reads an entire file
//
void readFile(const char* filePath) {
	char fileText;
	if (filePath == nullptr) {
		// there have been given 0 arguments
		// warn the mf
		cout << "No file was specified!\n";
	}
	else {
		// good, we got a file, now read the whole thing
		ifstream textFile(filePath);
		while (textFile.good()) {
			fileText = textFile.get();
			cout << fileText;
		}
	}
}

int main(int argc, char* argv[])
{
	try {
		// the arguments are already pointer chars, can just straight up pass it lol
		//
		readFile(argv[1]); // pass the gas to the function
	}
	catch (exception ErrorReadingFile) {
		cout << "Program failed to read file.\nUsed arguments: " << argv[1] << endl;
	}

	getchar(); // stop closing my window :(
	return 0;
}