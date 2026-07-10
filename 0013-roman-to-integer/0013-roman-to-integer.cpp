class Solution {
public:
    int val(char ch){
        if(ch=='I') return 1;
        if(ch=='V')return 5;
        if(ch=='X') return 10;
        if(ch=='L')return 50;
        if(ch=='C') return 100;
        if(ch=='D') return 500;
        else return 1000;
    }
    int romanToInt(string s) {
        int sum =0;
        for(int i =0; i<s.length(); i++){
            if(i+1<s.length()&&val(s[i])<val(s[i+1])){
                sum -= val(s[i]);
            }
            else{
                sum += val(s[i]);
            }
        }
        return sum;
    }
};