void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    if(head==NULL ||head->next==NULL)
        *head1_ref=head;
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=head){
        fast=fast->next;
        if(fast->next!=head){
            slow=slow->next;
            fast=fast->next;
        }
    }
    fast->next=slow->next;
    slow->next=head;
    *head1_ref=head;
    *head2_ref=fast->next;

}
