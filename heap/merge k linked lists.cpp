class compare{
    public:
    int operator ()(Node* a,Node*b){
        return b->data<a->data;
    }
};
Node * mergeKLists(Node *arr[], int K)
{
       // Your code here
       priority_queue<Node*,vector<Node*>,compare> pq;
       for(int i=0;i<K;i++){
           pq.push(arr[i]);
       }
       Node* res=(Node*)malloc (sizeof(Node*));
       Node* tail=res;
       while(!pq.empty()){
           Node* temp=pq.top();
           pq.pop();
           if(temp->next)
                pq.push(temp->next);
           tail->next=temp;
           tail=tail->next;
       }
       return res->next;

}
