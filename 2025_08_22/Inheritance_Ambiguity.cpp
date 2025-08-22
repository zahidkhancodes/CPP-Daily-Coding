#include<iostream>
using namespace std;

class A{
    public:
    void func(){
        cout<<"A here"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"B here"<<endl;
    }
};

class C : public A , public B{
    
};

int main(){
    
    C calling;
    //calling.func();           //It will give error.
    
    calling.A::func();
    calling.B::func();
    
    return 0;
}
