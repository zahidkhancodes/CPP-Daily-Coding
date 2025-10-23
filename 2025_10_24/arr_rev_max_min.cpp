// Q. Take input from the user for the array and reverse it and find the maximum and minimum value of that array (using a single while loop)

#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    
    int arr[n];
    for(int i =0;i<n;i++){
        cout<<"Enter number of index "<<i<<" : ";
        cin>>arr[i];
    }
    
    int s = 0;
    int e = n-1;
    int temp = 0;
    int min = 0;
    int max = 0;
    while(s<e){
        if(arr[s]<min ){
            min = arr[s];
        }
        if(arr[e]<min){
            min = arr[e];
        }
        
        if(arr[s]>max){
            max = arr[s];
        }
        if(arr[e]>max)
            max = arr[e];

        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        
        s++;
        e--;
        
        
    }
    cout<<endl;
    
    cout<<min<<" "<<max;
    
    //print
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    
    return 0;
}
