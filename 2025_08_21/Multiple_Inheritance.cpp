#include<iostream>
using namespace std;


class Animal{
    public:
    int weight ;
    int age = 5;
    
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human{
    public:
    string colour;
    
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Hybrid : public Animal , public Human {
    
};

int main(){
    
    Hybrid obj;
    obj.speak();
    obj.bark();
    
    
    return 0;
}
