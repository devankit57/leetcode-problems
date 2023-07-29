class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int highest=0;
        int s=accounts.size();
        int c=accounts[0].size();
        

        for(int i=0;i<s;i++){
            int sum=0;
            for(int j=0;j<c;j++){
                sum+=accounts[i][j];

            }
            if(sum>highest){
                highest=sum;
            }
        }
        return highest;
        
    }
};
