// Playlist.cpp
//
#include <string>

#include "Song.h"
#include "Playlist.h"

using namespace std;

Playlist::Playlist(string name)
{
    _name = name;
    _numberSongs = 0;
}

string  Playlist::getName()
{
    return _name;
}

bool Playlist::hasGenre(string genre)
{
    for (int i = 0; i < _numberSongs; i++)
    {
        if (_songArray[i].getGenre() == genre)
        {
            return true;
        }
    }
    return false;
}

void Playlist::addSong(Song song)
{
   if (_numberSongs < MAX_SONGS-1)
   {
        _songArray[_numberSongs] = song;
        _numberSongs++;
   }
}

int Playlist::numberOfSongs()
{
    return _numberSongs;
}

string Playlist::playSong(int songNumber)
{
    if (songNumber >= 0 && songNumber < _numberSongs)
    {
        return _songArray[songNumber].getTitle();
    }
    else
    {
        return string("");
    }
}
/*
int Playlist::findSong(string title)
{
    for (int i = 0; i < _numberSongs; i++)
    {
        if (_songArray[i].getTitle() == title)
        {
            return i;
        }
    }
    return -1;
}
*/
