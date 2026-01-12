#include <iostream>
#include <vector>
using namespace std;

// morris traversal is inorder traversal(LNR) in which time complexity is o(n) and space complexity is o(1)

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        val = data;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode *createtree()
{
    cout << "enter value of TreeNode: ";
    int value;
    cin >> value;

    if (value == -1)
    {
        return NULL;
    }

    TreeNode *root = new TreeNode(value);
    cout << "left child node:" << value << endl;
    root->left = createtree();
    cout << "right child node:" << value << endl;
    root->right = createtree();

    return root;
}

int main()
{
    TreeNode *root = createtree();

    vector<int> ans;
    if (!root)
        cout << "null";
    TreeNode *curr = root;
    while (curr)
    {
        if (curr->left == NULL)
        {
            ans.push_back(curr->val);
            curr = curr->right;
        }
        else
        {
            TreeNode *pred = curr->left;
            while (curr != pred->right && pred->right)
            {
                pred = pred->right;
            }

            if (pred->right == NULL)
            {
                pred->right = curr;
                curr = curr->left;
            }
            else
            {
                pred->right = nullptr;
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}