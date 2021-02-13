#include <iostream>
using namespace std;
#include<string>
#include<cstring>

bool is_word_present(string dictionary[],string word,int n){
    for(int i=0;i<n;i++){
    if(dictionary[i].compare(word) == 0)
    return true;
    }

    return false;
}
void fraction(string str,string dictionary[],int m,string result,int n){
    // int n=str.length();
    for(int i=1;i<=n;i++){
        string word=str.substr(0,i);
        if(is_word_present(dictionary,word,m)){
            if(i==n){
            result=result+word;
            cout<<"("<<result<<")";
            return;
            }
            fraction(str.substr(i,n-i),dictionary,m,result+word+" ",n-i);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string dictionary[n];
	    for(int i=0;i<n;i++){
	        cin>>dictionary[i];
	    }
	    string str;
	    cin>>str;
	    string result="";
	    fraction(str,dictionary,n,result,str.length());
	    cout<<endl;
	}
	return 0;
}
