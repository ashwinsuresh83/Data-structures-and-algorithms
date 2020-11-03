class Solution
{
    public:
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            map<int,int> hashmap;
            vector<int> vec;
            hashmap[A[0]]++;
            for(int i=1;i<n1;i++)
            {
                if(A[i-1] != A[i])
                    hashmap[A[i]]++;
            }
            hashmap[B[0]]++;
            for(int i=1;i<n2;i++)
            {
                if(B[i-1] != B[i])
                    hashmap[B[i]]++;
            }
            hashmap[C[0]]++;
            if(hashmap[C[0]] == 3)
                vec.push_back(C[0]);
            for(int i=1;i<n3;i++)
            {
                if(C[i-1] != C[i])
                {
                    hashmap[C[i]]++;
                    if(hashmap[C[i]] == 3)
                        vec.push_back(C[i]);
                }
            }
            return vec;
        }




};

