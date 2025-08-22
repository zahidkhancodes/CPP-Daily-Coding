//Combination of more than 1 type of Inheritance.

#include<iostream>
using namespace std;

class A {
    public:
    void func1(){
        cout<<"Inside the A."<<endl;
    }
};

class D {
    public:
    void func4(){
        cout<<"Inside the D."<<endl;
    }
};

class B : public A {
    public:
    void func2(){
        cout<<"Inside the B."<<endl;
    }
};

class C : public A , public D {
    public:
    void func3(){
        cout<<"Inside the C."<<endl;
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
    call3.func4();
    cout<<'\n';
    
    return 0;
}
