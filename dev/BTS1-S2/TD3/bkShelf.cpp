#include "HEADERS/OBJ2-TD3.h"
#include "HEADERS/GENRE.h"

class bkShelf {
    private:
        int shelfNum;
        vector<bkGenre*> genres;
        static int instances;
    public:
        bkShelf(){
            bkShelf::instances++;
            this->shelfNum = bkShelf::instances;
        }
        void addGenre(bkGenre *newGenre){
            this->genres.push_back(newGenre);
        }
        bkGenre *findGenre(string targetGenre){
            for (int i=0; i<this->genres.size(); i++){
                if (this->genres[i]->getTag()==targetGenre){
                    return genres[i];
                }
            }
            cout << "[ERROR] '" << targetGenre << "' couldn't be found";
        }
        int getNum() { return this->shelfNum; }
        static int getInstances() { return bkShelf::instances; }
};
int bkShelf::instances = 0;