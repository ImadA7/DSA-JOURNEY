#include <iostream>
using namespace std;//reverse array with extra space 

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int rev[5];

    // Fill the reversed array
    for (int i = 0; i < size; i++) {
        rev[i] = arr[size - 1 - i];
    }

    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << rev[i] << " ";
    }

    return 0;
}
