#include<vector>
#include<map>
#include<algorithm>
using namespace std;

// 1.双指针
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0,j = 0;
        while(i < nums.size()){
            if(nums[i] == val){
                j++;
            }else{
                nums[i - j] = nums[i];
            }
            i++;
        }
        return i - j;
    }
};