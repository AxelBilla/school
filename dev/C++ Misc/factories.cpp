#include <iostream>

using namespace std;


class Weapon{ // Create our "Weapon" class
    private:
        int damage;
    public:
        Weapon(int dmg){ this->damage=dmg;} // The constructor of "Weapon"
        ~Weapon(){cout << "\n\n--------\nDestroyed\n--------";} // The destructor of "Weapon"

        void display(){
            cout << "\nThis splendid weapon does " << this->damage << " damage.";
        }
};

class WeaponFactory{ //Class made out of a "static" method, meant merely to avoid "main" (substitute for the script the client can see) from accessing the constructor of "Weapon"  | Made by Axel B.
    public:
        static Weapon* createWeapon(int dmg) {return new Weapon(dmg);} // Calls our "Weapon" class's constructor with the arguments we gave it.
};

int main() {
    Weapon* nogata = WeaponFactory::createWeapon(10); // Now the client does not access the constructor directly
    nogata->display();
    delete nogata;
    return 0;
}
