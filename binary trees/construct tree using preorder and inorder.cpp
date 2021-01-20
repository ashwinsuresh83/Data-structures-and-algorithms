Node* build(int in[],int pre[],int l,int h,int &preIndex){
    if(l>h)
        return NULL;
    struct Node* temp=new Node(pre[preIndex]);
    int data=pre[preIndex++];
    int i;
    for(i=l;i<h;i++){
        if(in[i]==data)
            break;
    }
    temp->left=build(in,pre,l,i-1,preIndex);
    temp->right=build(in,pre,i+1,h,preIndex);
    return temp;

}

Node* buildTree(int in[],int pre[], int n)
{
//add code here.
    int preIndex=0;
    return build(in,pre,0,n,preIndex);
}
