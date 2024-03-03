#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == key) {
            return i;
        }
    }
    return NULL;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 5;
    int index = linearSearch(arr, size, key);
    if (index ) 
    {
        cout << "Element found at index " << index << endl;
    } 
    else {
        cout << "Element not found" << endl;
    }
    return 0;
}
