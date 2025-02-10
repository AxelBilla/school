#include <iostream>
#include <deque>

using namespace std;

int main() {

    deque<int> rnd; //Just like a vector
    rnd.push_back(1); //Just like a vector
    rnd.push_back(2); //Juts like a vector
    
    deque<int>::iterator it; //Gotta declare its iterator's proprieties
    for(it=rnd.begin(); it!=rnd.end(); ++it){ //Iterate through our deque's content. (.begin() & .end() returns an iterator, aka the one of the first and last slots) | Made by Axel B.
        cout << *it; //"it" takes the address of each "index" as it iterates (hence the pointer to show what's inside)
    }
    return 0;
}
