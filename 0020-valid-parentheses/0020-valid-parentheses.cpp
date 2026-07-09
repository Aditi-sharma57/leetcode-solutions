class Solution {
public:
    bool isValid(string s) {
        stack <char> brackets;
        for(char ch : s){
            if(ch=='('||ch=='['||ch=='{'){
                brackets.push(ch);
            }
            else{
                if(brackets.empty()){
                    return false;
                }
                char open = brackets.top();
                brackets.pop();
                if(ch==')' && open != '('){
                    return false;
                }
                if(ch==']' && open != '['){
                    return false;
                }
                if(ch=='}' && open !='{'){
                    return false;
                }
            }
        }
        return brackets.empty();
    }
};