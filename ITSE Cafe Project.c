#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <algorithm>

using namespace std;


struct MenuItem {
    string name;
    double price;
};


struct User {
    string name;
    string email;
    string phone;
    string address;
};

// Function to display the menu
void displayMenu(MenuItem menu[], int size) {
    cout << "\n--- Menu ---\n";

    for (int i = 0; i < size; i++) {

        cout << i + 1 << ". " << menu[i].name << " - $" << menu[i].price << "\n";
    }
    cout << endl;
}

// Function to handle order placement and save it to a file
double placeOrder(MenuItem menu[], int menuSize, MenuItem order[], int &orderSize, const string &fileName) {
    int choice;
    double total = 0.0;
    orderSize = 0;

    cout << "\nPlace your order (Enter 0 to finish):\n";

    while (true) {
    string input;
    cout << "Enter your choice: ";
    cin >> input; // Read input as string

    // Check if input is a number
    if (all_of(input.begin(), input.end(), ::isdigit)) {
        choice = stoi(input); // Convert string to integer
    } else {
        cout << "Invalid input! Please enter a number" << endl;
        continue;
    }

    if (choice == 0) break;
    if (choice < 1 || choice > menuSize) {
        cout << "Invalid choice! Try again.\n";
        continue;
    }

    // Add the item to the order
    order[orderSize] = menu[choice - 1]; // Store the menu item in the order array
    total += menu[choice - 1].price; // Add item price to the total
    cout << menu[choice - 1].name << " added to your order.\n";
    orderSize++; // Increment the order size
}

    // Save the order to a file
    ofstream file(fileName, ios::app); // Append mode
    if (file.is_open()) {
        file << "\nOrder placed:\n";
        for (int i = 0; i < orderSize; i++) {// Write each item in the order to the file
            file << order[i].name << " - $" << order[i].price << "\n";
        }
        file << "Total: $" << total << "\n";
        file << "---------------------\n";
        file.close();

    } else {
        cout << "\nError: Unable to open the file to save the order.\n";
    }

    return total;// Return the total price of the order
}

// Main function
int main() {
    cout << "   Welcome to BAM Cafe   " << endl;

    MenuItem menu[8] = {
        {"HUNTER BEEF SANDWICH", 1590.00},
        {"CRISPY FRIED CHICKEN BURGER", 1460.00},
        {"FISH & CHIPS", 1540.00},
        {"PARMESAN CRUSTED CHICKEN", 1590.00},
        {"BABAR PASTA", 1760.00},
        {"PASTA ALFREDO CHICKEN", 1520.00},
        {"PIZZA MARGARITA", 1540.00},
        {"BAM SPECIAL CHICKEN", 1590.00}
    };
    int menuSize = sizeof(menu) / sizeof(menu[0]);// Calculate the number of menu items

    // Display the menu
    displayMenu(menu, menuSize);

    MenuItem order[10]; // Array to store a maximum of 10 ordered items
    int orderSize = 0;// Initialize the order size to 0

    // File name for storing orders and customer info
    string fileName = "orders.txt";

    double total = placeOrder(menu, menuSize, order, orderSize, fileName);// Place the order and calculate total

    // Collect customer information
    if (total > 0) {

        cout << "\nOrder saved!\n";
    }
}
