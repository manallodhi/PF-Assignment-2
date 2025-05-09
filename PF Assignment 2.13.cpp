
/*Write a program in C to count total number of vowel, consonant, upper case,
lower case, special character, words and digits in a string.*/

#include <iostream>
using namespace std ;

int main() {
    char input[1000];
    cout << "Enter a string: ";
    cin.getline(input, 1000);

    int vowels = 0, consonant = 0, uppercase = 0, lowercase = 0, digits = 0, specialChar = 0, words = 1;

    for (int i = 0; input[i] != '\0'; i++) { // Loop until the null character
     char ch = input[i];
     // Check if the character is a vowel
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
    // Check for uppercase or lowercase vowel
      if (ch >= 'A' && ch <= 'Z') {
            uppercase++;
      } else {
            lowercase++;
        }
    }
    // Check if the character is a letter (but not a vowel -> consonant)
      else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonant++;
    // Check for uppercase or lowercase consonant
      if (ch >= 'A' && ch <= 'Z') {
            uppercase++;
      } else {
            lowercase++;
            }
        }
    // Check if the character is a digit
      else if (ch >= '0' && ch <= '9') {
            digits++;
    }
    // Check if the character is a space to count words
      else if (ch == ' ') {
            words++;
    }
    // Otherwise, it's a special character
    else {
            specialChar++;
    }
  }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonant << endl;
    cout << "Uppercase letters: " << uppercase << endl;
    cout << "Lowercase letters: " << lowercase << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << specialChar << endl;
    cout << "Words: " << words << endl;

    return 0;
}
