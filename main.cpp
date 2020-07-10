class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        bool ret = true;
        unordered_map<int, int> tempMap;
        unordered_map<int, int> revereseTempMap;
        
        for (int i = 0; i < arr.size(); ++i) {
            tempMap[arr[i]]++;
        }
        
        unordered_map<int, int>::iterator iter = tempMap.begin();
        unordered_map<int, int>::iterator endIter = tempMap.end();
        
        for (; iter != endIter; ++iter) {
            if (revereseTempMap[iter->second] != 0) {
                ret = false;
                break;
            }
            else {
                revereseTempMap[iter->second] = 1;
            }            
        }

        return ret;
    }
};
