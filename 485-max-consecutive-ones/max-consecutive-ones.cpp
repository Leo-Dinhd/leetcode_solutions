class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current = 0, max =0;
        int size = nums.size();
        for(int i=0;i<size;i++){
            if(nums[i] == 1){
                current += 1;
                if (current > max){
                    max = current;
                }
            }
            else if(nums[i] != 1){
                current = 0;
            }
        }
        return max;
    }
};