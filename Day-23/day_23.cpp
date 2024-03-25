class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> freqMap;
    vector<int> duplicates;
    
    // Count frequencies of each number
    for (int num : nums) {
        freqMap[num]++;
    }
    
    // Find duplicates
    for (const auto& pair : freqMap) {
        if (pair.second > 1) {
            duplicates.push_back(pair.first);
        }
    }
    
    return duplicates;
    }
};