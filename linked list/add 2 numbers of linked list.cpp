long long int getNum(struct Node* list){
    if(list==NULL || list->next==NULL)
        return list->data;
    Node*temp=list;
    long long int num=0;

    while(list!=NULL){
        num=num*10+list->data;
        list=list->next;
    }
    return num;
}
struct Node* createLinkedList(int num){
    int r=num%10;
    Node* temp=new Node(r);
    Node* head=temp;
    num/=10;
    while(num>0){
        r=num%10;
        Node* temp=new Node(r);
        temp->next=head;
        head=temp;
        num=num/10;

    }
    return head;
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    // code here
    long long int num1=getNum(first);
    long long int num2=getNum(second);
    long long int res=num1+num2;
    return createLinkedList(res);
}
