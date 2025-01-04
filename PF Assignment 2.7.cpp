/*Write a program in C to copy the elements of one array into another array and print the sum of those number which are even.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
*/

#include <iostream>
using namespace std;

int main() {
    int SIZE = 3; // Fixed size of the array
    int firstArray[SIZE], secondArray[SIZE];
    int sum = 0;

    // Input the elements in the first array
    cout << "Input " << SIZE << " elements in the array:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "element - " << i << " : ";
        cin >> firstArray[i];
    }

    // Copy elements from the first array to the second array
    for (int i = 0; i < SIZE; i++) {
        secondArray[i] = firstArray[i];

        // Calculate the sum of even numbers
        if (secondArray[i] % 2 == 0) {
            sum += secondArray[i];
        }
    }

    // Display the elements of the first array
    cout << "\nThe elements stored in the first array are: ";
    for (int i = 0; i < SIZE; i++) {
        cout << firstArray[i] << " ";
    }

    // Display the elements of the second array
    cout << "\nThe elements copied into the second array are: ";
    for (int i = 0; i < SIZE; i++) {
        cout << secondArray[i] << " ";
    }

    // Display the sum of even numbers
    cout << "\nSum=";
    for (int i = 0; i < SIZE; i++) {
        if (secondArray[i] % 2 == 0) {
            cout << secondArray[i];
            if (i < SIZE - 1 && secondArray[i + 1] % 2 == 0) {
                cout << "+";
            }
        }
    }
    cout << "=" << sum << endl;

    return 0;
}
