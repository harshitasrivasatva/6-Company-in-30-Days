public:
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > mat, int n, int m)
    {
        // code here
        vector<int> res;

        int r=0,c=0;

        while(r<n && c<m)
        {
            for(int i=c;i<m;i++)
              res.push_back(mat[r][i]);

            r++;

            for(int i=r;i<n;i++)
              res.push_back(mat[i][m-1]);

            m--;

            if(r<n){
              for(int i=m-1;i>=c;i--)
                res.push_back(mat[n-1][i]);

              n--;
            }

            if(c<m){
              for(int i=n-1;i>=r;i--)
                res.push_back(mat[i][c]);

              c++;
            }
        }

        return res;
    }
