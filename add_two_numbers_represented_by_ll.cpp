Node* addTwoLists(Node* first, Node* second) {
    // Code here
    Node *head = NULL;
    int x, y, c = 0;
    while(first || second){
        if(first){
            x = first-> data;
            first = first->next;
        }
        else
            x = 0;
        if(second){
            y = second->data;
            second = second->next;
        }
        else
            y = 0;
        int s = (x+y+c);
        push(&head,s%10);
        c = s/10;

    }
    if(c)
        push(&head,c);
    Node *cur = head,*prev = NULL, *next;
    while(cur){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
