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


int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftht=height(root->left);
    int rightht=height(root->right);
    int currht= max(leftht,rightht)+1;
    return currht;

}

int diam1(Node* root){
    int currdiam=height(root->left) + height(root->right)+1;//currdiam vo h jo root ke throgh pass kregi
    int leftDiam=diam1(root->left);
    int rightdiam=diam1(root->right);
    return max(currdiam, max(leftDiam,rightdiam));
}

pair<int,int> diam2(Node* root){
    if(root==NULL){
        return make_pair(0,0);
    }
    //(diameter, height)
    pair<int,int> leftInfo = diam2(root->left);//(LD,LH)
    pair<int,int> rightInfo = diam2(root->left);//(RD,RH)
    int currDiam = leftInfo.second+rightInfo.second+1;
    int finalDiam=max(currDiam,max(leftInfo.first, rightInfo.first));
    int finalHt= max(leftInfo.second, rightInfo.second)+1;
    return make_pair(finalDiam,finalHt);
}

bool isIdentical(Node* root1, Node* root2){
    if(root1==NULL&& root2==NULL){
        return true;
    } else if(root1==NULL|| root2==NULL){
        return false;
    }

    if(root1->data!=root2->data){
        return false;
    }

    return isIdentical(root1->left,root2->left)
        && isIdentical(root1->right, root2->right);
}

bool isSubtree(Node* root, Node* subRoot){
    if(root==NULL&&subRoot==NULL){
        return true;
    } else if(root==NULL||subRoot==NULL){
        return false;
    }
    if(root->data==subRoot->data){
        if(isIdentical(root,subRoot)){
            return true;
        }

    }
    int isLeftSubtree = isSubtree(root->left,subRoot);
    if(!isLeftSubtree){
        return isSubtree(root->right,subRoot);
    }


}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=buildTree(nodes);
    Node* subroot = new Node(2);
    subroot->left= new Node(2);
    subroot->right = new Node(5);
    cout<<isSubtree(root,subroot);
    return 0;
}