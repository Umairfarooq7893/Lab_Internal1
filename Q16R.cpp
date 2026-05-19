/*
	Implement dynamic memory allocation using new and delete for an integer array
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    // Dynamic allocation
    int* arr = new int[n];
    
    // Input values
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Display values
    cout << "Array elements: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    // Free memory
    delete[] arr;

    return 0;
}