Node* cloneGraph(Node* node) {
        if(!node)
            return NULL;
        else{
            if(copy.find(node)==copy.end()){
                copy[node]=new Node(node->val,{});
                for(Node* neighbors : node->neighbors){
                    copy[node]->neighbors.push_back(cloneGraph(neighbors));
                }
            }
            return copy[node];
        }
    }
    private:
    unordered_map<Node*,Node*> copy;
