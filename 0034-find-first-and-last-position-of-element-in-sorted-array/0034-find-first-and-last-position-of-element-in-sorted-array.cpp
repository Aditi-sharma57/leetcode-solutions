class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans1;
        vector<int>ans2;
        int low=0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low + high)/2;
            if(nums[mid]==target){
                ans1.push_back(mid);
                high = mid-1;
            }
            else if(nums[mid]<target)
            low= mid+1;
            else
            high = mid-1;
        }
        low =0;
        high= nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                ans2.push_back(mid);
                low= mid+1;
            }
            else if(nums[mid]<target)
            low=mid+1;
            else
            high = mid-1;
        }
        if(ans1.empty())
        return {-1, -1};
        return {ans1.back(), ans2.back()};
    }
};