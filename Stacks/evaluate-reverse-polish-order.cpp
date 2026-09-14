class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int result;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+" || tokens[i] == "*" || tokens[i] == "/" ||
                tokens[i] == "-") {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();

                if (tokens[i] == "+") {
                    result = b + a;
                }

                if (tokens[i] == "-") {
                    result = b - a;
                }

                if (tokens[i] == "*") {
                    result = b * a;
                }

                if (tokens[i] == "/") {
                    result = b / a;
                }

                s.push(result);
            }

            else {
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};
