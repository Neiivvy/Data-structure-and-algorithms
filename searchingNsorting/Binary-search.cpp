#include<iostream>
using namespace std;
#include <algorithm>
//NOTE: 
    //If you type unsorted array the sort function will sort the array and print the index according to the sorted array not the original one
    //so suggestion: write the data in sorted order manually for correct index of the original value(data set)
// Function definition
int binarySearch(int a[], int bottom, int top, int key){
    while(bottom <= top){
        int middle = (top + bottom) / 2;
        if(key == a[middle]){
            return middle;
        }
        else if(key < a[middle]){  
            top = middle - 1;
        }
        else{
            bottom = middle + 1;
        }
    }
    return -1; // Key not found
}

int main(){
    // For fixed size array of 4 elements
    int a[5], key;
    cout << "Enter 4 elements for the array: ";
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    // Sorting the elements before binary search (in ascending order)
    sort(a, a + 4);  // Sort only the first 4 elements
    //printing in the ascending order
      cout << "Sorted array: ";
    for (int i = 0; i < 4; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Enter the element to be searched\n";
    cin >> key;

    // Function call (search from index 0 to 3)
    int value = binarySearch(a, 0, 3, key);  
    if(value != -1){
        cout << "Element found at index: " << value << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
    return 0;
}
