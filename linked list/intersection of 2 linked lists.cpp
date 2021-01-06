int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int flag1=0,flag2=0;
    Node* temp1=head1,*temp2=head2;
    while(1){
        if(temp1==temp2){
            return temp1->data;
        }
        if(temp1==NULL &&flag1==0){
            temp1=head2;
            temp2=temp2->next;
            flag1=1;
        }
        else if(temp2==NULL &&flag2==0){
            temp2=head1;
            temp1=temp1->next;
            flag2=1;
        }
        else if(temp1==NULL || temp2==NULL){
            return -1;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
}
