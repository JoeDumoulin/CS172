// Playlist.cpp - playlist class implementation

#include<string>
#include <vector>
#include <fstream>

#include "Song.h"
#include "Playlist.h"

using namespace std;

Playlist::Playlist(string name)
{
	_name = name;

	fstream infile(_name, ios::in);
	if (infile.is_open())
	{
		string title, artist, genre;
		while (infile >> title >> artist >> genre)
		{
			Song* s = new Song(title, artist, genre);
			songList.push_back(s);
		}
	}

}

Playlist::~Playlist()
{
	fstream outfile(_name, ios::out);
	if (outfile.is_open())
	{
		for (int i = 0; i < songList.size(); i++)
		{
			outfile << songList[i]->getTitle() << " "
				<< songList[i]->getArtist() << " "
				<< songList[i]->getGenre() << endl;
			delete songList[i];
		}
	}
	else
	{
		for (int i = 0; i < songList.size(); i++)
		{
			delete songList[i];
		}
	}
}

string Playlist::getName() const
{
	return _name;
}

Song* Playlist::getSongAtIndex(int index)
{
	if (index >= 0 && index < songList.size())
	{
		return songList[index];
	}
	return NULL;
}

void Playlist::addSong(Song* song)
{
	Song* s = new Song(song);
	songList.push_back(s);
}

int Playlist::size()
{
	return songList.size();
}

Song* Playlist::getSongByName(string title)
{
	for (int i = 0; i < songList.size(); i++)
	{
		if (songList[i]->getTitle() == title)
		{
			return songList[i];
		}
	}
	return NULL;
}

