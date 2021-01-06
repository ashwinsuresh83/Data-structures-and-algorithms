int carry=1;
void add(Node* head){
    if(head==NULL)
        return;
    add(head->next);
    head->data+=carry;
    carry=head->data/10;
    head->data=head->data%10;

}
Node* addOne(Node *head)
{
    // Your Code here
    // return head of list after adding one
    carry=1;
    add(head);
    if(carry==0)
        return head;
    Node *temp=new Node(1);
    temp->next=head;
    return temp;
}
