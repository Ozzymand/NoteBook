#pragma once

#include <iostream>
#include <fstream>

using namespace std;

// Reads an entire file
//
int readFile(const char* filePath) {
	char fileText{};
	if (filePath == nullptr) {
		cout << "No file was specified!\n";
		return 0x4E4F46494C45; // hex for NOFILE - no file was given / found there.
	}
	else {
		// good, we got a file, now read the whole thing
		ifstream textFile(filePath);
		int fileSize = 0; // shoddy way to count up the total amount of characters in file
		while (textFile.good()) {
			// this is going to loop trough the file and write EACH CHAR to `char fileText` <> how do i save this as a array ? 
			fileText = textFile.get(); 
		}
		return fileText;
	}	
}