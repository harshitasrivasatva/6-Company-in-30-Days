void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    int n =matrix.size();
    int m =matrix[0].size();

    for(int i=0;i<n;i++)
      for(int j=i;j<m;j++)
        swap(matrix[i][j],matrix[j][i]);

    for(int j=0;j<m;j++)
    {
        int l=0, r=n-1;

        while(l<=r)
        {
            swap(matrix[l][j],matrix[r][j]);
            l++, r--;
        }
    }
}
