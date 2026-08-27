class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        int p = target.back();
        int j = 0;
        for(int i = 1; i<=p;i++){
            result.push_back("Push");
            if(i != target[j]){
                result.push_back("Pop");
            }
            else{
                j++;
            }
            }
        return result; 
        }
};