// 1480. Running Sum of 1d Array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int k=0;
        for(int i = 0; i<nums.size();i++){
            k= k + nums[i];
            res.push_back(k);
        };
        return res;
    }
};