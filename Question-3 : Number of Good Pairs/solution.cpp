#Given an array of integers nums, return the number of good pairs.

#A pair (i, j) is called good if nums[i] == nums[j] and i < j.

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]==nums[j]){
                    count+=1;
                }


            }
        }
       return count; 
    }
};
