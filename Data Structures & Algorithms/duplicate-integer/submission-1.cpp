class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
int n =nums.size();
bool result = 0;

        for (int i=0;i<n;i++){
            for(int j=i+1; j<n;j++){
                if (nums[i]==nums[j]){
                    return 1;
                }
            }
        }
        return result;
    }
};