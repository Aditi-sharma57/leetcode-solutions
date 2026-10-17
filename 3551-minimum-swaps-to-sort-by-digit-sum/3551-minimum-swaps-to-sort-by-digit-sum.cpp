class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int count = 0;
        vector<tuple<int, int, int>>s;
        vector<int> ans(nums.size());
        for(int i = 0; i<nums.size(); i++){
            int num = nums[i];
            int sum = 0;
            while(num>0){
                sum = sum + num % 10;
                num=num/10;
            }
            s.push_back({sum, nums[i], i});
        }
        sort(s.begin(), s.end());
        vector<int> pos(nums.size());
    for(int i = 0; i<nums.size(); i++){
        pos[get<2>(s[i])]=i;
    }
    vector<bool> visit(nums.size(), false);
    for(int i = 0; i<nums.size(); i++){
        if(visit[i]||pos[i]==i){
            continue;
        }
        int j = i;
        int cycle =0;
        while(!visit[j]){
            visit[j]=true;
            j=pos[j];
            cycle++;
        }
            count += cycle -1;
    }
    return count;
}
};