class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> stack;
        int i=0;
        while(i<s.size()){
            stack.push(s[i++]);
        }
        i=0;
        while(stack.size()!=0){
            s[i] = stack.top();
            stack.pop();
            i++;
        }
        return;
    }
};
