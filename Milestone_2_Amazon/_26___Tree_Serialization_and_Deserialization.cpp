class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    int idx =0;

    void solve(Node *root,vector<int> &v)
    {
        if(!root){
            v.push_back(int(NULL));
            return;
        }

        v.push_back(root->data);
        solve(root->left,v);
        solve(root->right,v);
        return;
    }

    vector<int> serialize(Node *root)
    {
        //Your code here
        vector<int> v;
        solve(root,v);
        return v;
    }

    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &v)
    {
       //Your code here
        if((v.size()-1) < idx || v[idx]==NULL)
        {
            idx++;
            return NULL;
        }

        Node *root = new Node(v[idx++]);
        root->left = deSerialize(v);
        root->right = deSerialize(v);

        return root;
    }

};
