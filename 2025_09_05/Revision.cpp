//1. Fibonacchi series
#include<iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    
    for( int i = 1; i <= n ; i ++ ){
        int nxtNum = a+b;
        cout << nxtNum << " ";
        
        a=b;
        b=nxtNum;
    }
    return 0;
}
/*  10
  0 1 1 2 3 5 8 13 21 34 55 89  */

//2. Is Prime Or Not Prime
#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    
    bool isPrime = 1;
    
    if ( n == 0 || n == 1){
        cout << "Not Prime";
        return 0;            //Without it the program will keep going
    }
    
    for ( int i = 2; i<n ; i++){
        if ( n%i==0){
            // cout <<" Not Prime ";
            isPrime = 0;
            break;
        }
    }
    
    if ( isPrime == 0 ){
        cout << "Not Prime";
    }
    else {
        cout << "Is Prime";
    }
    
    return 0;
}

//3.
#include<iostream>
using namespace std;

int main(){
    
    for(int i = 1; i<=3 ; i++){
        cout<<"HI"<<endl;
        cout<<"HEY"<<endl;
        continue;
        cout<<"OYE"<<endl;
    }
    
    for(int i = 1; i<=3 ; i++){
        cout<<"hi"<<endl;
        cout<<"hey"<<endl;
        break;
        cout<<"oye"<<endl;
    }
    
    return 0;
}
/*  HI
    HEY
    HI
    HEY
    HI
    HEY
    hi
    hey    */

//4.
#include<iostream>
using namespace std;

int main(){
    
    for(int i = 0; i<=5; i++){
        cout << i << " ";
    }
    //0 1 2 3 4 5 
    cout << "\n";
    
    for(int i = 0; i<=5 ; i--){
        cout << i << " ";
        i++;
    }
    //Infinite loop of zero (0).
    cout << "\n";
    
    for(int i = 0; i<=15; i+=2){
        cout << i << " ";
        
        if( i&1 ){
            continue;
        }
        
        i++;
    }
    //0 and then odd numbers.
    cout << "\n";
}
