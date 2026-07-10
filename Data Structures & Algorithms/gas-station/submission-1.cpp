class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int gasTotal = 0; int costTotal = 0; int start = 0; int total = 0;
        for(int i = 0; i<gas.size(); i++){
            gasTotal += gas[i];
            costTotal += cost[i];
        }

        if(gasTotal < costTotal) return -1;

        for(int i =0; i < gas.size(); i++){

            total += gas[i]-cost[i];

            if(total < 0){
                total = 0;
                start = i+1;
            }
        }
        return start;
        
    }
};
