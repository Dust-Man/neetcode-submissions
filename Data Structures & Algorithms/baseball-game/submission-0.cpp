class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        for(int i = 0; i < operations.size(); i++){
            int last = record.size() - 1;
            if(operations[i] == "+"){
                record.push_back(record[last] + record[last-1]);
            }
            else if(operations[i] == "C"){
                record.pop_back();
            }
            else if(operations[i] == "D"){
                record.push_back(record[last] *2);
            } else{
                record.push_back(stoi(operations[i]));
            }
        }
        int sum = 0;
        for(int i = 0; i < record.size(); i++){
            sum+=record[i];
        }
        return sum;
        
    }
};