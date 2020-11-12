int median(int matrix[][100], int r, int c){
        // code here
        int min=INT_MAX,max=INT_MIN;
        for(int i=0;i<r;i++){
            if(matrix[i][0]<min)
                min=matrix[i][0];
            if(matrix[i][c-1]>max)
                max=matrix[i][c-1];

        }
        int desired=(r*c+1)/2;
        while(min<max){
            int count=0;
            int mid=min+(max-min)/2;
            for(int i=0;i<r;i++)
                count+= upper_bound(matrix[i],matrix[i]+c,mid)-matrix[i];
            if(count<desired)
                min=mid;
            else
                max=mid;

        }
        return min;

    }
