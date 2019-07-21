int getCount(Node *head){
    int c = 0;
    while(head){
        c++;
        head = head->next;
    }
    return c;
}

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int c1 = getCount(head1);
    int c2 = getCount(head2);
    int d = abs(c1-c2);
    if(c1>c2){
        for(int i=0; i<d; i++)
            head1 = head1->next;
    }
    else if(c1<c2){
        for(int i=0; i<d; i++)
            head2 = head2->next;
    }
    while(head1 && head2){
        if(head1==head2)
            return head1->data;
        head1 = head1->next;
        head2 = head2->next;
    }
    return -1;
}
