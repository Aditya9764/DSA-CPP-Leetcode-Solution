class Solution {
public:
    // 1-> Find the breakpt
    // 2-> If not found than just reverse the array and return it
    // 3-> Now found the least greater element from breakpt element in b/w n-1 to breakpt
    // 4-> Now just swap the breakpt and leastGreater element
    // 5-> now reverse the part of array from breakpt+1 to n
    // 6-> Now array has next permutation & DRY RUN IT 
    void nextPermutation(vector<int>& nums) {
        // Find the breakPoint  = means from back of array the element is lesser than i+1 element
        // That index will be our breakPoint
        int breakpt = -1;
        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                breakpt = i;
                break;
            }
        }
        // if we didn't have found the breakpt means nums was last permutation then by reverse it we get the 
        // first permutation
        // Means given input was last permutation so reverse it to get the first permutation
        if(breakpt == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        // Now find the least greater element index than breakpt
        for(int i = nums.size()-1; i > breakpt; i--){
            if(nums[i] > nums[breakpt]){
                swap(nums[breakpt], nums[i]);
                break;
            }
        }

        // Now swap the "breakpt" with "leastGreater"
        // swap(nums[breakpt], nums[leastGreater]);

        // Now reverse the array from breakpt+1 to n
        reverse(nums.begin()+breakpt+1, nums.end());

    }
};