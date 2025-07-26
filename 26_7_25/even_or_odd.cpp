#include <iostream>
using namespace std;

int main(){
    
    int x ;
    
    cout << "Enter the Number :" << endl;
    cin >> x;
    
    if( x % 2 == 0 ){
        cout << x << " is Even " << endl;
    }
    
    else{
        cout << x << " is Odd " << endl;
    }
}
