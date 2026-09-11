#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main(){
    int arr[5] = {3,1,0,8,6};
    vector<int> ans;
    stack<int> s;
    for(int i=0;i<4;i++){
        while(s.size()!=0 && s.top()>=arr[i]){
            s.pop();
        }

        if(s.empty()) ans.push_back(-1);

        else ans.push_back(s.top());

        s.push(arr[i]);
    }

    for(int i=0;i<=ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}
