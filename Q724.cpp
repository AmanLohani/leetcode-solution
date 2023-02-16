// 724. Find Pivot Index

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int leftsum = 0;
       int rightsum = 0;
       for(int numb : nums){
           rightsum += numb;
       } 
       for(int i=0; i<nums.size();i++){
           rightsum -= nums[i];
           if(leftsum == rightsum){
               return i;
           }
           leftsum += nums[i];
       }
       return -1;
    }
};