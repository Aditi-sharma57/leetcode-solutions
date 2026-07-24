class Solution {
public:
    void merge(vector<int> &nums,  vector<int> & nums1, int lb, int mid, int ub){
        int i =lb; 
        int j =mid+1; 
        int k = lb;
        while(i<=mid && j<=ub){
            if(nums[i]<=nums[j]){
                nums1[k]=nums[i];
                k++;
                i++;
            }
            else{
                nums1[k]=nums[j];
                j++;
                k++;
            }
        }
        if(i>mid){
            while(j<=ub){
                nums1[k]=nums[j];
                j++;
                k++;
            }
        }
        else{
            while(i<=mid){
                nums1[k]=nums[i];
                i++;
                k++;
            }
        }
        for(int k = lb; k<=ub; k++){
            nums[k]=nums1[k];
        }
    }
    void mergesort(vector<int>&nums,vector<int>&nums1, int lb, int ub){
        if(lb<ub){
             int mid=(lb+ub)/2;
            mergesort(nums, nums1, lb, mid);
            mergesort(nums,nums1, mid+1, ub);
            merge(nums, nums1, lb, mid, ub);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        vector<int> nums1(nums.size());
        mergesort(nums, nums1, 0 , nums.size()-1);
        return nums;
    }
};