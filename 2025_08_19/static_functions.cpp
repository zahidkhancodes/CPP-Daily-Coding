//Static functions can only access static members. 

#include<iostream>
#include<cstring>
using namespace std;

class Hero {
    private:
    int health;
    public:
    char* name;
    char level;
    static int timeToComplete;
    
    // Hero(){
    //     cout<<"Simple constructor called " <<endl;
    //     name = new char[100];
    // }
    
    // // Copy Constructor
    // Hero(Hero& temp) {
        
    //     char *ch = new char[strlen(temp.name) +1 ];
    //     strcpy(ch, temp.name);
    //     this->name = ch;
        
    //     cout << "Copy constructor called" << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }
    
    // void print() {
    //     cout << endl;
    //     cout << "[ Name: " << this->name<< " , ";
    //     cout << "health: " << this->health << " , ";
    //     cout << "level: " << this->level << " . ]";
    //     cout << endl<< endl;
    // }
    
    // int getHealth() {
    //     return health;
    // }
    
    // char getLevel() {
    //     return level;
    // }
    
    // void setHealth(int h) {
    //     health = h;
    // }

    // void setLevel(char ch) {
    //     level = ch;
    // }
    
    // void setName (char name[]) {
    //     strcpy(this->name , name);
    // }

    static int random(){
        return timeToComplete ;
    }
};

int Hero::timeToComplete = 5;

int main() {

    // cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;
    
    
    return 0;
}
