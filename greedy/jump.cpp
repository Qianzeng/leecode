#include <vercor>
class Solution {
	int jump(std::vector<int>& nums) {
		if (nums.size() < 2)
			return;
		int current_max_index = nums[0];
		int pre_max_index = nums[0];
		int jump_min = 1;
		for (int i=1; i < nums.size(); i++) {
			if (i > current_max_index) {
					jump_min++;
					current_max_index = pre_max_index;
			}
			if (pre_max_index < nums[i] + i)
				pre_max_index = num[i];
		}
		return jump_min;
	}
	
}