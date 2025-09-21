/*#include<iostream>
using namespace std;

int main(){
  int i,j;
  cin >> j;
  if(i==j){
    cout << "You won";
  }
else {
  cout << "0 question solved today";
}
  return 0;
}*/


#include <iostream>
using namespace std;

int main() {
    int i = 10; 
    int j;

    cout << "Guess the number: ";
    cin >> j;

    if (i == j) {
        cout << "You won" << endl;
    } else {
        cout << "0 question solved today" << endl;
    }
    
    return 0;
}

