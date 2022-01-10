class Solution{
public:
    int isValid(vector<vector<int>> mat){
        // code here
        int row[9][9], col[9][9], box[9][9];

        for(int i=0;i<9;i++)
          for(int j=0;j<9;j++)
            row[i][j]=0, col[i][j]=0, box[i][j]=0;

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(mat[i][j]==0)
                   continue;

                if(row[i][mat[i][j]-1] != 0)
                   return false;
                if(col[mat[i][j]-1][j] != 0)
                   return false;
                if(box[(i/3)*3 + j/3][mat[i][j]-1] != 0)
                   return false;

                row[i][mat[i][j]-1] =1;
                col[mat[i][j]-1][j] =1;
                box[(i/3)*3 + j/3][mat[i][j]-1] =1;
            }
        }

        return true;
    }
};
