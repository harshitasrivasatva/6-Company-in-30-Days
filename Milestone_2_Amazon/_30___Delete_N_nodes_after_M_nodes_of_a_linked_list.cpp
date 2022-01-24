class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here
        struct Node *temp = head;
        int curr =0;

        while(temp)
        {
            curr++;
            if(curr == M)
            {
                struct Node *prev = temp;
                int cnt =0;

                while(prev->next && cnt != N)
                {
                    prev = prev->next;
                    cnt++;
                }

                temp->next = prev->next;
                curr=0;
            }

            temp=temp->next;
        }
    }
};
