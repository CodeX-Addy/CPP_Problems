class Solution {
  public:
    // Function to find the minimum energy required.
    int minEnergy(vector<int>& a) {
        int intialEnergy = 1;
        int cEnergy = intialEnergy;
        
        for(int i=0; i<a.size(); ++i){
            cEnergy += a[i];
            if(cEnergy <= 0){
                intialEnergy += (1 - cEnergy);
                cEnergy = 1;
            }
        }
        return intialEnergy;
    }
};
