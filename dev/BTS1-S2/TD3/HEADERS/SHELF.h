#ifndef SHELF
#define SHELF
#include "OBJ2-TD3.h"

class bkGenre;
class bkShelf {
    private:
        int shelfNum;
        vector<bkGenre*> genres;
        static int instances;
    public:
        bkShelf();
        int getNum();
        void addGenre(bkGenre *newGenre);
        bkGenre *findGenre(string targetGenre);
        static int getInstances();
};

#endif