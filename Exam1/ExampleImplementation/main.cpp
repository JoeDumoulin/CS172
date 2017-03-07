// main.cpp
//
// compile with: g++ main.cpp Song.cpp Playlist.cpp -o test

#include <string>
#include <iostream>

#include "Song.h"
#include "Playlist.h"

using namespace std;


int main()
{

    // make an array of songs
    static int numsongs = 9;
    Song songs[] = {
        Song("Human", "Rag'n'Bone Man", "ModernPop"),
        Song("Closer", "The Chainsmokers", "ModernPop"),
        Song("Chained To the Rhythm", "Katy Perry", "ModernPop"),
        Song("Smells Like Teen Spirit", "Nirvana", "Grunge"),
        Song("Black Hole Sun", "Soundgarden", "Grunge"),
        Song("Loser", "Beck", "Grunge"),
        Song("Elvis Presley Blues", "Gillian Welch", "Americana"),
        Song("Pirate's Gospel", "Alela Diane", "Americana"),
        Song("Come On Up To The House", "Sarah Jarosz", "Americana")
    };

    // Make the playlist
    Playlist playlist("iRandomMusic");
    for (int i = 0; i < numsongs; i++)
        playlist.addSong(songs[i]);

    int errors = 0;

    // Does the playlist have the correct number of songs?
    if (numsongs != playlist.numberOfSongs())
    {
        errors++;
        cout << "error: not counting songs correctly\n";
    }

    // Check the genre of one song
    if (playlist.playSong(2) == "")
    {
        errors++;
        cout << "error: genre of the third song is incorrect\n";
    }

    // check if the playlist understands how many songs it contains.
    if (playlist.playSong(10) != "")
    {
        errors++;
        cout << "error: index out of range not handled correctly\n";
    }

    // Check for a genre
    if (!playlist.hasGenre("Americana"))
    {
        errors++;
        cout << "error: search for genre is incorrect\n";
    }


    if (errors == 0) cout << "Passed\n";
    else cout << "Errors: " << errors << endl;

    return errors;

}




