// NoteBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include <SDL.h>

#include "dependencies/headers/file_handler.h" // Functions: readFile(filePath)

using namespace std;

/**
 * Main Function
 *
 * Takes the following arguemnts
 * argv[0]: main.exe
 * argv[1]: file path
 * 
 **/
int main(int argc, char* argv[])
{

	readFile("test.txt");
	
	/*
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("Title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

	SDL_RenderClear(renderer); // Clear the display of previous frame

	SDL_RenderPresent(renderer); // Present whatever we manipulated renderer to be

	SDL_Delay(3000); // Wait for 3 seconds, then bye bye
	*/
    
	return 0;
}