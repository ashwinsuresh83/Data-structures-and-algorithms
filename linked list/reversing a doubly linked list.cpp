Node* reverseDLL(Node * head)
{
    //Your code here
    Node* temp=head,*q,*nextNode;
    while(temp){
        nextNode=temp->next;
        temp->next=temp->prev;
        temp->prev=nextNode;
        q=temp;
        temp=temp->prev;
    }
    head=q;
    return head;
}
