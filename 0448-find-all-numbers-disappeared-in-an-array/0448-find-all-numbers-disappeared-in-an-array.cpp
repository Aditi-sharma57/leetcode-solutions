class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int range=nums.size();
        vector<int>answer;
       vector<bool>found(range+1, false);
       for(int i =0; i<nums.size(); i++){
        found[nums[i]]=true;
       }
       for(int i =1; i<=range; i++){
        if(found[i]==false){
            answer.push_back(i);
        }
       }
        return answer;
    }
};