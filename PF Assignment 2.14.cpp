
/*Take input two strings (one is initialized and other take input at run-time),
compare the string are they similar or not and print them
in reverse without using built in function.*/

#include <iostream>
using namespace std;

int main() {
    char string1[20] = "Avengers Endgame";
    char string2[20];
    bool areSimilar = true;

    cout << "Enter the String: ";
    cin.getline(string2, 20);

    for (int i = 0; i < 20; i++) {
        if (string1[i] != string2[i]) {
            areSimilar = false;
            break;
    }
}
    // Display if the strings are similar or not
    if (areSimilar) {
        cout << "Strings are similar." << endl;
    } else {
        cout << "Strings are not similar." << endl;
    }

    cout << "Reversed string1: ";
    int len1 = 0;
    while (string1[len1] != '\0') {
        len1++;
    }
    for (int i = len1 - 1; i >= 0; i--) {
        cout << string1[i];
    }
    cout << endl ;

    cout << "Reversed string 2: ";
    int len2 ;
    while (string2[len2] != '\0') {
        len2++;
    }
    for(int i = len2 - 1 ; i >= 0 ; i--) {
        cout << string2[i] ;
    }

    return 0;
}
