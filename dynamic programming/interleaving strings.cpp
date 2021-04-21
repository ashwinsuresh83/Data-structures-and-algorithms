    unordered_map<string,bool>mem;
    bool check(string A,string B,string C,int len1,int len2,int len3,int p1,int p2,int p3){
        if(p3==len3){
            return (p1==len1 && p2==len2)?true:false;
        }

        string key=to_string(p1) + "*" + to_string(p2)+ "*" + to_string(p3);
        if(mem.find(key)!=mem.end())
            return mem[key];
        if(p1==len1){
            return  mem[key]=  (B[p2]==C[p3])?check(A,B,C,len1,len2,len3,p1,p2+1,p3+1):false;
        }
        if(p2==len2){
            return mem[key]=(A[p1]==C[p3])?check(A,B,C,len1,len2,len3,p1+1,p2,p3+1):false;
        }
        bool one=false,two=false;
        if(A[p1]==C[p3])
            one=check(A,B,C,len1,len2,len3,p1+1,p2,p3+1);
        if(B[p2]==C[p3])
            two=check(A,B,C,len1,len2,len3,p1,p2+1,p3+1);
        return mem[key]= one || two;
    }
    bool isInterleave(string A, string B, string C)
    {
        //Your code here
        int length1=A.size();
        int length2=B.size();
        int length3=C.size();
        if (length1+length2!=length3)
            return false;

        return check(A,B,C,length1,length2,length3,0,0,0);
    }
