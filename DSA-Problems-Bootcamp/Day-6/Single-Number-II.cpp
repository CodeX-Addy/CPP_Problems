class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Brute force using hashmap
        /*
        map<int,int> mp;
        for(int i=0; i<nums.size(); ++i){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            if(it.second == 1) return it.first;
        }
        return -1;*/

        //Optimized approach
        int ans = 0;
        for(int i=0; i<32; ++i){
            int cnt = 0;
            for(int j=0; j<nums.size(); ++j){
               if ((static_cast<long long>(1) << i) & nums[j]) ++cnt;

         }
             if (cnt % 3) ans |= (1 << i);
        }
        return ans;

    }
};