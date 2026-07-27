class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = INT_MIN;
        int seclargest = INT_MIN;
        for(int i = 0 ; i< nums.size(); i++){
            if(nums[i]>largest){
                seclargest = largest;
                largest = nums[i];
            }
            else if(nums[i]>seclargest){
                seclargest = nums[i];
            }
        }
        return (largest - 1)*(seclargest -1);
    }
};