#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
    
//     int count = 0;
//     while(n!=0){
//         if(n&1){
//             count++;
//         }
//         n=n>>1;
//     }
//     cout << count;
//     return 0;
// }                        //Wrong?

int main(){
    long long n;
    cin>>n;
    
    int count = 0;
    while(n!=0){
        int digit =  n % 10;
        if(digit==1){
            count++;
        }
        n = n/10;
    }
    cout << count;
    return 0;
}
