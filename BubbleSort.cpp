#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int n){
    int i;
    for (i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    BubbleSort(arr, n);
    printArray(arr,n);

    return 0;
}