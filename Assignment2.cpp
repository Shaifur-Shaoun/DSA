#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Insert at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }

    // Insert in sorted order
    void insertSorted(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr || value < head->data) {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr && temp->next->data < value)
            temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Display all elements
    void display() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        Node* temp = head;
        cout << "List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Search an item
    bool searchItem(int value) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value)
                return true;
            temp = temp->next;
        }
        return false;
    }

    // Delete from beginning
    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty, nothing to delete!" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted node from beginning." << endl;
    }

    // Delete from end
    void deleteFromEnd() {
        if (head == nullptr) {
            cout << "List is empty, nothing to delete!" << endl;
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            cout << "Deleted last node." << endl;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr)
            temp = temp->next;
        delete temp->next;
        temp->next = nullptr;
        cout << "Deleted node from end." << endl;
    }
};

// Main function for multiple test cases
int main() {
    LinkedList list;

    cout << "=== LINKED LIST OPERATIONS ===" << endl;

    // Insert operations
    list.insertAtBeginning(30);
    list.insertAtBeginning(10);
    list.insertAtEnd(50);
    list.insertAtEnd(70);
    list.display();

    // Sorted insert
    cout << "\nInserting in sorted order (value = 40):" << endl;
    list.insertSorted(40);
    list.display();

    // Search
    cout << "\nSearching for 50: ";
    cout << (list.searchItem(50) ? "Found!" : "Not Found!") << endl;
    cout << "Searching for 100: ";
    cout << (list.searchItem(100) ? "Found!" : "Not Found!") << endl;

    // Delete operations
    cout << "\nDeleting from beginning..." << endl;
    list.deleteFromBeginning();
    list.display();

    cout << "Deleting from end..." << endl;
    list.deleteFromEnd();
    list.display();

    return 0;
}
