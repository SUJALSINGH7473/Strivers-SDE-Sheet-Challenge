#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head == NULL)
        return head;
    LinkedListNode<int>*curr=head;
    LinkedListNode<int>*prev = NULL;
    LinkedListNode<int>*fwd;
    while(curr!=NULL)
    {
        fwd = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}
int getCnt(LinkedListNode<int>* head)
{
    int cnt=0;
    while(head!=NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
bool isPalindrome(LinkedListNode<int> *head) {
    if(head==NULL || head->next == NULL)
        return true;
    LinkedListNode<int>* temp=head;
    int cnt = getCnt(head);
    if(cnt%2==0)
        cnt--;
    for(int i=1;i<=cnt/2;i++)
    {
       temp = temp->next;
    }
    LinkedListNode<int>* curr = reverseLinkedList(temp->next);
    LinkedListNode<int>* itr = head;
    while(curr!=NULL)
    {
        if(itr->data!=curr->data)
            return false;

        itr = itr->next;
        curr = curr->next;
    }
    temp->next = reverseLinkedList(temp->next);
    return true;
}









