#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;   // Stores the data of the node.
    Node *next; // Points to the next node in the linked list.

public:
    Node(int data1, Node *next1)
    {
        data = data1; // Initializes the `data` field with `data1`.
        next = next1; // Initializes the `next` pointer with `next1`.
    }
};

Node *converArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0], nullptr); // Create the head node using the first element of `arr`.
    Node *mover = head;                     // `mover` points to the current node being processed.
    for (int i = 1; i < arr.size(); i++)    // Iterate over the rest of the array.
    {
        Node *temp = new Node(arr[i], nullptr); // Create a new node for the current element.
        mover->next = temp;                     // Link the current node to the new node.
        mover = temp;                           // Move `mover` to the new node.
    }
    return head; // Return the head of the constructed linked list.
}

int main()
{

    vector<int> arr = {2, 5, 8, 7}; // Define a vector with some integers.
    // Node* y = new Node(arr[0], nullptr);
    // cout << y->data;

    Node *head = converArr2LL(arr); // Convert the vector to a linked list.
    cout << head->data << endl;     // Print the data in the head node.

    Node *temp = head; // Use `temp` to traverse the list.
    while (temp)       // While there are nodes in the list:
    {
        cout << temp->data << " " << endl; // Print the data in the current node.
        temp = temp->next;                 // Move to the next node.
    }

    return 0;
}