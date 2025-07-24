#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

TreeNode *make_node(int x)
{
    TreeNode *a = new TreeNode();
    a->val = x;
    a->left = nullptr;
    a->right = nullptr;
    return a;
}

TreeNode *buildTree(const vector<string> &nodes)
{
    if(nodes.empty() || nodes[0] == "null") return nullptr;

    TreeNode *root = make_node(stoi(nodes[0]));
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;

    while(!q.empty() && i < nodes.size()){
        TreeNode *cur = q.front();
        q.pop();
        if(i < nodes.size() && nodes[i] != "null"){
            cur->left = make_node(stoi(nodes[i]));
            q.push(cur->left);
        }
        i++;

        if(i < nodes.size() && nodes[i] != "null"){
            cur->right = make_node(stoi(nodes[i]));
            q.push(cur->right);
        }
        i++;
    }
    return root;
}

void inorder(TreeNode *root, vector<int>&tmp)
{
    if(!root) return;
    inorder(root->left, tmp);
    tmp.push_back(root->val);
    inorder(root->right, tmp);
}

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    inorder(root, result);
    return result;
}

int main()
{
    vector<string> nodes;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        nodes.push_back(s);
    }
    TreeNode *root = buildTree(nodes);
    vector<int> ans = inorderTraversal(root);
    for(int num : ans) cout << num << " ";

    system("pause");
}
