struct node *reverse (struct node *head, int k)
{ 
  // Complete this method
  struct node *cur = head;
  int count = 0;
  struct node *prev = NULL;
  struct node *nextNode, *prevnode;
  while(cur && count<k){
        nextNode = cur->next;
        cur->next = prev;      
        prev = cur;
        cur = nextNode;
        count++;
  }
  // if(cur && nextNode && nextNode->next)
    // cout<<cur->val<<"hera"<<nextNode->next->val<<endl;
  if(nextNode!=NULL)
        head->next = reverse(nextNode,k);
return prev;
    
}
