// Song.cpp
//
#include <string>
#include "Song.h"

using namespace std;

Song::Song()
{
    _title = "Loser";
    _artist = "Beck";
    _genre = "Grunge";
}

Song::Song(string title, string artist, string genre)
{
    _title = title;
    _artist = artist;
    _genre = genre;
}

string Song::getTitle() const
{
    return _title;
}

string Song::getArtist() const
{
    return _artist;
}

string Song::getGenre() const
{
    return _genre;
}

bool Song::isOfGenre(string genre) 
{
    return genre == _genre;
}


