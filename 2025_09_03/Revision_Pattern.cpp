//1.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){
        
        int space = i - 1;
        while(space){  //This means "keep doing the following set of commands while space is not zero."
            cout << " ";
            space--;
        }
        
        int j = 1;
        while(j<=n-i+1){
            cout << "*" ;
            j++;
        }
        cout<<endl;
        i++;
    }
}
//    ****
//     ***
//      **
//       *  

//2.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){
        
        int space = i - 1;
        while(space){
            cout << " ";
            space--;
        }
        
        int j = 1;
        while(j<=n-i+1){
            cout << i;
            j++;
        }
        
        cout << endl;
        i++;
        
    }
}
/*  1111
     222
      33
       4    */

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
            cout << " ";
            space--;
        }
        
        int j = 1;
        while(j<=i){
            cout << i ;
            j = j + 1;
        }
        
        cout<<endl;
        i = i + 1;
    }
}
/*     1
      22
     333
    4444    */

//4.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    while(i<=n){
        
        int space = i - 1;
        while(space){
            cout << " ";
            space--;
        }
        
        int j = i;
        while(j<=n){
            cout << j ;
            j = j + 1;
        }
        
        cout<<endl;
        i = i + 1;
    }
}
/*  1234
     234
      34
       4  */

//5.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int i = 1;
    int count = 1;
    while(i<=n){
        
        int spaces = n - i;
        while(spaces){
            cout << " ";
            spaces--;
        }
        
        int j = 1;
        while(j<=i){
            cout << count ;
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/*   1
    23
   456
  78910  */

//6.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while ( row <= n){
            
        int space = n - row;
        while(space){
            cout<<" ";
            space--;
        }
            
        int col = 1;
        while(col<=row){
            cout << col;
            col++;
        }
        
        int newCol = row-1;
        while(newCol){
            cout<<newCol;
            newCol--;
        }

        cout<<endl;
        row++;
        }
        
    return 0;
    }
/*   1
    121
   12321
  1234321  */
