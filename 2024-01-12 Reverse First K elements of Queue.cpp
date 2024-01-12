class Solution {
  public:
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        queue<int> nq;
        stack<int> s;
        while (k--) {
            s.push(q.front());
            q.pop();
        }
        while (!s.empty()) {
            nq.push(s.top());
            s.pop();
        }
        while (!q.empty()) {
            nq.push(q.front());
            q.pop();
        }
        return nq;
    }
};
