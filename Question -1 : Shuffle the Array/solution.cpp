//Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
//Return the array in the form [x1,y1,x2,y2,...,xn,yn].

Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2 * n); // The output vector should have a size of 2*n.

        for (int i = 0; i < n; i++) {
            ans[i * 2] = nums[i]; // Place xi at position i*2 in the ans vector.
            ans[i * 2 + 1] = nums[i + n]; // Place yi at position i*2 + 1 in the ans vector.
        }

        return ans;
    }
};
