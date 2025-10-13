#include<iostream>
#include<vector>
#include<queue>
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

bool rootToNodePath(Node* root, int n1, vector<int> &path){
    if(root==NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data==n1){
        return true;
    }
    int isLeft=rootToNodePath(root->left,n,path);
    int isRight=rootToNodePath(root->right,n,path);

    if(isLeft|| isRight){
        return true;
    }
 

    path.pop_back();
    return false;  
}

int LCA(Node* root,int n1, int n2){
    vector<int> path1;
    vector<int> path2;

    rootToNodePath(root, n1, path1);//path1 mein store ho jayega path
    rootToNodePath(root, n2, path2);
    
    int lca=-1;
    for(int i=0,j=0;i<path1.size()&&j,path2.size();i++,j++){
        if(path1[i]!=path2[j]){
            return lca;
        }
        lca=path1[i];
    }
}

Node* LCA2(Node* root, int n1, int n2){//approach 2

    if(root==NULL){
        return NULL;
    }
    if(root->data==n1|| root->data==n2){
        return root;
    }

    Node* leftLCA= LCA2(root->left,n1,n2);
    Node* rightLCA= LCA2(root->right,n1,n2);

    if(leftLCA!=NULL&&rightLCA!=NULL){
        return root;
    }

    return leftLCA==NULL? rightLCA:leftLCA;
}

int dist(Node* root, int n){
    if(root==NULL){
        return -1;
    }

    if(root->data==n){
        return 0;
    }

    int leftDist = dist(root->left,n);
    if(leftDist != -1){
        return leftDist+1;
    }

    int rightDist = dist(root->right,n);
    if(rightDist != -1){
        return rightDist+1;
    }
}

int mindDist(Node* root,int n1, int n2){//mind idst between nodes
    Node* lca= LCA(root,n1,n2);
    int dist1=dist(lca,n1);
    int dist2=dist(lca,n2);
    return dist1+ dist2;
}

int KthAncestor(Node* root, int node, int k){
    if(root==NULL){
        return -1;
    }

    if(root->data==node){
        return 0;
    }

    int leftDist = KthAncestor(root->left,node,k);
    int rightDist = KthAncestor(root->right,node,k);

    if(leftDist==-1 && rightDist==-1){
        return -1;
    }

    int validval = leftDist == -1 ? rightDist:leftDist;
    if(validval + 1 == k){
        cout<<"kth ancestor:"<<root->data<<endl;
    }

    return validval+1;
}


int transform(Node* root){
    if(root=NULL){
        return 0;
    }
    int leftOld= transform(root->left);
    int rightOld= transform(root->right);
    int currOld= root->data;
    root->data= leftOld+rightOld;
    if(root->left!=NULL){
        root->data+=root->left->data;
    }
    if(root->right!=NULL){
        root->data+=root->right->data;
    }

    return currOld;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);
    int n1=4, n2=5;
     

    return 0;
}