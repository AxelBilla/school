#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TReservoir {
private:
    string fuel;
    int fuelCapacity;
    int fuelAvailibity;
    bool fuelCheck(string testFuel) {
        vector<string> fuelNames = { "super", "sp95", "sp98", "gazole" };
        for (int i = 0; i < fuelNames.size(); i++) {
            if (fuelNames[i] == testFuel) {
                return true;
            }
        }
        return false;
    }
    string lowerString(string ogString) {
        for (int i = 0; i < ogString.size(); i++) {
            ogString[i] = tolower(ogString[i]);
        }
        return ogString;
    }
public:
    TReservoir(string fuelName, int fuelCap) {
        fuelName = lowerString(fuelName);
        try {
            if (fuelName != "n/a") {
                fuelCheck(fuelName) ? this->fuel = fuelName : throw invalid_argument("super/sp95/sp98/gazole only");
            }
            else { this->fuel = fuelName; }
        }
        catch (const std::exception&) { cout << "[ERROR] Invalid Fuel Type: " << fuelName << "\n"; }
        this->fuelCapacity = fuelCap;
        this->fuelAvailibity = fuelCap;
    }
    string getFuel() { return this->fuel; }
    void editAvailableFuel(int newFuel) {
        newFuel = fuelAvailibity + newFuel;
        if (newFuel >= 0 && newFuel <= fuelCapacity) {
            this->fuelAvailibity = newFuel;
        }
        else if (newFuel < 0 || newFuel > fuelCapacity) {
            cout << "[ERROR] Invalid Input :: Operation Aborted. (Quantity added/removed is lesser than 0 or greater than max capacity)\n";
        }
    }
    int getAvailableFuel() { return this->fuelAvailibity; }
    int getMissingFuel() {
        return this->fuelCapacity - this->fuelAvailibity;
    }
};

class TStation {
private:
    string name = "N/A";
    TReservoir* lsReservoirs[4] = {};
    int ReservoirCount = 0;
    void fillReservoirs() {
        TReservoir* temp = new TReservoir("N/A", 0);
        for (int i = 0; i < 4; i++) {
            this->lsReservoirs[i] = temp;
        }
    }
public:
    TStation() {
        fillReservoirs();
    };
    TStation(string newName) {
        this->name = newName;
        fillReservoirs();
    }
    int getNeeds(string fuelName) {
        int missingFuel = 0;
        for (int i = 0; i < (sizeof(this->lsReservoirs) / sizeof(*this->lsReservoirs)); i++) {
            if (this->lsReservoirs[i]->getFuel() == fuelName) {
                missingFuel = this->lsReservoirs[i]->getMissingFuel();
            }
        }
        return missingFuel;
    }
    bool findFuel(string name) {
        for (int i = 0; i < (sizeof(this->lsReservoirs) / sizeof(*this->lsReservoirs)); i++) {
            if (this->lsReservoirs[i]->getFuel() == name) {
                return true;
            }
        }
        return false;
    }
    void addReservoir(TReservoir* newRes, int pos) {
        try
        {
            string fuelName = newRes->getFuel();
            if (fuelName != "n/a") {
                findFuel(fuelName) ? throw invalid_argument("This fuel type already exists.") : this->lsReservoirs[pos - 1] = newRes;
            }
            else { this->lsReservoirs[pos - 1] = newRes; }
        }
        catch (const std::exception&) { cout << "[ERROR] Repeat Fuel Type : " << newRes->getFuel() << "\n"; }
        if (this->ReservoirCount < 4) {
            this->ReservoirCount++;
        }
    }
    void removeReservoir(int pos) {
        TReservoir* temp = new TReservoir("N/A", 0);
        this->lsReservoirs[pos] = temp;
        if (this->ReservoirCount > 0) {
            this->ReservoirCount--;
        }
    }
    string getName() { return this->name; }
    int getLeftover(string name) {
        for (int i = 0; i < (sizeof(this->lsReservoirs) / sizeof(*this->lsReservoirs)); i++) {
            if (this->lsReservoirs[i]->getFuel() == name) {
                return lsReservoirs[i]->getAvailableFuel();
            }
        }
        return 405;
    }
    void setAvailable(string name, int newFuel) {
        for (int i = 0; i < (sizeof(this->lsReservoirs) / sizeof(*this->lsReservoirs)); i++) {
            if (this->lsReservoirs[i]->getFuel() == name) {
                this->lsReservoirs[i]->editAvailableFuel(newFuel);
            }
        }
    }
};

class TTalto {
private:
    TReservoir* myReservoirs[4] = {};
    vector<TStation*> myStations = {};
    ~TTalto() {};
public:
    TTalto() = default;
    size_t getStationCount() { return this->myStations.size(); }
    TStation* getStation(int index) { return this->myStations[index]; }
    void setReservoir(TReservoir* newRes, int pos) {
        this->myReservoirs[pos - 1] = newRes;
    }
    void refill(string fuelName, int capacity) {
        for (int i = 0; i < myStations.size(); i++) {
            if (this->myStations[i]->findFuel(fuelName)) {
                this->myStations[i]->setAvailable(fuelName, capacity); // UML's doc said it had to take away what we inputted
            }
        }
    }
    void deliver(string fuelName, int capacity) {
        refill(fuelName, capacity - (capacity * 2));
    }
    int leftover(string fuelName) {
        for (int i = 0; i < myStations.size(); i++) {
            if (this->myStations[i]->findFuel(fuelName)) {
                return this->myStations[i]->getLeftover(fuelName);
            }
        }
        return 404;
    }
    void addStation(TStation* newStation) {
        this->myStations.push_back(newStation);
    }
};

int main() {

    TTalto* talto1 = new TTalto; // Creates new Talto

    TStation* station1 = new TStation("John's Birch"); // Creates new Station

    talto1->addStation(station1);
    cout << talto1->getStationCount() << "\n";

    TReservoir* reservoir1 = new TReservoir("SUPER", 100); // Creates new Reservoir
    station1->addReservoir(reservoir1, 1);

    TReservoir* reservoir2 = new TReservoir("gazole", 300); // Creates new Reservoir
    station1->addReservoir(reservoir2, 2);


    cout << talto1->leftover("super") << "\n";
    talto1->deliver("super", 50);
    cout << talto1->leftover("super") << "\n";

    cout << talto1->leftover("gazole") << "\n";
    talto1->deliver("gazole", 400); // Taking out more than it has left
    talto1->deliver("gazole", 40);
    talto1->refill("gazole", 100); // Putting in more than its max capacity
    talto1->refill("gazole", 10);
    cout << talto1->leftover("gazole") << "\n";


    return 0;
}