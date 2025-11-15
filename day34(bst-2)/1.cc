#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

Node *buildBSTfromSorted(int arr[], int st, int end)
{
    if (st > end)
    {
        return NULL;
    }
    int mid = st + (end - st) / 2;
    Node *curr = new Node(arr[mid]);

    curr->left = buildBSTfromSorted(arr, st, mid - 1);
    curr->right = buildBSTfromSorted(arr, mid + 1, end);
    return curr;
}

class Info{
public:
    int size;
    int min;
    int max;
    bool isBST;

    Info(int size, int min, int max, bool isBST)
    {
        this->size = size;
        this->min = min;
        this->max = max;
        this->isBST = isBST;
    }
};

static int maxSize;
Info* LargestBST(Node* root){
    if(root==NULL){
        return new Info(0, INT_MAX, INT_MIN, true);
    }

    Info* leftInfo = LargestBST(root->left);
    Info* rightInfo = LargestBST(root->right);
    int currMin = min(root->data, min(leftInfo->min, rightInfo->min));
    int currMax = max(root->data, max(leftInfo->max, rightInfo->max));
    int currSize = leftInfo->size + rightInfo->size + 1;

    if(leftInfo->isBST && rightInfo->isBST && root->data > leftInfo->max && root->data < rightInfo->min){
        maxSize = max(maxSize, currSize);
        return new Info(currSize, currMin, currMax, true);
    }

    return new Info(currSize, currMin, currMax, false);

}


Node* mergeBST(Node* root1, Node* root2){
    vector<int> nodes1;
    vector<int> nodes2;
    vector<int> merged;
    getInorder(root1, nodes1);
    getInorder(root2, nodes2);
    int i=0, j=0;
    while(i<nodes1.size() && j<nodes2.size()){
        if(nodes1[i]<nodes2[j]){
            merged.push_back(nodes1[i]);
            i++;
        }
        else{
            merged.push_back(nodes2[j]);
            j++;
        }
    }
    while(i<nodes1.size()){
        merged.push_back(nodes1[i]);
        i++;
    }
    while(j<nodes2.size()){
        merged.push_back(nodes2[j]);
        j++;
    }
}

int main()
{
    int arr[7] = {3, 4, 5, 6, 7, 8, 9};
    return 0;
}