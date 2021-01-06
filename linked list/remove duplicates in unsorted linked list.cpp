Node * removeDuplicates( Node *head)
{
 // your code goes here
 if(head==NULL || head->next==NULL){
     return head;
 }
 int arr[1000000]={0};
 Node *temp=head->next;
 Node* prev=head;
 arr[prev->data]=1;
 while(temp!=NULL){
    if(arr[temp->data]==0){
        arr[temp->data]+=1;
        temp=temp->next;
        prev=prev->next;
    }
    else{
        prev->next=temp->next;
        temp=temp->next;
    }
 }
 return head;
}
