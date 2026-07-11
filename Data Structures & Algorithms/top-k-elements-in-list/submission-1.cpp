class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        std::unordered_map<int,int> numCount;
        // std::priority_queue<std::pair<int,int>, std::vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        std::priority_queue<std::pair<int,int>> maxheap;
        std::vector<int> results;

        for(auto num : nums){
            numCount[num] += 1;
        }

        // for(auto [key,value] : numCount){
        //     minHeap.push({value,key});
        //     if(minHeap.size() > k){
        //             minHeap.pop();
        //     }
        // }

        for(auto [key,value] : numCount){
            maxheap.push({value,key});
        }

        for(int i=0; i<k; i++){
            results.push_back(maxheap.top().second);
            maxheap.pop();
        }
        

        return results;
    }
};
