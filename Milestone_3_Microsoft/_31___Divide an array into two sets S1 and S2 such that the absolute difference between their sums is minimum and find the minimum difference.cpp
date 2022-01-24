Node* node =NULL;
Node* temp =NULL;
Node* curr =NULL;

bool solve(Node *root, bool isLeaf)
{
    if(!root) return false;

    if(!root->left && !root->right)
    {
        if(node==NULL)
          node=root;
        if(temp!=NULL)
          temp->right =root;
        curr =root;
        curr->left =temp;

        temp =curr;
        return true;
    }

    bool a =solve(root->left,false);
    bool b =solve(root->right,false);

    if(a) root->left =NULL;
    if(b) root->right =NULL;

    return false;
}

Node * convertToDLL(Node *root){
    // add code here.
    node =NULL;
    temp =NULL;
    curr =NULL;

    if(!root) return NULL;
    solve(root,false);

    return node;
}

