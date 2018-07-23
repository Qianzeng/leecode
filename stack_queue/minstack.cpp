#include <stdio.h>
#include <stack>

class Minstack {
	public:
		void push(int x) {
			stk.push(x);
			if (minstk.empty())
				minstk.push(x);
			if (x < minstk.top())
				minstk.push(x);
			else
				minstk.push(minstk.top());			
		}
		int top() {
			int x = stk.top();
			return x;
		}
		void pop() {
			minstk.pop();
			stk.pop();	
		}
		int getmin(){
			minstk.top();			
		}
	
	private:
	std::stack<int> stk;
	std::stack<int> minstk;		
};

