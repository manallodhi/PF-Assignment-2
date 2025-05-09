

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <stdexcept>

using namespace std;

struct MenuItem {
    int id;
    string name;
    double price;
};

struct Order {
    int itemId;
    int quantity;
    double totalPrice;
};

vector<MenuItem> menu;
vector<Order> orders;
string menuFile = "menu.txt";
string orderFile = "orders.txt";

// Function to load menu from a file
void loadMenu() {
    ifstream file(menuFile);
    if (file.is_open()) {
        menu.clear();
        MenuItem item;
        while (file >> item.id >> item.price) {
            file.ignore();
            getline(file, item.name);
            menu.push_back(item);
        }
        file.close();
    } else {
        cout << "Menu file not found. Starting with an empty menu.\n";
    }
}

// Function to save menu to a file
void saveMenu() {
    ofstream file(menuFile);
    for (const auto& item : menu) {
        file << item.id << " " << item.price << " " << item.name << "\n";
    }
    file.close();
}

// Function to load orders from a file
void loadOrders() {
    ifstream file(orderFile);
    if (file.is_open()) {
        orders.clear();
        Order order;
        while (file >> order.itemId >> order.quantity >> order.totalPrice) {
            orders.push_back(order);
        }
        file.close();
    }
}

// Function to save orders to a file
void saveOrders() {
    ofstream file(orderFile, ios::app);
    for (const auto& order : orders) {
        file << order.itemId << " " << order.quantity << " " << order.totalPrice << "\n";
    }
    file.close();
}

// Display the menu
void displayMenu() {
    cout << "\n--- Menu ---\n";
    cout << "ID   Item             Price\n";
    cout << "-------------------------------\n";
    for (const auto& item : menu) {
        cout << setw(3) << item.id << "   " << setw(15) << item.name
             << " $" << fixed << setprecision(2) << item.price << "\n";
    }
}

// Admin: Add a new menu item
void addMenuItem() {
    MenuItem newItem;
    cout << "Enter item ID: ";
    cin >> newItem.id;
    cout << "Enter item name: ";
    cin.ignore();
    getline(cin, newItem.name);
    cout << "Enter item price: ";
    cin >> newItem.price;

    menu.push_back(newItem);
    saveMenu();
    cout << "Menu item added successfully.\n";
}

// Admin: Remove a menu item
void removeMenuItem() {
    int id;
    cout << "Enter the ID of the item to remove: ";
    cin >> id;

    for (auto it = menu.begin(); it != menu.end(); ++it) {
        if (it->id == id) {
            menu.erase(it);
            saveMenu();
            cout << "Menu item removed successfully.\n";
            return;
        }
    }
    cout << "Item not found.\n";
}

// Place an order
void placeOrder() {
    int itemId, quantity;
    cout << "Enter the item ID to order: ";
    cin >> itemId;

    for (const auto& item : menu) {
        if (item.id == itemId) {
            cout << "Enter quantity: ";
            cin >> quantity;
            double total = item.price * quantity;
            orders.push_back({itemId, quantity, total});
            saveOrders();
            cout << quantity << " x " << item.name << " added to your order. Total: $" << total << "\n";
            return;
        }
    }
    cout << "Invalid item ID.\n";
}

// View order history
void viewOrders() {
    if (orders.empty()) {
        cout << "No orders placed yet.\n";
        return;
    }

    cout << "\n--- Order History ---\n";
    cout << "Item ID   Quantity   Total Price\n";
    cout << "--------------------------------\n";

    for (const auto& order : orders) {
        cout << setw(7) << order.itemId << setw(10) << order.quantity
             << setw(12) << "$" << fixed << setprecision(2) << order.totalPrice << "\n";
    }
}

// Admin Panel
void adminPanel() {
    int choice;
    do {
        cout << "\n--- Admin Panel ---\n";
        cout << "1. View Menu\n";
        cout << "2. Add Menu Item\n";
        cout << "3. Remove Menu Item\n";
        cout << "4. View Orders\n";
        cout << "5. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: displayMenu(); break;
            case 2: addMenuItem(); break;
            case 3: removeMenuItem(); break;
            case 4: viewOrders(); break;
            case 5: return;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 5);
}

// Main menu
int main() {
    loadMenu();
    loadOrders();
    int choice;

    do {
        cout << "\n--- Cafeteria Management System ---\n";
        cout << "1. View Menu\n";
        cout << "2. Place Order\n";
        cout << "3. View Order History\n";
        cout << "4. Admin Panel\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        try {
            switch (choice) {
                case 1: displayMenu(); break;
                case 2: placeOrder(); break;
                case 3: viewOrders(); break;
                case 4: adminPanel(); break;
                case 5: cout << "Goodbye!\n"; break;
                default: throw invalid_argument("Invalid choice.");
            }
        } catch (const exception& e) {
            cout << "Error: " << e.what() << "\n";
        }
    } while (choice != 5);

    return 0;
}
