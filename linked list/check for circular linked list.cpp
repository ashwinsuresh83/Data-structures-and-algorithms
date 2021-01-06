bool isCircular(Node *head)
{
   // Your code here
    Node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head)
        return true;
    return false;
}
