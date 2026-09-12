class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int> s1;
        stack <int> s2;
        for(int i=0;i<=s.size()-1;i++){
            if(s[i] == '#'){
                if(!s1.empty()){
                    s1.pop();
                }
            }

            else{
                s1.push(s[i]);
            }
        }

        
        for(int i=0;i<=t.size()-1;i++){
            if(t[i] == '#'){
               if(!s2.empty()){
                    s2.pop();
                }
            }

            else{
                s2.push(t[i]);
            }
        }

        while(s1.size()>0 && s2.size()>0){
            if(s1.top() == s2.top()){
                s1.pop();
                s2.pop();
            }

            else{
                return false;
            }
        }
    
    if(s1.empty() && s2.empty()){
        return true;
    }

    return false;

    
    
    
    }
};
