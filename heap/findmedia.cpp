#include <stdio.h>

class MedianFinder {
	public :
		std::priority queue<int, std::vertor<int>, std::greater<int>> small;
		std::priority queue<int, std::vertor<int>, std::less<int>> big;
		MedianFinder() {
		}
		void addNum(int num){
			if(big.empty()) {
				big.push(num);
				return;
			}
			if(big.size() == small.size()) {
				if(num < biq.top())
					big.push(num);
				else
					small.push(num);
			}
			else if (big.size() > small.size()) {
				if(num > biq.top())
					small.push(num);
				else {
					small.push(big.top);
					big.pop();
                    big.push(num);
				}		
			}
			else if (big.size() < small.size()) {
				if(num < small.top())
					big.push(num);
				else {
					big.push(small.top);
					snall.pop();
                    small.push(num);
				}		
			}
		}
		double findMedian() {
			if (big.size()== small.size()){
				return (big.top()+ small.top())/2;
			}
			else if (big.size()> small.size()){
				return big.top();
			}
			else if (big.size()< small.size()){
				return small.top();
			}	
		}
}

