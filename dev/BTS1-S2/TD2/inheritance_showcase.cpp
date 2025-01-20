#include <iostream>
#include <string>

using namespace std;

class restaurant{ //
	private:
		string name; // i.e, "Los Pollos Hermanos"
		string addr; // i.e, "4257 Isleta Boulevard Southwest, Albuquerque"
		string type; // i.e, "Mexican"
	public:
		restaurant(string newName, string newAddr){ //Gets used when we only pass two args, so the type of restaurant is ommited.
			this->name=newName; this->addr=newAddr; //Sets the object's attributes to what we gave it.
		}
		restaurant(string newName, string newAddr, string newType){ //Gets used when we pass all three args, so we also have a type.
			this->name=newName; this->addr=newAddr; this->type=newType; //Sets the object's attributes to what we gave it
		}
		string getName(){ return this->name;} //Returns the "name" attribute of our object, useful since the attribute itself is within a private scope and thus can't be obtained from outside the class (i.e, within child classes)
		string getAddress(){ return this->addr ;} // ^^^^^^
		string getType(){ return this->type ;} // ^^^^^^
		void setAddress(string newAddr) { this->addr = newAddr;} //Sets the "address" attribute of our object, useful since the attribute itself is within a private scope and thus can't be manipulated from outside the class (i.e, obj1.name="test" doesn't work in another function)
		void setName(string newName) { this->name= newName;} // ^^^^^^
		void setType(string newType) { this->type= newType;} // ^^^^^^
		
};

class badRestaurant: public restaurant { // Creates a class of "badRestaurant", who inherits every attributes and methods from its parent class "restaurant". The "public" scope here tells the child that every attributes/methods it got from its parent are to be set within a "public" scope, which won't affect already "private" or "protected" attributes/methods from the parent (i.e, the attributes will stay "private" here)
	private:
		string comm;
	public:
		badRestaurant(string z, string d) : restaurant(d, z){ //Get the args from the child's constructor, which we then pass to the parent's constructor to handle (here the first constructor that sets only the name & address is used, which means our "d" variable is "newName" & our "z" variable is "newAddress"), but we can still use those args on our child's constructor (here, "z" is both used for the child's "comm" attribute & the "address" attribute inherited from its parent) | Made by Axel B.
			this->comm=z;
		}
		void sayVomit(){
			cout << "ewww" << " is " << this->getName(); // "name" is a private attribute of badRestaurant's parent, so we can't call it directly. We have to use the public method we created to get it.
		}
};

int main(){
	restaurant newPlace1("Los polos", "32 arroya");
	restaurant newPlace2("Latika", "42 goyo", "thai");
	badRestaurant newPlace3("r/", "lo");

	cout << newPlace1.getName() << newPlace1.getAddress() << newPlace1.getType() << "\n";
	cout << newPlace2.getName() << newPlace2.getAddress() << newPlace2.getType() << "\n";
	cout << newPlace3.getName() << newPlace3.getAddress() << newPlace3.getType() << "\n";
	newPlace3.sayVomit();

	return 0;
}
