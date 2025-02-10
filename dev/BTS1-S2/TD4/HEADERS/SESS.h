#ifndef SESSION_H
#define SESSION_H

#include <string>
#include <vector>

using namespace std;

struct date;
class participant;
class session{
    private:
        int id;
        date startDate;
        int maxPart;
        vector<participant> listPart;
    public:
        session(string newID, date newDate, int numPart);
        void addPart(participant newPart);
        int getID();
        bool isFull();
};

#endif