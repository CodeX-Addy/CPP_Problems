class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i = 0;
        int j = m-1;
        while(i<n && j>0){
            int currElement = matrix[i][j];
            if(currElement == x) return true;
            
            if(currElement > x) --j;
            else ++i;
        }
        return false;
    }
};