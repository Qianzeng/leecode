#include <stdio.h>
#include <stack.h>

int main() {
	/* stack
	std::stack<int> s;
	if (s.empty()) {
		printf("s is empty");
	}
	s.push(1);
	s.push(2);
	s.push(3);
	
    printf("s top %d\r\n",s.top());
	
	s.pop();
	printf("s pop %d\r\n",s.top());
	printf("s size %d\r\n",s.size());
	*/
	std::queue<int> q;
	if (q.empty()) {
		printf("q is empty");
	}
	q.push(1);
	q.push(2);
	q.push(3);
     
    printf("q front is %d\r\n",q.front());
    printf("q back is %d\r\n",q.back());
    printf("q size is %d\r\n",q.size());
    q.pop();
    
    printf("q front is %d\r\n",q.front());
    printf("q back is %d\r\n",q.back());
    printf("q size is %d\r\n",q.size());
	return 0;
}
