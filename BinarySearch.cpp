#include <iostream>
using namespace std;

// Non-Iterative Method
int binarySearchNonIterative(int arr[], int ele, int low, int high){
    if(high >= low){
        int mid = low + (high-low)/2;

        if(arr[mid] == ele){
            return mid;
        }
        else if(arr[mid] > ele){
            return binarySearchNonIterative(arr, ele, mid + 1, high);
        }
        else{
            return binarySearchNonIterative(arr, ele, low, mid - 1);
        }
    }
    return -1;
}

// Iterative Method
int binarySearchIterative(int arr[], int ele, int low, int high){
    while(high >= low){
        int mid = low + (high-low)/2;
        if(arr[mid] == ele){
            return mid;
        }
        else if(arr[mid] > ele){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    cout << "Enter number of elements : ";
    int n; cin >> n;

    int arr[n];
    cout << "Enter array : ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to search : ";
    int ele; cin >> ele;

    int result = binarySearchIterative(arr, ele, 0, n-1);
    if(result == -1){
        cout << "Element not found." << endl;
    }
    else{ 
        cout << "Element found at index : " << result << endl;
    }

    return 0;
}