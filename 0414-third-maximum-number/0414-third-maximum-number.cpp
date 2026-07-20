class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long largest  = LLONG_MIN;
        long long seclarg = LLONG_MIN;
        long long thirdlarg = LLONG_MIN;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==largest || nums[i]==seclarg || nums[i]==thirdlarg)
            continue;
            if(nums[i] > largest){
                thirdlarg = seclarg;
                seclarg = largest;
                largest = nums[i];
            }
            else if(nums[i]<largest && nums[i]>seclarg){
                thirdlarg = seclarg;
                seclarg = nums[i];
            }
            else if(nums[i]<seclarg && nums[i]>thirdlarg){
                thirdlarg = nums[i];
            }
            
        }
        if(thirdlarg == LLONG_MIN)
        return largest;
        return  thirdlarg;
    }
};