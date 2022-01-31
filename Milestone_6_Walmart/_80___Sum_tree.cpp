void toSumTree(Node *node)
    {
        // Your code here
        solve(node);
    }

    int solve(Node* root)
    {
        if(!root) return 0;

        if(!root->left && !root->right)
        {
            int temp =root->data;
            root->data =0;
            return temp;
        }

        int left =solve(root->left);
        int right =solve(root->right);

        int temp =root->data;

        root->data =left+right;
        return root->data+temp;
    }
