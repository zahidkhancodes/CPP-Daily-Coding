//12.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
/*  A B C 
    A B C 
    A B C   */

//13.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    int count  = 0;
    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + count;
            cout << ch << " ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}
/*  A B C 
    D E F 
    G H I  */

//14.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
/*  A B C 
    B C D 
    C D E  */

//15.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    int count = 0;
    while(i<=n){
        int j = 1;
        while(j<=i){
            char ch = 'A' + count;
            cout << ch << " ";
            j++;
        }
        count++;
        cout<<endl;
        i++;
    }
}
/*  A 
    B B 
    C C C   */

//16.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    int count = 0;
    while(i<=n){
        int j = 1;
        while(j<=i){
            char ch = 'A' + count;
            cout << ch << " ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}
/*  A 
    B C 
    D E F  */

//17.
