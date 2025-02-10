#include "HEADERS/OBJ2-TD3.h"
#include "HEADERS/GENRE.h"

class bkBook {
    private:
        string title;
        bkGenre *genre;
    public:
        bkBook(string newTitle, bkGenre *newGenre) {
            this->title = newTitle;
            this->genre = newGenre;
            newGenre->addBook(this);
        }
        string getTitle() {
            return this->title;
        }
        bkGenre *getGenre() {
            return this->genre;
        }
};