int isPlaindrome(string S)
	{
	    // Your code goes here
	    for(int i=0;i<S.length();i++){
	        if(S[i]==S[S.length()-1-i])
	            continue;
	        return 0;
	    }
	    return 1;
	}

