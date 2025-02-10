#include <iostream>

using namespace std;

class IProjectile{ // "I" = Interface, this is our Projectile Interface. The interface we'll use for our projectile-throwing weapon classes.
    public:
        virtual void shoot() = 0; // Must be implemented by any class that inherits "IProjectile"
        virtual int getAmmo() = 0; // Must be implemented by any class that inherits "IProjectile"                     | Made by Axel B.
};

class Gun : public IProjectile{
    private:
        int bullets;
    public:
        Gun(int ammo){ this->bullets=ammo;}
        void shoot() override {
            cout << "\nPAN PAN PAN! You shot a bullet!";
            this->bullets-=3;
        }
        int getAmmo(){return this->bullets;} // "override" isn't necessary as the compiler will understand we're overriding the "getAmmo" virtual method, but it's good practice to still use it.
};

class Bow : public IProjectile{
    private:
        int arrows;
    public:
        Bow(int ammo){ this->arrows=ammo;}
        void shoot() override {
            cout << "\nFWOOSH! You shot an arrow!";
            this->arrows-=1;
        }
        int getAmmo(){return this->arrows;} // "override" isn't necessary as the compiler will understand we're overriding the "getAmmo" virtual method, but it's good practice to still use it.

};

int main() {
    Gun* PanpanGun = new Gun(100);
    PanpanGun->shoot();
    Bow* Wooderloo = new Bow(10);
    Wooderloo->shoot();

    cout << "\nGun: " << PanpanGun->getAmmo() << "\nBow: " << Wooderloo->getAmmo();
    return 0;
}
