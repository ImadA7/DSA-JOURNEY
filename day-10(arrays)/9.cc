// ✅ Theory: Pointer Arithmetic in C++
// 📌 Key Points:
// Pointer + n → moves the pointer n elements forward (not bytes!).

// Pointer - n → moves n elements backward.

// *(ptr + n) → accesses the value at n elements ahead.

// Works with arrays naturally since array name acts like a pointer.

#include<iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr; // points to arr[0]

    cout << "ptr       = " << ptr << endl;
    cout << "*ptr      = " << *ptr << endl;

    cout << "*(ptr+1)  = " << *(ptr + 1) << endl; // 20
    cout << "*(ptr+2)  = " << *(ptr + 2) << endl; // 30
    cout << "*(ptr+3)  = " << *(ptr + 3) << endl; // 40

    ptr = ptr + 2; // now ptr points to arr[2]
    cout << "Now ptr points to arr[2] = " << *ptr << endl; // 30

    return 0;
}

// 🧠 Extra Tip:
// arr is constant pointer. You can’t do arr = arr + 1;

// But ptr is a normal pointer and can be incremented.