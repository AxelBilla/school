#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class userAccount{
    public:
        string id;
        string lname;
        string fname;
        float balance;

        void displayClass(){
            cout << "\nID: " << this->id;
            cout << "\nLast Name: " << this->lname;
            cout << "\nFirst Name: " << this->fname;
            cout << "\nBalance: " << this->balance;
        }
};
class accountMoves{
    public:
        string id;
        string name;
        float amount;

        void displayClass(){
            cout << "\nID: " << this->id;
            cout << "\nName: " << this->name;
            cout << "\nAmount: " << this->amount;
        }
};

userAccount createUser() {
    userAccount newUser;
    string a;
    while (true) {
        try {
            cout << "\n\nID: ";
            cin >> newUser.id;
            cout << "\nLast Name: ";
            cin >> newUser.lname;
            cout << "\nFirst Name: ";
            cin >> newUser.fname;
            cout << "\nBalance: ";
            cin >> a;
            newUser.balance=stof(a);
            break;
        } catch (exception& e) {
            cout << "\n\nUnexpected Error, please try again.";
        }
    }
    return newUser;
}

accountMoves createMove() {
    accountMoves newMove;
    string a;
    while (true) {
        try {
            cout << "\n\nID: ";
            cin >> newMove.id;
            cout << "\nName: ";
            cin >> newMove.name;
            cout << "\nAmount: ";
            cin >> a;
            newMove.amount=stof(a);
        }catch (exception& e) {
            cout << "\n\nUnexpected Error, please try again.";
            continue;
        } break;
    };
    return newMove;
}

template<typename T>
void displayList (T list) {
    if (list.size()!=0) {
        cout << "\n-----------------------";
        for(int i=0; i<list.size(); i++) {
            list[i].displayClass();
            cout << "\n-----------------------";
        }
    } else {
        cout << "\n\nNo data was found.\n\n";
    }
}


int main() {
    int x=0;
    string reply;
    vector<userAccount> bnqUsers{};
    vector<accountMoves> bnqMoves{};
    while (true) {
        if (x==1) {
            cout << "\n\n\n";
        }
        x=1;
        cout << "What do you wish to do?\n";
        cout << "[1]: Add User | [2]: Move Funds | [3]: Display | [4]: Quit |\n";
        cout << "(Input): ";
        cin >> reply;
        try {
            switch (stoi(reply))
            {
            case 1:
                bnqUsers.push_back(createUser());
                continue;
            case 2: {
                accountMoves newMove=createMove();
                bnqMoves.push_back(newMove);
                for(int i=0; i<bnqUsers.size(); i++) {
                    if (bnqUsers[i].id==newMove.id)
                    {
                        bnqUsers[i].balance+=newMove.amount;
                    }
                }}
                continue;
            case 3:
                x=0;
                while (x==0) {
                    cout << "\n\n[1]: Accounts | [2]: Movements | [3]: Back";
                    cout << "\n(Input): ";
                    cin >> reply;
                    switch (stoi(reply)) {
                        case 1:
                            displayList(bnqUsers);
                            continue;
                        case 2:
                            displayList(bnqMoves);
                            continue;
                        case 3:
                            cout << "\n\n\n";
                            x=1;
                            continue;
                            }
                } continue;
            case 4:
                break;
            default:
                continue;
        } break;
        }catch (exception& e) {
            cout << "\n\nUnexpected Error, please try again.";
            continue;
        }
    }
    return 0;
};