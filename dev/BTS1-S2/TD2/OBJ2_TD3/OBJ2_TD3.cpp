#include "HEADERS/OBJ2-TD3.h"

#include "HEADERS/BOOKSHELF.h"
#include "HEADERS/SHELF.h"
#include "HEADERS/GENRE.h"
#include "HEADERS/BOOK.h"


int main() {

    bkBookshelf *firstBS = new bkBookshelf();
    bkShelf *firstShelf = new bkShelf();
    cout << firstShelf->getNum();
    bkGenre *firstGenre = new bkGenre("Fantasy", firstShelf);
    bkBook *firstBook = new bkBook("Tok", firstGenre);

    cout << "test";
    
    return 0;
};