#include<iostream>
#include<vector>
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
Node* insert(Node* root, int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }else {
        root->right=insert(root->right,val);
    }

    return root;
}

Node* buildBST(int arr[],int n){
    Node* root=NULL;
    for(int i=0;i<n;i++){
        insert(root,arr[i]);
    }

    return root;

}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
bool search(Node* root, int key){
    if(root==NULL){
        return false;
    }

    if(root->data==key){
        return true;
    }

    if(root->data>key){
        return search(root->left,key);
    } else {
        return search(root->right,key);
    }
}

Node* getInorderSuccessor(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root; //IS
}

Node* delNode(Node* root, int val){
    if(root==NULL){
        return NULL;
    }

    if(val<root->data){
        root->left=delNode(root->left,val);
    } else if(val>root->data){
        root->right=delNode(root->right,val);
    } else {
        // Node found
        // Case 1: No child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // Case 2: One child
        if(root->left==NULL || root->right==NULL){
            return root->left == NULL ? root->right : root->left;
        }
        // Case 3: Two children
        Node* IS=getInorderSuccessor(root->right);
        root->data=IS->data;
        root->right=delNode(root->right,IS->data);//case1,case2 will be handled in this call
        return root;
    }
    return root;
}

void printInRange(Node* root, int start, int end){
    if(root==NULL){
        return ;     
    }
    if(start<=root->data && root->data<=end){
        printInRange(root->left,start,end);
        cout<<root->data<<" ";
        printInRange(root->right,start,end);
    } else if(root->data<start){ //case2
        printInRange(root->right,start,end);
    } else {
        printInRange(root->left,start,end);
    }
}  

void printPath( vector<int> &path){
    for(int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;
}

void pathHelper(Node* root, vector<int> &path){
    if(root==NULL){
        return;
    }
    path.push_back(root->data);
    //leaf node
    if(root->left==NULL && root->right==NULL){
        //print the path
        printPath(path);
        path.pop_back();
        return;
    }
    pathHelper(root->left,path);
    pathHelper(root->right,path);
    path.pop_back();
}

void rootToLeafPaths(Node* root){
    vector<int> path;
    pathHelper(root,path);
}

bool validateHelper(Node* root, Node* min, Node* max){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data<min->data){
        return false;
    }
    if(max!=NULL && root->data>max->data){
        return false;
    }
    return validateHelper(root->left,min,root) 
        && validateHelper(root->right,root,max);
}
bool validateBST(Node* root){
    return validateHelper(root,NULL,NULL);
}

int main(){
    int arr[6]={5,1,3,4,2,7};
    
    Node* root=buildBST(arr,6);
    inOrder(root);
    cout<<endl;
    cout<<search(root,15)<<endl;
    return 0;
}