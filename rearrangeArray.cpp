class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>nums1;
         vector<int>nums2;
         int n=nums.size();
         for(int it:nums){
             if(it>0)
             nums1.push_back(it);
             else 
            nums2.push_back(it);
         }

         nums.clear();
         int i=0;
         while(nums.size()!=n){
             nums.push_back(nums1[i]);
             nums.push_back(nums2[i]);
             i++;
         }
         return nums;
    }
};
