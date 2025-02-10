#ifndef GENRE
#define GENRE

class bkBook;
class bkShelf;
class bkGenre {
    private:
        string tag;
        bkShelf *shelf;
        vector<bkBook*> books;
        int getShelf(string bookTitle);
    public:
        bkGenre();
        bkGenre(string newTag, bkShelf *newShelf);
        void addBook(bkBook *newBook);
        string getTag();
        int getShelf();
        void orderBooks();
};

#endif