#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int data)
{
    struct Node* newNode  (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct Node* insert(struct Node* root, int data)
{
    if(root==NULL)
        return createNode(data)

        if(data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

        return root;
}

struct Node* minValueNode(struct Node* node)
{
    struct Node* current = node;

    while(current->lrft != NULL)
        current = current->left;
    return current;
}
struct Node* deleteNode(struct Node* root,int data)
{
    if(root==NULL)
        return root;
    if(data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);

        else
        {
            if(root->left==NULL)
            {
                struct Node* temp = root->right;
                free(root);
                return temp;
            }

            else if (root->right==NULL)
            {
                struct Node* temp = root->left;
                free(root);
                return temp;
            }

            struct Node* temp= minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }

    int height(struct Node* root)
    {
        if(root==NULL)
            return 0;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);


    }
