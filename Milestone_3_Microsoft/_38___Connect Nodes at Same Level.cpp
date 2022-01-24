public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
        queue<Node*> q;
        q.push(root);

        Node* prev = NULL;
        Node* temp;
        int cnt=0, curr=1;

        while(!q.empty())
        {
            temp = q.front();
            q.pop();

            if(prev!=NULL)
               prev->nextRight = temp;

            prev =temp;
            curr--;

            if(temp->left) q.push(temp->left), cnt++;
            if(temp->right) q.push(temp->right), cnt++;

            if(curr==0)
            {
                curr =cnt;
                cnt =0;

                temp->nextRight = NULL;
                prev =NULL;
            }
        }
    }
