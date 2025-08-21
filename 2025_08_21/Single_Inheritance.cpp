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

int main(){
    
    Dog d;
    
    d.speak();
    
    cout<<d.age<<endl;
    
    
    return 0;
}
