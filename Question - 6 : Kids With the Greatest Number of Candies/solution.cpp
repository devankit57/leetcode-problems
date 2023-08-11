class Solution {
public:
    
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int n=candies.size();
        int max=*max_element(candies.begin(),candies.end());
        for(int i=0;i<n;i++){
            int sum=candies[i]+extraCandies;
     
           if (sum>=max){
                    ans.push_back(true);
                }else{
                    ans.push_back(false);
                }
            }
        
        return ans;
    }
};
