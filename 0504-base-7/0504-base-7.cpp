class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0){
            return "0";
        }
        bool neg = num<0;
        long long n =  num;
        if(neg){
            n=-n;
        }
        string ans = "";
        while(n>0){
            int rem = n%7;
            ans += to_string(rem);
            n /= 7;
        }
        reverse(ans.begin(), ans.end());
        if(neg){
            ans = "-"+ans;
        }
        return ans;
    }
};