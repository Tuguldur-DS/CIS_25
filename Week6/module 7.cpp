#include <iostream>
#include <string>
using namespace std;

struct Item {
    string name;
    int id;
};

int binarySearch(Item* arr, int size, int targetID) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int middle = (low + high) / 2;

        if (arr[middle].id == targetID)
            return middle;
        else if (arr[middle].id < targetID)
            low = middle + 1;
        else
            high = middle - 1;
    }

    return -1;
}

int main() {
    Item* inventory = new Item[100];

    for (int i = 0; i < 100; i++) {
        inventory[i].name = "Item_" + to_string(i + 1);
        inventory[i].id = 100 + i;
    }

    int searchID;
    cout << "Enter an ID to search for between 100 and 199: ";
    cin >> searchID;

    int index = binarySearch(inventory, 100, searchID);

    if (index != -1)
        cout << "Found: " << inventory[index].name << " (ID: " << inventory[index].id << ")\n";
    else
        cout << "Item with ID " << searchID << " not found. Make sure it is in range\n";

    delete[] inventory;

    return 0;
}