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
