// Song.h - declarations for Song.h
//
#ifndef SONG_H_
#define SONG_H_

#include <string>

using namespace std;

class Song
{
    private:
        string _title;
        string _artist;
        string _genre;

    public:
        // default song
        Song();
        // allow the caller to set up the song.  
        // valid genres are "ModernPop", "80s", "Classical" and "Americana".
        Song(string title, string artist, string genre);
        
        string getTitle() const;  // return the song title
        string getArtist() const; // return the artist who performed the song
        string getGenre() const;  // return the genre of the song
		void setGenre(string value);	// set a song genre to a new value

        // return true if the song is of the genre.
        bool isOfGenre(string genre);

};

#endif // SONG_H_

