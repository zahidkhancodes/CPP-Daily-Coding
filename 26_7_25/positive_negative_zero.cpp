#include <iostream>
using namespace std;

int main(){
    
    int x ; 
    
    cout << "Enter the Number : " << endl;
    cin >> x;
    
    if ( x > 0 ){
        cout << x << " is Positive " << endl; 
    }
    else if (x < 0 ){
        cout << x << " is Negative " << endl; 
    }
    else {
        cout << x << " is Zero " << endl; 
    }
    return 0;
}
