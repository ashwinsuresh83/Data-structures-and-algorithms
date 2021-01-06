Node *removeDuplicates(Node *root)
{
 // your code goes here
 if(root==NULL || root->next==NULL){
     return root;
 }
 Node* temp=root->next;
 Node* prev=root;
 while(temp!=NULL){
     if(prev->data==temp->data){
         prev->next=temp->next;
         temp=temp->next;
     }
     else{
         prev=prev->next;
         temp=temp->next;
     }
 }
 return root;
}
