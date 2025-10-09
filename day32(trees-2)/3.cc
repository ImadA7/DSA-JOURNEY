#include<iostream> //this one is left, last video of day-32
#include<vector>
#include<queue>
#include<map>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }

};

static int idx=-1;

Node* buildTree(vector<int> nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }

    Node* currNode= new Node(nodes[idx]);
    currNode->left=buildTree(nodes);
    currNode->right=buildTree(nodes);

    return currNode; 

}

void topView(Node* root){
    queue<pair<Node*, int>> Q;//(node,hd)
    map<int, int> m;//(hd,node->data) 
    Q.push(make_pair(root,0));
    while(!Q.empty()){
        pair<Node*, int> curr = Q.front();
        Q.pop();

        Node* currNode = curr.first;
        int currHD=curr.second;
        if(m.count(currHD)==0){
            map[currHD]=currNode->data;
        }
    }
}  

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);

    return 0;
}