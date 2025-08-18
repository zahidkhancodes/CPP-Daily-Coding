#include<iostream>
#include<cstring>
using namespace std;

class Hero {
    private:
    int health;
    public:
    char* name;
    char level;
    
    Hero(){
        cout<<"Simple constructor called " <<endl;
        name = new char[100];
    }
    
    // Copy Constructor
    Hero(Hero& temp) {
        
        char *ch = new char[strlen(temp.name) +1 ];
        strcpy(ch, temp.name);
        this->name = ch;
        
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    
    void print() {
        cout << endl;
        cout << "[ Name: " << this->name<< " , ";
        cout << "health: " << this->health << " , ";
        cout << "level: " << this->level << " . ]";
        cout << endl<< endl;
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
    
    void setName (char name[]) {
        strcpy(this->name , name);
    }
    
    ~Hero(){
        cout<<"Destructor called " << endl;
    }
};

int main() {
    
    //Static
    Hero a;
    
    //Dynamic
    Hero *b = new Hero();
    
    //Manually destructor called
    delete b;
    
    
    return 0;
}
