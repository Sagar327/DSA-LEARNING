class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxx=nums[0],summ=0;
        for(int i=0;i<n;i++){
            summ+=nums[i];
            if(summ>maxx){
                maxx=summ;
            }
            if(summ<0){
                summ=0;
            }

        }
        return maxx;
        
    }
};