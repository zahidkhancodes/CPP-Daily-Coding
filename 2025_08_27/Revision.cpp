#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int i = 1;

    while(i <= n) {

        cout << i << " " ;
        i = i+1;
    }
}


//2.
#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 1;
    int sum = 0;

    while(i<=n) {
        sum = sum + i;
        i = i + 1;
    }
  
    cout<< "value of sum is "<<sum<<endl;
  
  return 0;
}


//3.
#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int i = 2;

    while(i<n) {
        if(n%i==0) {
            cout<< "Not prime for "<< i << endl;
        }
        else{
            cout<<"Prime for "<< i <<endl;
        }
        i = i + 1;
    }
  return 0;
}
