class Solution {
public:
// value of (nums[i] AND (nums[i] XOR x)) can't be greater than nums[i] max to max it will be //
// nums[i] //
// AND operation can only allow a 1 to be 0 but not a 0 to become 1.
// XOR of elements is maximised by getting distinct combination of a 0 and 1.
// So bascially in the answer you get a 0 where all numbers in array have the bit place values 0, as 
// there is no way to make it into a 1 .
// Rest can be made into a 1, as atleast one number in the array has a bit place value 1.
// And obviously you can check if atleast one of the element has a place value 1 by doing a cumulative OR.
    int maximumXOR(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++) {
            result |= nums[i];
        }
        return result;
    }
};