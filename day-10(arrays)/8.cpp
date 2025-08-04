 //array pointer

#include<iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // arr holds address of first element
    cout << arr << " == " << &arr[0] << endl;

    // arr[i] == *(arr + i)
    cout << arr[2] << " == " << *(arr + 2) << endl;

    // Traversing array using pointer
    int* ptr = arr;  // points to arr[0]
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";  // same as arr[i]
    }

    return 0;
}


// 🧠 Key Points:
// arr is a pointer to arr[0].

// arr[i] == *(arr + i)

// Pointer arithmetic moves in terms of element size, not bytes.

