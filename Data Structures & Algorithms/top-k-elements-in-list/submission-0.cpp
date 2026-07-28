#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_map<int, int> hashmap;

        // 1. Count the frequencies of each number
        for(int p = 0; p < n; p++){
            hashmap[nums[p]] += 1;
        }

        vector<int> result; // Vector to store the top k keys

        // 2. Loop k times to find the max frequency each time
        for (int i = 0; i < k; i++) {
            
            // Safety check: break early if the map is empty
            if (hashmap.empty()) {
                break; 
            }

            // Pointer to keep track of the maximum frequency found so far
            auto max_it = hashmap.begin();

            // Iterate through the map to find the largest frequency (VALUE)
            for (auto it = hashmap.begin(); it != hashmap.end(); ++it) {
                if (it->second > max_it->second) {
                    max_it = it;
                }
            }

            // Push the KEY with the largest frequency into our result vector
            result.push_back(max_it->first);

            // Erase the entry so we can find the next largest in the next iteration
            hashmap.erase(max_it);
        }

        // Return the full list of the top k frequent elements
        return result;
    }
};