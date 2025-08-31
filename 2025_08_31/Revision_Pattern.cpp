//1.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while (i<=n){
        
        int j = 1;
        while(j<=n){
            cout << "*" ;
            j++;
        }
        cout << endl;
        i = i+1;
    }
}
// ***
// ***
// ***   


//2.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while (i<=n){
        
        int j = 1;
        while(j<=n){
            cout << i ;
            j++;
        }
        
        cout << endl;
        i = i+1;
    }
}
/*  1111
    2222
    3333
    4444   */

//3.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while (i<=n){
        
        int j = 1;
        while(j<=n){
            cout << j << " " ;
            j++;
        }
        
        cout << endl;
        i = i+1;
    }
}
/*  1 2 3 4 
    1 2 3 4 
    1 2 3 4 
    1 2 3 4   */

//4.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while (i<=n){
        
        int j = 1;
        while(j<=n){
            cout << n-j+1 << " " ;
            j++;
        }
        
        cout << endl;
        i = i+1;
    }
}
/*  4 3 2 1 
    4 3 2 1 
    4 3 2 1 
    4 3 2 1   */

//5.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    int count = 1;
    
    while(i<=n){
        
        int j = 1;
        while (j<=n){
            
            cout << count << " ";
            count++;
            j++;
            
        }
        
        cout<<endl;
        i = i+1;
    }
}
/*  1 2 3 
    4 5 6 
    7 8 9   */

//6.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){
        
        int j = 1;
        while (j<=i){
            cout << "*";
            j++;
        }
        
        cout<<endl;
        i = i+1;
    }
}
// *
// **
// ***
// ****
// *****

//7.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){
        
        int j = 1;
        while (j<=i){
            cout << i <<" " ;
            j++;
        }
        
        cout<<endl;
        i = i+1;
    }
}
/*  1 
    2 2 
    3 3 3 
    4 4 4 4   */

//8.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int count = 1;
    int i = 1;
    while(i<=n){
        
        int j = 1;
        while (j<=i){
            cout << count <<" " ;
            j++;
            count++;
        }
        
        cout<<endl;
        i = i+1;
    }
}
/*  1 
    2 3 
    4 5 6 
    7 8 9 10   */

//9.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){ 
        
        int newi = i;
        int j = 1;
        while (j<=i){
            cout << newi << " " ;
            j++;
            newi++;
        }
        
        cout<<endl;
        i = i+1;
    }
}
/*  1 
    2 3 
    3 4 5 
    4 5 6 7  */

//10.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){ 
        
        int j = 1;
        while (j<=i){
            cout << (i + j - 1) << " " ;
            j++;
        }
        
        cout<<endl;
        
        i = i+1;
    }
}
/*  1 
    2 3 
    3 4 5 
    4 5 6 7  */

//11.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){ 
        
        int j = 1;
        while (j<=i){
            cout << (i - j + 1) << " " ;
            j++;
        }
        
        cout<<endl;
        
        i = i+1;
    }
}
/*  1 
    2 1 
    3 2 1 
    4 3 2 1   */

//12.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i <= n){
        
        int j = 1;
        while(j <= n){
            char ch = 'A' + i - 1;
            cout << ch;
            j++;
        }
        
        cout << endl;
        i++;
    }
}
/*  AAAA
    BBBB
    CCCC
    DDDD  */

//13.
