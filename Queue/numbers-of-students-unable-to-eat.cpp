class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        stack<int> sand;
        int rotations = 0;
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }

        for(int i=sandwiches.size()-1;i>=0;i--){
            sand.push(sandwiches[i]);
        }

        while(!q.empty() && !sand.empty()){
            if(q.front() == sand.top()){
                q.pop();
                sand.pop();
                rotations=0;
            }

            else{
                int back = q.front();
                q.pop();
                q.push(back);
                rotations++;
                if(rotations == q.size()){
                    break;
                }
            }
        }
        return q.size();
    }
};
