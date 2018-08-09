#include <vertor>
bool binarysearch(std::vector<int> &sortarry,int begin,int end, int target){
 int begin = 0;
 int end = 	sortarry.size()-1;
 while(begin <= end) {
 	int mid = (begin + end)/2
 	if (target == sortarry[mid])
 		return true;
 	else if (target < sortarry[mid])
	 	end = mid -1;
	else if (target < sortarry[mid])
		begin = mid + 1;	 	
 	}
	return false;
}