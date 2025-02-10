#include "HEADERS/OBJ2_TD4.h"
#include "HEADERS/SESS.h"

class participant{
    private:
        string lname;
        string fname;
        int seniority;
        session *currentSession;
        vector<session*> signedUpSessions;
    public:
        participant(string newLName, string newFName, int newSeniority, vector<session*> newSessions){
            this->lname=newLName;
            this->fname=newFName;
            this->seniority=newSeniority;
            this->signedUpSessions=newSessions;
        }
        session *getSignedSession(int index){return signedUpSessions[i];}
        void setCurrentSession(session *newCurrent){
            this->currentSession=newCurrent;
        }
    
        int getSeniority(){return this->seniority;}
};