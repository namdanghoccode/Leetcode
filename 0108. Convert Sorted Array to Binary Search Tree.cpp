#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* make_node(int x)
{
    TreeNode* a = new TreeNode();
    a->data = x;
    a->left = nullptr;
    a->right = nullptr;
    return a;
}

TreeNode* buildTree(vector<int> nums, int left, int right)
{
    if(left > right) return nullptr;
    int mid = (left + right) / 2;
    TreeNode* root = make_node(nums[mid]);
    root->left = buildTree(nums, left, mid - 1);
    root->right = buildTree(nums, mid + 1, right);
    return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
    return buildTree(nums, 0, nums.size() - 1);
}

void inorder(TreeNode* root){
    if(!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    int n; cin >> n;
    vector<int> nodes(n);
    for(int i = 0; i < n; i++) cin >> nodes[i];

    TreeNode* root = sortedArrayToBST(nodes);
    inorder(root); // Duyệt trung thứ để in
    cout << endl;

    system("pause");
}
