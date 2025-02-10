#include "HEADERS/OBJ2_TD4.h"
#include "HEADERS/PART.h"
#include "HEADERS/SESS.h"

class formation{
    private:
        string id;
        string name;
        int duration;
        vector<participant*> registeredParts;
        vector<session*> registeredSessions;
        bool sortBySeniority(participant *A, participant *B) {
            return (A->getSeniority() < B->getSeniority()); //Used by .sort() to judge whether we need to switch the objects at the indexes n & n+1 with each other, or not.
        }
    public:
        void includePart(){
            session *Temp = new session();
            registeredParts.sort(sortBySeniority);
            for (int i=0;i<registeredParts.size();i++){ //Goes through every participant.
                    for (int y=0;y<registeredSessions.size();y++){ //Goes through every session.
                        try{
                            for (int z=0;z<registeredSessions.size();z++){ //Goes through every session again so we can check every possible option for a participant's session's ID and our registeredSessions's session's ID.
                                Temp = registeredParts[i]->getSignedSession(y); //Throws an error if "y" exceeds the size of a participant's list of signed-to sessions, hence the "try...catch"
                                if (registeredSessions[z]->getID()==Temp->getID()){ //Check if both sessions have the same ID or not
                                    if (!registeredSessions[y]->isFull()){ //If they do, check if it's full or not yet.
                                        registeredSessions[z]->addPart(registeredParts[i]); //If it's not, add the participant to that session
                                    }
                                }
                            }
                        } catch(const std::exception& e){    
                            cout << "Participant does not have this many sessions and has no matching session.";
                        }
            }
        }
    }
}