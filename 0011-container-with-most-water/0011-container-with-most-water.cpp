class Solution {
public:
    int maxArea(vector<int>& height) {
        int width;
        int h ;
        int area;
        int left = 0;
        int right = height.size() - 1;
        int maxi = 0;
        while(left<right){
            width = right - left ;
            h = min(height[left], height[right]);
            area = width * h;
            maxi = max(maxi, area);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxi;
    }
};