int maxMeetings(int start[], int end[], int n) {
    // Your code here

    multimap<pair<int,int>,int> meetings;
    int busy_until=0,count=0;
    for(int i=0;i<n;i++){
        meetings.insert({{end[i],i+1},start[i]});
    }
    for(auto it:meetings){
        if(it.second>busy_until){
            count++;
            busy_until=it.first.first;
        }
    }
    return count;
}
