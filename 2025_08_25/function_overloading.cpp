#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    void func(){
        cout << "Hey " << endl;
    }
    void func(string name){
        cout << "Hiii " << name << endl;
    }
    int func (char name){
        cout<<"Hello "<<name<< endl;
        return 1 ;
    }
};
int main(){
    A Greeting;
    Greeting.func();
    Greeting.func("Boy");
    Greeting.func('X');
    return 0;
}
