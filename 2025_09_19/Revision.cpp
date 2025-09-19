//1. Linear Search
#include<iostream>
using namespace std;

bool found(int arr[],int size, int key){
    for(int i = 0 ; i<size ; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    
    int arr[10] = {2 , 4 , 210 , 5 , 67 ,9 ,43 , 60 , 33 , 0};
    int key;
    cin>>key;
    
    bool isPres = found(arr, 10 , key);
    
    if(isPres){
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
    
    return 0;
}


//2.Reverse an Array
#include<iostream>
using namespace std;

void reverse(int arr[] , int size ){
    int start = 0;
    int end = size-1;
    
    while(start<=end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    
}
int main(){
    
    int arr[5] = {2 , 4 , 6 , 7 , 0};
    cout << "Before Reversing the Array : ";
    for(int i = 0; i<5 ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    reverse(arr , 5);
    
    cout << "After Reversing the Array : ";
    for ( int i = 0; i < 5 ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
