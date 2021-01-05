struct node *reverse (struct node *head, int k)
{
    // Complete this method
    node* curr=head;
    node* prev=NULL,*next;
    int counter=k;
    while(counter-- && curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    if(head!=NULL){
        head->next=reverse(next,k);
    }
    return prev;

}
