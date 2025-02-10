#ifndef PART_H
#define PART_H

#include <string>
#include <vector>

using namespace std;

class session;
class participant{
    private:
        string lname;
        string fname;
        int seniority;
        session currentSession;
        vector<session> signedUpSession;
    public:
        participant(string newLName, string newFName, int newSeniority, vector<session> newSessions);
        session getSignedSession(int index);
        void setCurrentSession(session newCurrent);
};

#endif