class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for (int i=0; i<size;i++){
            bool found = binary_search(nums.begin(), nums.end(), i+1);
            if (!found){
                result.push_back(i+1);
            } 
        }
        return result;
    }
};