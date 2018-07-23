#include <stdio.h>
#include <stack>

class Myqueue {
	public: 
		Myqueue(){
		}
		void push(int x){			
			std::stack<int> tmp_data;
			while(!_data.empty()){
				tmp_data.push(_data.top());
				_data.pop();
			}
			tmp_data.push(x);
			while(!tmp_data.empty()){
				_data.push(tmp_data.top());
				tmp_data.pop();
			}			
		}		
		int pop(){
			int x = _data.top();
			_data.pop();
			return x;				
		}
		int frt(){			
			return _data.top();		
		}
		bool empty(){
			return _data.empty();		
		}
		int size(){			
			return _data.size();
		}
	private:
		std::stack<int> _data;	

};




