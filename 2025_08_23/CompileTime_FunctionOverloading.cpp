#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    void func(){
        cout << "Hello " << endl;
    }
    
    void func(string name){
        cout << "Hii " << name << endl;
    }
    
    int func (char name){
        cout<<"Hlw "<<name<< endl;
        return 1 ;
    }
};

int main(){
    A Greeting;
    Greeting.func();
    Greeting.func("Zahid");
    Greeting.func('H');
    
    return 0;
}
