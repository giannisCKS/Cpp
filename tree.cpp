#include <iostream>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

struct node *
newNode(int data)
{
    struct node *node = new struct node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

int main()
{
    struct node *rootNode = newNode(10);
    cout << "General tree created is as follows:" << endl;
    cout << "\t\t\t " << rootNode->data << endl;
    cout << "\t\t\t "
         << "/ "
         << "\\" << endl;
    rootNode->left = newNode(20);
    rootNode->right = newNode(30);
    cout << "\t\t\t" << rootNode->left->data << "  " << rootNode->right->data;
    cout << endl;
    rootNode->left->left = newNode(40);
    cout << "\t\t\t"
         << "/" << endl;
    cout << "\t\t      " << rootNode->left->left->data;
    return 0;
}
