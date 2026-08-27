class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> answer(size, 0);
        stack<int> indices; // stores indices of temperatures, waiting for a warmer day

        for (int i = 0; i < size; i++) {
            while (!indices.empty() && temperatures[i] > temperatures[indices.top()]) {
                int prevIndex = indices.top();
                indices.pop();
                answer[prevIndex] = i - prevIndex;
            }
            indices.push(i);
        }

        return answer;
    }
};