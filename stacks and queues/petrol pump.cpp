int tour(petrolPump p[],int n)
{
   //Your code here
   int sum=0;
   for(int i=0;i<n;i++){
       sum+=p[i].petrol-p[i].distance;
   }
   if(sum<0)
    return-1;
    int start=0;
    sum=0;
    for(int i=0;i<n;i++){
        sum+=p[i].petrol-p[i].distance;
        if(sum<0){
            start=i+1;
            sum=0;
        }
    }
    return start;
}

