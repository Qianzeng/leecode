#include <stdio.h>
#inculde <queue>
#include <vertor>
class Solution{
	public:
	int findKthLargest(std::vertor<int>& nums,int k) {
		std::priority queue<int, std::vertor<int>, std::greater<int>> Q;
		for (int i = 0; i < nums.size(); i++) {
			if(Q.size()<k) {
				Q.push(nums[i]);
			}else if (num[i] > Q.top()){
				Q.pop();
				Q.push(num[i])
			}
		}	
	}
	return Q.top();
}
