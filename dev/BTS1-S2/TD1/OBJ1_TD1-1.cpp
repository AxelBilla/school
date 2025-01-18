#include <iostream>
#include <string>

using namespace std;

class userAccount{
    public: // This tells everyone who may use your code that they can re-use your stuff freely, unlike private stuff.
        int id;
        string name;
        float balance;
        // CONSTRUCTOR
        userAccount(int newID, string newName, float newBalance=0){
            this->id=newID;
            this->name=newName;
            this->balance=newBalance; //If you remove newBalance from the parameters, you can just say "this->balance=0" and it'll default to 0 when creating an object.
        }

        // FUNCTIONS
        void credit(float amount){ // "this->" indicates that we're talking about our current object
            this->balance+=amount; // i.e, "user1.balance+=amount" ==== "this->balance+=amount"
        }                          // It's useful since it makes the functions work with any object of this class
        void debit(float amount){
            this->balance-=amount;
        }
        void checkBalance(){
            cout << "Current Balance: " << this->balance << "\n";
        }
        int getID(){
            return this->id;
        }
        string getName(){
            return this->name;
        }
        float getBalance(){
            return this->balance;
        }
        void editName(string newName){
            this->name=newName;
        }

        
        void multBalance(float amount){     // Ex1-4
            this->balance*=amount;          // Ex1-4
        }                                   // Ex1-4

        void showObj(){                             // Ex1-1
            cout << "\n-----------------";          // Ex1-1
            cout << "\nID: " << this->id;           // Ex1-1
            cout << "\nName: " << this->name;       // Ex1-1
            cout << "\nBalance: " << this->balance; // Ex1-1
            cout << "\n-----------------";          // Ex1-1
        }                                           // Ex1-1
};

int main() {
    userAccount user1(1,"Dupond", 2000);    // Ex1-2
    userAccount user2(2,"Durand", 400);     // Ex1-2
    userAccount user3(3,"Lajoie", 20000);   // Ex1-2
    
    user1.showObj();    // Ex1-3
    user2.showObj();    // Ex1-3
    user3.showObj();    // Ex1-3

    cout << "\n\n\n-----------------------------\n\n";

    user1.multBalance(1.1);     // Ex1-4
    user2.multBalance(1.1);     // Ex1-4
    user3.multBalance(1.1);     // Ex1-4
    user1.showObj();            // Ex1-4
    user2.showObj();            // Ex1-4
    user3.showObj();            // Ex1-4

    cout << "\n\n\n-----------------------------\n\n";

    float giftAmnt = 5000;                          //Ex1-5
    float balStop = user3.balance-giftAmnt;         //Ex1-5
    user3.debit(giftAmnt);                          //Ex1-5
    user1.credit(giftAmnt);                         //Ex1-5
    user3.debit(balStop);                           //Ex1-5
    user2.credit(balStop);                          //Ex1-5
    user1.showObj();                                //Ex1-5
    user2.showObj();                                //Ex1-5
    user3.showObj();                                //Ex1-5

    return 0;
};
