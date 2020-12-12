int majorityElement(int a[], int size)
{

    // your code here
    int me=a[0],count=1;
    for(int i=1;i<size;i++){
        if(a[i]!=me){
            count-=1;
            if(count==0){
                me=a[i];
                count=1;
            }
        }
        else{
            count+=1;
        }
    }
    count=0;
    for(int i=0;i<size;i++){
        if(a[i]==me){
            count+=1;
        }
    }
    if(count>size/2)
        return me;
    else
        return -1;

}
