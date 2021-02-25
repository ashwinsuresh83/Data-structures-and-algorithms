    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set dict(wordList.begin(),wordList.end());
        int ladder=1;
        queue<string> todo;
        todo.push(beginWord);
        while(!todo.empty()){
            int n=todo.size();
            for(int j=0;j<n;j++){
                string word=todo.front();
                todo.pop();
                if(word==endWord)
                    return ladder;
                dict.erase(word);
                for(int i=0;i<word.size();i++){
                    char c=word[i];
                    for(int k=0;k<26;k++){
                        word[i]='a'+k;
                        if(dict.find(word)!=dict.end()){
                            todo.push(word);

                        }
                    }
                    word[i]=c;
                }
            }
            ladder++;
        }
        return 0;
    }
