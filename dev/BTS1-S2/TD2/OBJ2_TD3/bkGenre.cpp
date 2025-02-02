#include "HEADERS/OBJ2-TD3.h"
#include "HEADERS/BOOK.h"
#include "HEADERS/SHELF.h"

class bkGenre {
    private:
        string tag;
        bkShelf *shelf;
        vector<bkBook*> books;
    public:
        bkGenre() = default;
        bkGenre(string newTag, bkShelf *newShelf) {
            this->tag = newTag;
            this->shelf = newShelf;
        }
        void addBook(bkBook *newBook){
            this->books.push_back(newBook);
            orderBooks();
        }
        string getTag() { return this->tag; }
        int getShelf() {return this->shelf->getNum();}

        void orderBooks(){ // a->b == -1; b->a == 1 ; a->a == 0.
            int t=0;
            bkBook *tempBook;
            while(t<this->books.size()){
                for (int i=0; i<this->books.size()-1; i++){
                    string book1=this->books[i]->getTitle();
                    string book2=this->books[i+1]->getTitle();
                    if (book1.compare(book2)<0){
                        tempBook = this->books[i];
                        this->books[i] = this->books[i+1];
                        this->books[i+1] = tempBook;
                        t=0;
                    } else {
                        t+=1;
                    }
                }
            }
        }
};
