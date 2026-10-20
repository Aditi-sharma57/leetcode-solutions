class Solution {
public:
    string reverseVowels(string s) {
        int i =0;
        int j =s.size()-1;
        string vowel = "aeiouAEIOU";
        while(i<j){
            while(i<j && vowel.find(s[i]) == string::npos){
                i++;
            }
            while(i<j && vowel.find(s[j])==string::npos){
                j--;
            }
            if(i<j){
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};