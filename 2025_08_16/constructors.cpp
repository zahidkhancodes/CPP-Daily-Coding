#include<iostream>
using namespace std;

class Hero {
    private:
    int health;
    public:
    char *name;
    char level;
    
    // Default Constructor
    Hero() {
        cout << "Default constructor called" << endl;
    }
    
    // Parameterized Constructor - Single Parameter
    Hero(int health) {
        cout << "Parameterized constructor (health) called" << endl;
        this->health = health;
    }
    
    // Parameterized Constructor - Two Parameters
    Hero(int health, char level) {
        cout << "Parameterized constructor (health, level) called" << endl;
        this->level = level;
        this->health = health;
    }
    
    void print(){
        cout << "Health: " << health << ", Level: " << level << endl;
    }
    
    int getHealth() {
        return health;
    }
    
    char getLevel() {
        return level;
    }
    
        void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
};

int main() {
    // Default constructor
    Hero tt;
    
    // Object created statically with parameterized constructor
    Hero ramesh(10);
    cout << "Ramesh details:" << endl;
    ramesh.print();
    
    // Dynamically created object with parameterized constructor
    Hero *h = new Hero(11);
    cout << "Dynamic object details:" << endl;
    h->print();
    
    // Two parameter constructor
    Hero temp(22, 'B');
    cout << "Temp object details:" << endl;
    temp.print();
    
    // Free dynamically allocated memory
    delete h;
    
    return 0;
}
