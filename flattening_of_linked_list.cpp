Node *flatten(Node *root)
{
   int size=0;
   Node *right=root;
   Node *down=root;
   while(right!=NULL){
       down=right;
       while(down!=NULL){
           down=down->bottom;
           size++;
       }
       right=right->next;
   }
//   cout<<size;
   int i;
   i=0;
   int arr[size];
   right=root;
   down=root;
   while(right!=NULL){
       down=right;
       while(down!=NULL){
        //   cout<<"hello"<<down->data;
           arr[i]=down->data;
           down=down->bottom;
           i++;
       }
       right=right->next;
   }
   sort(arr,arr+size);
   for(int j=0;j<size;j++){
       cout<<arr[j]<<" ";
   }
//   cout<<endl;
   return NULL;
}


//Another method to flatten a linked list


/* Node structure  used in the program
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom ;
}; */
/*  Function which returns the  root of 
    the flattened linked list. */
    
Node *merge(Node *x, Node *y){
    if(!x)    
        return y;
    if(!y)
        return x;
    Node *result = NULL;
    if(x->data<y->data){
        result = x;
        result->bottom = merge(x->bottom,y);
    }
    else{
        result = y;
        result->bottom = merge(x,y->bottom);
    }
    return result;
}

Node *flatten(Node *root)
{
   // Your code here
   if(!root || !root->next)
        return root;
    return merge(root, flatten(root->next));
}
