//1.Sum of Array
#include<iostream>
using namespace std;

int sumArr(int arr[] ,int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int size;
    cin >> size;
    
    int arr[100];
    for(int i=0; i<size ; i++){
        cin >> arr[i];
    }
    
    cout << sumArr(arr , size);
    
    return 0;
}

//2.Linear search
#include<iostream>
using namespace std;

bool keySearch (int arr[] , int size , int key){
    for ( int i = 0; i<size ; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {1 , 4  ,3 , 21 , 5 , 27 , 11 , 6 , 0 , 9 };
    
    cout << "Enter the key to search"<<endl;
    int key;
    cin >> key;
    
    bool found = keySearch(arr, 10 , key);
    if (found){
        cout << "Present";
    }
    else{
        cout << "Absent";
    }
    
    return 0;
}
