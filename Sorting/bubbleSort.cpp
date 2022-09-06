#include <iostream>
using namespace std;

void display(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int arr[], int n){
    for(int i = 0 ;i<n ;i++){
      for(int j = 0;j<n-i;j++){
          if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
      }
    }
}

int main() {
  int arr[6] = {21,20,20,2,112,30};
  int n = sizeof arr / sizeof arr[0];
  bubbleSort(arr,n);
  display(arr, n);
  return 0;
}
