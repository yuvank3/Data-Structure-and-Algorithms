class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        queue<int> q;
        for (int i = 0; i < tickets.size(); i++) {
            q.push(i);
        }

        while (tickets[k] != 0) {
            if (tickets[q.front()] == 0) {
                q.pop();
            }

            else {
                tickets[q.front()] = tickets[q.front()] - 1;
                time++;
                int store = q.front();
                q.pop();
                q.push(store);
            }
        }
        return time;
    }
};