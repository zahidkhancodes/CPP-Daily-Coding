#include<iostream>
using namespace std;

int main(){
    int amount = 1330;
    
    switch(1){
        case 1: 
        
        cout << "100Rs note : " << amount/100 << endl;
        amount %= 100;
        
        cout << "50Rs note : " << amount/50 << endl;
        amount %= 50;
        
        cout << "20Rs note : " << amount/20 << endl;
        amount %= 20;
        
        cout << "10Rs note : " << amount/10 << endl;
        amount %= 10;
    }
    return 0;
}
