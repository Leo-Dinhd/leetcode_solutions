class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int size = arr.size();
        int diff = arr[1] - arr[0];
        for(int i=1;i<size;i++){
            int temp = arr[i] - arr[i-1];
            if(diff != temp){
                return false;
            }

        }
        return true;
    }
};