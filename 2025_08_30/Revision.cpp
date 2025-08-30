//1.Printing 1 to n .
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    
    cout<<"\n";
    
    int i = 1;
    while(i <= n){
        cout<< i << " ";
        i++;
    }
    
    cout<<endl;
    
    return 0;
}

//2.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        cout<<i<<" ";
        sum = sum + i;
    }
    cout<<endl;
    cout<<"sum is " << sum;
}

//3.Sum of even numbers from 1 to n.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    
    for(int i = 1; i <= n; i++){
        cout<<i<<" ";
        
        if(i%2==0){
        sum = sum + i;
        }

    }
    
    cout<<endl;
    cout<<"sum is " << sum;
}

//4. fahrenheit to celsius
#include<iostream>
using namespace std;

int main(){
    float fahrenheit;
    float celsius;
    cout<<"Give Fahrenheit"<<endl;
    cin >> fahrenheit;
    
    celsius = (fahrenheit - 32) * 5.0/9.0;
    cout << celsius << " C";
    
    return 0;
}

//5.
#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    
    for( int i = 2 ; i<n ; i++){
    if (n % i == 0){
        cout<<"Not Prime for "<<i<<endl;
        }
    else{
        cout<<"Prime for "<<i<<endl;
        }
    }
    return 0;
}
