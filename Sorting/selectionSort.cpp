#include <iostream>
using namespace std;

void display(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int arr[], int n){
    for(int i = 0 ;i<n-1 ;i++){
        int minIndex = i;
        for(int j = i + 1; j < n ;j++){
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);

    }
}



int main() {
int arr[6] = {21,20,12,2,112,30};
int n = sizeof arr / sizeof arr[0];
selectionSort(arr,n);
 display(arr, n);
    return 0;
}
