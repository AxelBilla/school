#ifndef BOOK
#define BOOK

class bkGenre;
class bkBook {
	private:
		string title;
		bkGenre *genre;
	public:
		bkBook(string newTitle, bkGenre *newGenre);
		string getTitle();
		bkGenre *getGenre();
};

#endif