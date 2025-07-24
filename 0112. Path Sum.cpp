#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
};

TreeNode* make_node(int x)
{
    TreeNode* a = new TreeNode();
    a->data = x;
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

    while(!q.empty()){
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

bool hasPathSum(TreeNode* root, int targetSum) {
    if(root == nullptr) return false;

    if(root->left == nullptr && root->right == nullptr){
        return targetSum - root->data == 0;
    }

    return hasPathSum(root->left, targetSum - root->data) || hasPathSum(root->right, targetSum - root->data);
}

int main()
{
    int n; cin >> n;
    vector<string> nodes(n);
    for(int i = 0; i < n; i++) cin >> nodes[i];
    int targetSum; cin >> targetSum;

    TreeNode* root = buildTree(nodes);
    cout << hasPathSum(root, targetSum);

    system("pause");
}
