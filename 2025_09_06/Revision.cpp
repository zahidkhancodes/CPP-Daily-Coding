//1.
#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i<=5 ; i++){
        for(int j = i ; j<=5 ; j++){
            cout << i << " " << j <<endl;
        }
    }
}
/*
0 0
0 1
0 2
0 3
0 4
0 5
1 1
1 2
1 3
1 4
1 5
2 2
2 3
2 4
2 5
3 3
3 4
3 5
4 4
4 5
5 5
*/

//2.
#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i<=5 ; i++){
        for(int j = i ; j<=5 ; j++){
            if(i+j==10){
                break;
            }
            cout << i << " " << j <<endl;
        }
    }
}
/*
0 0
0 1
0 2
0 3
0 4
0 5
1 1
1 2
1 3
1 4
1 5
2 2
2 3
2 4
2 5
3 3
3 4
3 5
4 4
4 5
*/

//3.Subtract of product and sum of digits of integer
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int product = 1;
    int sum = 0;
    
    while(n!=0){
        int digit = n%10;
        product = product * digit;
        sum = sum + digit;
        
        n = n/10;
    }
    int answer = product - sum;
    cout << answer;
    
}
