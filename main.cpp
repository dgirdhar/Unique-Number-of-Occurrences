class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        bool ret = true;
        unordered_map<int, int> tempMap;
        int tempArr[1000] = {0};
        
        for (int i = 0; i < arr.size(); ++i) {
            tempMap[arr[i]]++;
        }
        
        unordered_map<int, int>::iterator iter = tempMap.begin();
        unordered_map<int, int>::iterator endIter = tempMap.end();
        
        for (; iter != endIter; ++iter) {
            if (tempArr[iter->second] != 0) {
                ret = false;
                break;
            }
            else {
                tempArr[iter->second] = 1;
            }            
        }

        return ret;
    }
};
