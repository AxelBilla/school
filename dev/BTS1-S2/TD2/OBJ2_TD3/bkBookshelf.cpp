#include "HEADERS/OBJ2-TD3.h"
#include "HEADERS/BOOK.h"
#include "HEADERS/GENRE.h"
#include "HEADERS/SHELF.h"

class bkBookshelf{
    private:
        vector<bkShelf*> shelves = {};
    public:
        bkBookshelf() = default;
        bkGenre *convertGenre(string tagGenre){
            bkGenre * tempGenre;
            for(int i=0; i<shelves.size(); i++){
                tempGenre = this->shelves[i]->findGenre(tagGenre);
                if (tempGenre->getTag()==tagGenre){
                    break;
                }
            }
            return tempGenre;
        }
        
        bkBook *addBook(string nTitle, string nGenre){
            bkBook *newBook = new bkBook(nTitle, convertGenre(nGenre));
            return newBook;
        }
        
        void addShelf(bkShelf *newShelf){
            this->shelves.push_back(newShelf);
        }
};