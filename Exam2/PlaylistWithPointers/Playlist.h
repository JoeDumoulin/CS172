// Playlist.h - definition of the playlist
#ifndef PLAYLIST_H_
#define PLAYLIST_H_
#include <string>
#include <vector>

#include "Song.h"

using namespace std;

class Playlist
{
public:
	Playlist(string name);

	~Playlist();

	string getName() const;

	Song* getSongAtIndex(int index);

	void addSong(Song* song);

	int size();

	Song* getSongByName(string);

private:
	string _name;
	vector<Song*> songList;
};



#endif // PLAYLIST_H_