
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
};

TreeNode *make_node(int x)
{
     TreeNode *a = new TreeNode();
     a->val = x;
     a->left = nullptr;
     a->right = nullptr;
     return a;
}

TreeNode *buildTree(vector<string> nodes)
{
    if(nodes.empty() || nodes[0] == "null") return nullptr;

    TreeNode *root = make_node(stoi(nodes[0]));
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;

    while(!q.empty()){
        TreeNode *cur = q.front();
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

bool isMirror(TreeNode *t1, TreeNode *t2)
{
    if(!t1 && !t2) return true;
    if(!t1 || !t2 || (t1->val != t2->val)) return false;
    return isMirror(t1->left, t2->right) && isMirror(t1->right, t2->left);
}

bool isSymmetric(TreeNode* root) {
    return isMirror(root->left, root->right);
}

int main()
{
    int n; cin >> n;
    vector<string> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    TreeNode *p1 = buildTree(p);
    cout << isSymmetric(p1);

    system("pause");
}
