#include<iostream>
using namespace std;

class Animal{
    public:
    int weight ;
    int age = 5;
    
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal {
};

class StreetDog : public Dog {
};

int main(){
    
    StreetDog x;
    x.speak();
    
    
    return 0;
}
