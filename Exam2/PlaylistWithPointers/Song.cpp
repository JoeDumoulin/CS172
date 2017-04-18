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

Song::Song(Song* s)
{
	if (s != NULL)
	{
		_title = s->getTitle();
		_artist = s->getArtist();
		_genre = s->getGenre();
	}
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

void Song::setGenre(string value)
{
	_genre = value;
}

bool Song::isOfGenre(string genre) 
{
    return genre == _genre;
}


