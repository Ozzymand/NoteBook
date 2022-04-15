// NoteBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// system headers
#include <iostream>
#include <fstream>

#include <SDL.h>

// own headers
#include <file_handler.h> // Functions: readFile(filePath)

using namespace std;

/** Main Function
 ****************
 * Takes the following arguemnts
 * argv[0]: main.exe
 * argv[1]: file path
 ****************/
int main(int argc, char* argv[])
{

	readFile("test.txt");

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("Title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

	bool isRunning = true;
	SDL_Event event;
	
	while (isRunning){
		while (SDL_PollEvent(&event)){
			switch (event.type){
				case SDL_QUIT:
					isRunning = false;
					break;

				case SDL_KEYDOWN:
					if (event.key.keysym.sym == SDLK_ESCAPE){
						isRunning = false;
					}
					break;
			}
		}
		SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
		SDL_RenderClear(renderer); // Clear the display of previous frame
		SDL_RenderPresent(renderer); // Present whatever we manipulated renderer to be
	}


	return 0;
}