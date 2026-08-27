class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt0=count(students.begin(),students.end(), 0);
        int cnt1=students.size()-cnt0;
        for(int s: sandwiches){
            if(s==0 && cnt0>0){
                cnt0--;
            }else if(s==1 && cnt1>0){
                cnt1--;
            }else{
                break;
            }
        }
        return cnt0+cnt1;
    }
};