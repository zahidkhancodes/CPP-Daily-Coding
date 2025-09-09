#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    
    const int BITS = 8;
    
    for(int i = BITS - 1; i>=0; i--){
        int bits = ( n >> i ) &1;
        cout << bits;
    }
    cout << endl;
  return 0;
}
