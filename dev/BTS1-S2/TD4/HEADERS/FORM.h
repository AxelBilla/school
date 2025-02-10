#ifndef FORM_H
#define FORM_H

#include <string>
#include <vector>

using namespace std;

class participant;
class session;
class formation{
    private:
        string id;
        string name;
        int duration;
        vector<participant> registeredPart;
        vector<session> registeredSession;
    public:
        void addPart();
}
#endif