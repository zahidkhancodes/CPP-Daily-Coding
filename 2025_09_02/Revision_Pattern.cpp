//1.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i<=n){
        
        int j = 1;
        char count = 'A' + n - i;
        while (j<=i){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
/*  D
    CD
    BCD
    ABCD  */

//2.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i<=n){
        
        int j = 1;
        char count = 'A' + i - 1;
        while (j<=n){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
/*  ABCD
    BCDE
    CDEF
    DEFG   */

//3.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){
        
       int space = n - i;
       while(space){
           cout << " " ;
           space-- ;
       }
       
        int j = 1;
        while(j<=i){
            cout << "*" ;
            j++;
        }
       
       cout << endl;
       i++;
    }
    
}
//     *
//    **
//   ***
//  ****  

//4.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=n-i+1){
            cout<<"*";
            j++;
        }
        
        cout << endl;
        i++;
    }
    
}
//  ****
//  ***
//  **
//  *

//5.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){
        
        int space = i-1;
        while(space){
            cout<<"_";
            space--;
        }
        
        int j = 1;
        while (j<=n-i+1){
            cout<<"*";
            j++;
        }
    
        cout << endl;
        i++;
    }
    
}
//    ****
//     ***
//      **
//       *    
