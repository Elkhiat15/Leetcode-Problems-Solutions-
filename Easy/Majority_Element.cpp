class Solution {
public:
    int majorityElement(vector<int>& v) {
// sort the array and return the median
        sort(v.begin(), v.end());
        return v[v.size()/2];
    }
};