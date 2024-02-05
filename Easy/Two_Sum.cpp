class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
// use multimap to store the current nubmer with it's index -> check every time if sum - arr[i] exists
      multimap<int, int> HASH;

    int i, j;
    auto it = HASH.end();
    for(i=0;i<nums.size();i++){
        j =nums[i];
        it=HASH.find(j);
        if(it != HASH.end() ){
            break;
        }
        HASH.insert({target-nums[i], i});
    }
    return {it->second , i};
    }
};