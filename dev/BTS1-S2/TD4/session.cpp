#include "HEADERS/OBJ2_TD4.h"
#include "HEADERS/PART.h"

class session{
    private:
        int id;
        date *startDate;
        int maxPart;
        vector<participant*> listPart;
    public:
        session(string newID, date *newDate, int newMax){
            this->id=stoi(newID);
            this->startDate=newDate;
            this->maxPart=newMax;
        }
        void addPart(participant *newPart){
            this->listPart.push_back(newPart);
        }
        int getID(){ return this->id;}
        bool isFull(){return this->listPart.size()==this->maxPart;}
};