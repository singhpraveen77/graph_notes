
#include <bits/stdc++.h>
using namespace std;


class TreeNode {
    public:
    int data;
    TreeNode * left;
    TreeNode * right;

    TreeNode(int val){
        data=val;
        right=nullptr;
        left=nullptr; 
    }
};

TreeNode* input(){

    cout<<"give input :"<<endl;
    int val;
    cin>>val;

    if(val==-1)return nullptr;

    queue<TreeNode*> q;
    TreeNode* root=new TreeNode(val);
    

    q.push(root);

    while(q.empty()==false){
        auto front=q.front();
        q.pop();

        int left;
        cin>>left;


        if(left==-1)return root;
        TreeNode* leftnode=new TreeNode(left);
        front->left=leftnode;
        q.push(leftnode);
        
        int right;
        cin>>right;

        if(right==-1)return root;
        TreeNode* rightnode=new TreeNode(right);
        front->right=rightnode;
        q.push(rightnode);

    }

    return root;
}

//1
//2 3
//4 5   6 7

void inorder(TreeNode* root){
    if(root==nullptr)return ;

    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}



int main(){
    TreeNode* root=input();

    if(root==nullptr)cout<<"0 nodes ";

    cout<<"inorder traversal :";

    inorder(root);

}