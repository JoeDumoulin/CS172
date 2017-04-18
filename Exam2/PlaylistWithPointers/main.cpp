// main.cpp
// //
// // compile with: g++ main.cpp Song.cpp Playlist.cpp -o test
//
#include <string>
#include <iostream>

#include "Song.h"
#include "Playlist.h"

using namespace std;

int main()
{
	Playlist* workout = new Playlist("Workout1");

	if (workout->size() == 0) {
		Song* song1 = new Song("Lizzy", "The_Melvins", "Loud");
		workout->addSong(song1);
		delete song1;

		Song* song2 = new Song("I_Hate_Music", "Replacements", "Punk");
		workout->addSong(song2);
		delete song2;
	}
	else {
		// change the genre of a song
		Song* s = workout->getSongByName("Lizzy");
	}
	delete workout;
}





