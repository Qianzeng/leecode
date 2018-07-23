#include <stdio.h>
#include <queue>

class Mystack {
	public: 
		Mystack(){
		}
		void push(int x){			
			std::queue<int> tmp_data;
			tmp_data.push(x);
			while(!_data.empty()){
				tmp_data.push(_data.front());
				_data.pop();
			}
			while(!tmp_data.empty()){
				_data.push(tmp_data.front());
				tmp_data.pop();
			}			
		}		
		int pop(){
			int x = _data.front();
			_data.pop();
			return x;				
		}
		bool empty(){
			return _data.empty();		
		}
		int size(){			
			return _data.size();
		}
	private:
		std::queue<int> _data;	

};




