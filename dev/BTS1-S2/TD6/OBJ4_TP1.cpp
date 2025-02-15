#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TReservoir{
    private:
        string fuel;
        int fuelCapacity;
        int fuelAvailibity;
        bool fuelCheck(string testFuel){
            vector<string> fuelNames = {"super", "sp95", "sp98", "gazole"};
            for (int i=0; i<fuelNames.size(); i++){
                if (fuelNames[i]==testFuel) {
                    return true;
                }
            }
            return false;
        }
    public:
        TReservoir() = default;
        TReservoir(string fuelName, int fuelCap){
            this->fuel=fuelName;
            this->fuelCapacity=fuelCap;
            this->fuelAvailibity=fuelCap;
        }
        string getFuel(){return this->fuel;}
        void editAvailableFuel(int newFuel){
            this->fuelAvailibity+=newFuel;
        }
        int getAvailableFuel() {return this->fuelAvailibity;}
        int getMissingFuel(){
            return this->fuelCapacity-this->fuelAvailibity;
        }
};

class TStation{
    private:
        string name;
        TReservoir lsReservoirs [4];
        int ReservoirCount = 0;
    public:
        TStation() = default;
        TStation(string newName){
            this->name=newName;
        }
        int getNeeds(string fuelName){
            int missingFuel = 0;
            for(int i=0; i<(sizeof(this->lsReservoirs)/sizeof(*this->lsReservoirs)); i++){
                if(this->lsReservoirs[i].getFuel()==fuelName){
                    missingFuel=this->lsReservoirs[i].getMissingFuel();
                }
            }
            return missingFuel;
        }
        void addReservoir(TReservoir newRes, int pos){
            this->lsReservoirs[pos]=newRes;
            if(this->ReservoirCount<4){
                this->ReservoirCount++;
            }
        }
        void removeReservoir(int pos){
            TReservoir temp("N/A", 0);
            this->lsReservoirs[pos]=temp;
            if(this->ReservoirCount>0){
                this->ReservoirCount--;
            }
        }
        string getName() {return this->name;}
        string testGetFuel() {return this->lsReservoirs[1].getFuel();} // Test method to show getFuel() does work.
        bool findFuel(string name) { 
            for(int i=0; i<(sizeof(this->lsReservoirs)/sizeof(*this->lsReservoirs)); i++){
                if(this->lsReservoirs[i].getFuel()==name){ //That's why we need getFuel()
                    return true;
                }
            }
            return false;
        }
        int getLeftover(string name) {
            for(int i=0; i<(sizeof(this->lsReservoirs)/sizeof(*this->lsReservoirs)); i++){
                if(this->lsReservoirs[i].getFuel()==name){
                    return lsReservoirs[i].getAvailableFuel();
                }
            }
            return 405;
        }
        void setAvailable(string name, int newFuel){
            for(int i=0; i<(sizeof(this->lsReservoirs)/sizeof(*this->lsReservoirs)); i++){
                if(this->lsReservoirs[i].getFuel()==name){
                    return lsReservoirs[i].editAvailableFuel(newFuel);
                }
            }
        }
};

class TTalto{
    private:
        TReservoir myReservoirs [4];
        vector<TStation> myStations;
    public:
        TTalto() = default;
        int getStationCount(){return this->myStations.size();}
        TStation getStation(int index){return this->myStations[index];}
        void setReservoir(TReservoir newRes, int pos){
            this->myReservoirs[pos]=newRes;
        }
        void deliver(string fuelName, int capacity){
            for(int i=0; i<myStations.size(); i++){
                if(this->myStations[i].findFuel(fuelName)){
                    this->myStations[i].setAvailable(fuelName, capacity-(capacity*2));
                }
            }
        }
        int leftover(string fuelName, TReservoir t){
            for(int i=0; i<myStations.size(); i++){
                if(this->myStations[i].findFuel(fuelName)){
                    return this->myStations[i].getLeftover(fuelName);
                }
            }
            return 404;
        }
        void addStation(TStation newStation){
            this->myStations.push_back(newStation);
        }
};

int main(){

    TTalto talto1; // Create new Talto
    TStation station1("John's Birch"); // Create new Station
    TReservoir reservoir1("super", 100); // Create new Reservoir

    station1.addReservoir(reservoir1, 1); // Adds "reservoir1" as a reservoir of "station1"

    talto1.addStation(station1); // Adds "station1" as a station of "talto1"
    cout << talto1.getStationCount() << "\n"; // Gets how many station "talto1" has

    cout << talto1.leftover("super", reservoir1) << "\n"; // leftover() calls findFuel() which calls getFuel()
    talto1.deliver("super", 50); // deliver() calls findFuel() which calls getFuel()
    cout << talto1.leftover("super", reservoir1) << "\n"; // leftover() calls findFuel() which calls getFuel()

    return 0;
}