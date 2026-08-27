class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int area=0,greatest=0;
        int size=heights.size();
        for(int i=0;i<size;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int popped=st.top();
                st.pop();
                int newTop=st.empty()?-1:st.top();
                int poppedHeight=heights[popped];
                area=poppedHeight*(i-newTop-1);
                if(area>greatest){
                    greatest=area;
                }
            }
            
            st.push(i);
        }
        while(!st.empty()){
            int popped=st.top();
            st.pop();
            int newTop=st.empty()?-1:st.top();
            int poppedHeight=heights[popped];
            area=poppedHeight*(size-newTop-1);
            if(area>greatest){
                greatest=area;
            }
        }

        
        return greatest;
    }
};