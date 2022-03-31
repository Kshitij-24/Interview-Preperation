class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> umap;
        unordered_set<int> uset;
        for(int i=0;i<arr.size();i++)
            umap[arr[i]]++;
        int key = umap[arr[0]];
        for(auto i: umap){
            key = i.second;
            uset.insert(key);
        }
        if(umap.size() == uset.size())
        return true;
        return false;
    }
};