void assist(node* p,vector<node*>&v){
    if(!p)
        return;
    assist(p->left,v);
    v.push_back(p);
    assist(p->right,v);


}

void populateNext(struct node* p)
{

// Your code goes here
    vector<node*> v;
    assist(p,v);
    for(int i=0;i<v.size()-1;i++){
        node* temp=v[i];
        temp->next=v[i+1];
    }

}
