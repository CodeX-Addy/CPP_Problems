class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        // code here
        int maxheight = 0;
        int cnt = 0;
        
        for(int i=0; i<height.size(); ++i){
            if(height[i] > maxheight){
                maxheight = height[i];
                ++cnt;
            }
        }
        return cnt;
    }
};
