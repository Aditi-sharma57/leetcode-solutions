class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        for(int i =0; i<digits.size(); i++){
            for(int j =0 ; j<digits.size(); j++){
                for(int k =0; k<digits.size(); k++){
                    if(i != j && j != k && i != k && digits[i] != 0) {
                        int num = digits[i]*100 + digits[j]*10 + digits[k];
                        if(num %2 == 0){
                            ans.push_back(num);
                        }
                    }
                }
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};