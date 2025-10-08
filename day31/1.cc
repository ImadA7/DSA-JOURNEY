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

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void InOrder(Node* root){
    if(root==NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PostOrder(Node* root){
    if(root==NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";

}

void LevelOrder(Node* root){
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty()){
        Node* curr = Q.front();
        Q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            Q.push(curr->left);
        }
        if(curr->right!=NULL){
            Q.push(curr->right);
        }
    }

}

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftht=height(root->left);
    int rightht=height(root->right);
    int currht= max(leftht,rightht)+1;
    return currht;

}

int Count(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftCount=Count(root->left);
    int RightCount=Count(root->right);
    return leftCount+RightCount+1;
}

int Sum(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftSum=Sum(root->left);
    int RightSum=Sum(root->right);
    return leftSum+RightSum+root->data;
}


int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);

    preOrder(root);
    cout<<endl;

    InOrder(root);
    PostOrder(root);

    LevelOrder(root);
    return 0;
}