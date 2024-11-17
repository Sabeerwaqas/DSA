#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

Node *converArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0], nullptr);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main()
{

    vector<int> arr = {2, 5, 8, 7};
    // Node* y = new Node(arr[0], nullptr);
    // cout << y->data;

    Node *head = converArr2LL(arr);
    cout << head->data << endl;
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }

    return 0;
}