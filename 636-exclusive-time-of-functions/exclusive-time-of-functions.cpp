class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> result(n, 0);
        stack<int> container;
        int prevTime = 0;
        for(const string& log : logs){
            stringstream ss(log);
            string idPart, statusPart, timePart;
            getline(ss, idPart, ':');
            getline(ss,statusPart, ':');
            getline(ss, timePart, ':');

            int id = stoi(idPart);
            int time = stoi(timePart);

            if(statusPart == "start"){
                if(!container.empty()){
                    result[container.top()] += time-prevTime;
                }
                container.push(id);
                prevTime=time;
            }
            else{
                result[container.top()] += time-prevTime + 1;
                container.pop();
                prevTime = time + 1;
            }
            
        }
        return result;
    }
};