#ifndef BOOKSHELF
#define BOOKSHELF

#include "OBJ2-TD3.h"

class bkShelf;
class bkGenre;
class bkBook;
class bkBookshelf{
    private:
        vector<bkShelf*> shelves;
    public:
        bkBookshelf();
        bkGenre *convertGenre(string tagGenre);
        bkBook *addBook(string nTitle, string nGenre);
        void addShelf(bkShelf *newShelf);
};


#endif