class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pst;
        vector<int> ngt;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                pst.push_back(nums[i]);
            }else if(nums[i]<0){
                ngt.push_back(nums[i]);
            }
        }
        for(int i=0;i<n/2;i++){
            nums[2*i]=pst[i];
            nums[(2*i)+1]=ngt[i];
        }
        
        return nums;
    }
};