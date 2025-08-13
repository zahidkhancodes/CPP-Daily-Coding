#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){
  int pivot=arr[start];
  int count=0;

  for(int i=start+1;i<=end;i++){
    if(arr[i]<=pivot){
      count++;
    }
  }

  // pivot ko sahi jagah rakh dete hain
  int pivotPos=start+count;
  swap(arr[pivotPos],arr[start]);

  // left aur right parts ko handle karte hain
  int left=start,right=end;

  while(left<pivotPos && right>pivotPos){
    while(arr[left]<=pivot){
      left++;
    }
    while(arr[right]>pivot){
      right--;
    }
    if(left<pivotPos && right>pivotPos){
      swap(arr[left++],arr[right--]);
    }
  }
  return pivotPos;
}

void quickSort(int arr[],int start,int end){
  // base condition
  if(start>=end) return;

  // partition karte hain
  int pos=partition(arr,start,end);

  // left side sort karo
  quickSort(arr,start,pos-1);

  // right side sort karo  
  quickSort(arr,pos+1,end);
}

int main(){
  int numbers[10]={2,4,1,6,9,9,9,9,9,9};
  int size=10;

  quickSort(numbers,0,size-1);

  for(int i=0;i<size;i++){
    cout<<numbers[i]<<" ";
  }
  cout<<endl;

  return 0;
}


    return 0;
}
