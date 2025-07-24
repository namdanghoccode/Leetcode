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

bool isSameTree(TreeNode* p, TreeNode* q) {
    if(!p && !q) return true;
    if(!p || !q || (p->val != q->val)) return false;
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main()
{
    int n, m; cin >> n >> m;
    vector<string> p(n), q(m);
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int j = 0; j < m; j++) cin >> q[j];

    TreeNode *p1 = buildTree(p);
    TreeNode *q1 = buildTree(q);
    cout << isSameTree(p1, q1);
}
