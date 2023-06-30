#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void Convert(BinaryTreeNode<int>* root, BinaryTreeNode<int>* &head, BinaryTreeNode<int>*&prev)
{
    if(root==NULL)
        return;
    if(root->left==NULL&&head==NULL)
    {
        head = root;
    }
    Convert(root->left, head, prev);
    if(prev!=NULL)
        prev->right = root;
    root->left = prev;
    prev = root;
    Convert(root->right, head, prev);
    return ;
}
BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
    BinaryTreeNode<int>* prev = NULL;
    BinaryTreeNode<int>* head = NULL;
    Convert(root, head, prev);
    return head;
}
