    int countWays(int N, string S){
        // code here
        int n=(N+1)/2;
        string str1,str2;
        for(int i=0;i<N;i++){
            if(i%2==0)
                str1.append(S,i,1);
            else{
                str2.append(S,i,1);
            }
        }

        long long int dpt[n][n];
        long long int dpf[n][n];
        for(int cl=0;cl<n;cl++){
            for(int i=0,j=cl;j<n;i++,j++){
                if(cl==0){
                    if(str1[i]=='T'){
                        dpt[i][j]=1;
                        dpf[i][j]=0;
                    }
                    else{
                        dpt[i][j]=0;
                        dpf[i][j]=1;
                    }
                }
                else{
                    dpt[i][j]=0;
                    dpf[i][j]=0;
                    for(int k=i;k<j;k++){
                        long long int ltc=dpt[i][k];
                        long long int rtc=dpt[k+1][j];
                        long long int lfc=dpf[i][k];
                        long long int rfc=dpf[k+1][j];

                        if(str2[k]=='&'){
                            dpt[i][j]+=(ltc*rtc)%mod;
                            dpf[i][j]+=(lfc*rfc+lfc*rtc+ltc*rfc)%mod;
                        }
                        else if(str2[k]=='|'){
                            dpt[i][j]+=(ltc*rfc+ltc*rtc+lfc*rtc)%mod;
                            dpf[i][j]+=(lfc*rfc)%mod;
                        }
                        else{
                            dpt[i][j]+=(ltc*rfc+lfc*rtc)%mod;
                            dpf[i][j]+=(lfc*rfc+rtc*ltc)%mod;
                        }
                    }
                }
            }
        }
        return (dpt[0][n-1])%mod;


    }
