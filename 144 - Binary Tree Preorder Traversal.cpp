#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* make_node(int x)
{
    TreeNode* a = new TreeNode();
    a->val = x;
    a->left = nullptr;
    a->right = nullptr;
    return a;
}

TreeNode* buildTree(vector<string> nodes)
{
    if(nodes.empty() || nodes[0] == "null") return nullptr;

    TreeNode* root = make_node(stoi(nodes[0]));
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;

    while(!q.empty() && i < nodes.size()){
        TreeNode* cur = q.front();
        q.pop();
        if(i < nodes.size() && nodes[i] != "null"){
            cur->left = make_node(stoi(nodes[i]));
            q.push(cur->left);
        }
        ++i;

        if(i < nodes.size() && nodes[i] != "null"){
            cur->right = make_node(stoi(nodes[i]));
            q.push(cur->right);
        }
        ++i;
    }
    return root;
}

void preorder(TreeNode* root, vector<int> &tmp)
{
    if(!root) return;
    tmp.push_back(root->val);
    preorder(root->left, tmp);
    preorder(root->right, tmp);
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> res;
    preorder(root, res);
    return res;
}

int main()
{
    int n; cin >> n;
    vector<string> nodes;
    for(int i = 0; i < n; i++){
        string x; cin >> x;
        nodes.push_back(x);
    }

    TreeNode* root = buildTree(nodes);
    vector<int> result = preorderTraversal(root);
    for(int num : result) cout << num << " ";
}
