class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size = nums.size();
        vector<int> result(size);
        for(int i = 0; i<size;i++){
            int temp = 0;
            for(int j = 0; j<size; j++){
                if(j!=i && nums[j]<nums[i]){
                    temp += 1;
                }
            }
            result[i]=temp;
        }
        return result;
        }
        
    };