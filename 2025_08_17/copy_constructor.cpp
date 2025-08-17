#include<iostream>
using namespace std;

class Hero {
    private:
    int health;
    public:
    char level;
    
    // Parameterized constructor
    Hero(int h, char l) {
        health = h;
        level = l;
    }
    
    // Copy Constructor
    Hero(Hero& temp) {
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
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
    Hero S(70 , 'C');
    S.print();
    
    //Copy constructor
    Hero R(S);
    R.print();

    
    return 0;
}
