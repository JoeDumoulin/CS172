// Playlist.h - a playlist
//
#ifndef PLAYLIST_H_
#define PLAYLIST_H_

#include <string>
#include "Song.h"

using namespace std;

const int MAX_SONGS = 100;

class Playlist
{
    private:
        string _name;
        int    _numberSongs;
        Song   _songArray[MAX_SONGS];

    public:
        // constructor for the playlist
        Playlist(string name);
        
        // accessors
        string getName();

        // returns true when at least one song of 
        // this genre is present.
        bool hasGenre(string genre);

        // Add a new song
        void addSong(Song song);

        // How many songs in this playlist?
        int numberOfSongs();

        // Play a song
        string playSong(int songNumber);
    
        // get the song index
//        int findSong(string title);
};

#endif // PLAYLIST_H_

