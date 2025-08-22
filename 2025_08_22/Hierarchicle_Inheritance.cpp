#include<iostream>
using namespace std;

class A {
    public:
    void func1(){
        cout<<"Inside the func1."<<endl;
    }
};

class B : public A {
    public:
    void func2(){
        cout<<"Inside the func2."<<endl;
    }
};

class C : public A {
    public:
    void func3(){
        cout<<"Inside the func3."<<endl;
    }
};

int main(){
    A call1;
    call1.func1();
    cout<<endl;
    
    B call2;
    call2.func1();
    call2.func2();
    cout<<'\n';
    
    C call3;
    call3.func1();
    call3.func3();
    cout<<'\n';
    
    return 0;
}
