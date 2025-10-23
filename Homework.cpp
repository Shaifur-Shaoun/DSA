#include <iostream>
using namespace std;

class SortedList {
private:
    int arr[100];
    int length;

public:
    SortedList() {
        length = 0;
    }

    // Insert item in sorted order
    void insertItem(int item) {
        if (length >= 100) {
            cout << "List is full!" << endl;
            return;
        }

        int i = length - 1;
        while (i >= 0 && arr[i] > item) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = item;
        length++;
    }

    // Search for an item
    bool searchItem(int item) {
        for (int i = 0; i < length; i++) {
            if (arr[i] == item)
                return true;
        }
        return false;
    }

    // Delete an item
    void deleteItem(int item) {
        int pos = -1;
        for (int i = 0; i < length; i++) {
            if (arr[i] == item) {
                pos = i;
                break;
            }
        }

        if (pos == -1) {
            cout << "Item not found!" << endl;
            return;
        }

        for (int i = pos; i < length - 1; i++) {
            arr[i] = arr[i + 1];
        }
        length--;
    }

    // Display list
    void display() {
        for (int i = 0; i < length; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

// MAIN FUNCTION
int main() {
    SortedList list;

    list.insertItem(10);
    list.insertItem(5);
    list.insertItem(20);
    list.insertItem(15);

    cout << "List after insertion: ";
    list.display();

    cout << "Searching 15: " << (list.searchItem(15) ? "Found" : "Not Found") << endl;

    list.deleteItem(10);
    cout << "List after deleting 10: ";
    list.display();

    return 0;
}