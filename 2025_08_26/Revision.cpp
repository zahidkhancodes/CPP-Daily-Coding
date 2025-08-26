//1.
#include<iostream>
using namespace std;

int main(){
    cout<<"Hello World"<<endl;
    return 0;
}
//Hello World

//2.
#include<iostream>
using namespace std;

int main(){
    
    int a = 9;
    if(a==9){
        cout<<"Nine"<<endl;
    }
    if(a>0){
        cout<<"Positive"<<endl;
    }
    else{
        cout<<"Negative";
    }
    
    return 0;
}
/*Nine
Positive*/

//3.
#include<iostream>
using namespace std;

int main(){
    
    int a = 2;
    int b = a+1;
    
    if((a=3)==b){
        cout<<a<<endl;
    }
    else{
        cout<<a+1;
    }
}
//3

//4.
#include<iostream>
using namespace std;

int main(){
    int a = 24;
    
    if(a>20){
        cout<<"Zahid"<<endl;
    }
    else if(a==24){
        cout<<"Khan"<<endl;
    }
    else{
        cout<<"No Name";
    }
    
    cout<<a;
}
/*Zahid
24*/

//5.
#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    
    if(ch >= 'a' && ch <= 'z'){
        cout<<"This is a Lower case "<<endl;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout<<"This is a Upper case "<<endl;
    }
    else if(ch >= '0' && ch <= '9'){
        cout<<"This is a Number "<<endl;
    }
    else {
        cout <<"This is a special character ";
    }
    return 0;
}

//6.
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }
    return 0;
}
//1 2 3 4 5 .... n
