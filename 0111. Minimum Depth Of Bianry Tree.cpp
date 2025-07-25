#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
};

TreeNode* make_node(int x){
    TreeNode* a = new TreeNode();
    a->val = x;
    a->left = nullptr;
    a->right = nullptr;
    return a;
}

TreeNode* buildTree(vector<string> nodes){
    if(nodes.empty() || nodes[0] == "null") return nullptr;

    TreeNode* root = make_node(stoi(nodes[0]));
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;

    while(q.empty()){
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

class Solution {
    public:
        int minDepth(TreeNode* root) {
            if(!root) return 0;

            queue<pair<TreeNode*, int>> q;
            q.push({root, 1});

            while(!q.empty()){
                TreeNode* cur = q.front().first;
                int depth = q.front().second;

                if(!cur->left && !cur->right){
                    return depth;
                }

                if(cur->left){
                    q.push({cur->left, depth + 1});
                }

                if(cur->right){
                    q.push({cur->right, depth + 1});
                }
            }

            return 0;
        }
};

int main(){
    int n; cin >> n;
    vector<string> nodes(n);
    for(int i = 0; i < n; i++){
        cin >> nodes[i];
    }

    TreeNode* root = buildTree(nodes);

    Solution sol;
    int ans = sol.minDepth(root);
    cout << ans;

    system("pause");
}