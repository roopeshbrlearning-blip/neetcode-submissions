class Solution {
public:
    bool isValid(string s) {
        std::stack<char> brackets;
        for(auto brkt : s){
            if(brkt == '(' || brkt == '{' || brkt == '[')
            {
                brackets.push(brkt);
            }
            else
            {
                if(!brackets.empty()){
                        if(brkt == ')'){
                        if(brackets.top() == '('){
                            brackets.pop();
                        }else return false;
                    }
                    else if(brkt == '}'){
                        if(brackets.top() == '{'){
                            brackets.pop();
                        }else return false;
                    }
                    else if(brkt == ']'){
                        if(brackets.top() == '['){
                            brackets.pop();
                        }else return false;
                    }

                }else return false;

            }
        }

        return brackets.empty();
    }
};
