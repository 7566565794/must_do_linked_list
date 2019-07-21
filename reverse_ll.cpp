Node* reverseList(Node *head)
{
  // Your code here
    Node *cur = head;
    Node *next, *prev;
    while(cur){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
