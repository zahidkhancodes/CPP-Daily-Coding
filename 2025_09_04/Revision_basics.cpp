//1.
#include<iostream>
using namespace std;

int main(){
    int a , b = 1;
    a = 10;
    
    if ( ++a )
        cout << b;
    else
        cout << ++b;
        
    return 0;
}
// 1

//2.
#include<iostream>
using namespace std;

int main(){
    int a = 1;
    int b = 2;
    
    if(a-- > 0 && ++b > 2){
        cout << "Inside if " << endl;
    }
    else{
        cout << "Inside else " << endl;
    }
    
    cout << a << " " << b ;
        
    return 0;
}
/*    Inside if 
      0 3     */

//3.
#include<iostream>
using namespace std;

int main(){
    int number = 3;
    cout << (25*(++number));
}
//100

//4.
#include<iostream>
using namespace std;

int main(){
    int a = 1;
    int b = a++;
    int c = ++a;
    
    cout << b << endl << c ;
}
/*  1
    3  */

//5.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value"<<endl;
    cin >> n;
    
    int sum = 0;
    for (int i = 0 ; i <= n ; i++ ){
        cout << i << " ";
        sum = sum + i;
    }
    cout << endl;
    cout << "The sum is " << sum ;
    
    return 0;
}
/*    Enter the value
      9
      0 1 2 3 4 5 6 7 8 9 
      The sum is 45                */
