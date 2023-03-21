class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int comparisonOne = 0;

        int comparisonTwo = 0;
        
        vector<int> result;

        for(int i = 0; i < size(nums); i++){

            for(int i2 = 0; i2 < size(nums); i2++){ 

                if(i != i2){

                    comparisonOne = nums[i];

                    comparisonTwo = nums[i2];

                    if(comparisonOne + comparisonTwo == target){

                        vector<int> result {i, i2};

                        return result;
                    }
                }
            }
        }    
    return result;
    }
};