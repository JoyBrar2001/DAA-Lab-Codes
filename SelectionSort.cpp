#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n){
    int i, j, min;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        if (min != i){
            swap(arr[min], arr[i]);
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

    SelectionSort(arr, n);
    printArray(arr,n);

    return 0;
}