#include <algorithm>
#include <iostream>
#include <stdio.h>

class MinHeap{
	public: 
		MinHeap();
		~MinHeap();
		void insert(int val);
		int del();
		void swap(int *a,int *b);
	private:
		int * heap;
		int cur;		
		void adjustup();
		void adjustdown(int idx);
};

 void MinHeap::swap(int *a,int *b)
 {
      int temp;
      temp=*a;
      *a=*b;
      *b=temp;
 }

MinHeap::MinHeap()
{
	heap = new int[20];
	cur = 0;
}
MinHeap::~MinHeap()
{
	delete[] heap;
}

void MinHeap::insert(int val)
{
	heap[++cur] = val;
	adjustup();
}
int MinHeap::del()
{
	int min = heap[1];
	heap[1] = heap[cur--];
	adjustdown(1);
	return min; 	
}

void MinHeap::adjustup(){
	int idx = cur;
	int pidx = cur/2;
	while (pidx > 0 && heap[idx] < heap[pidx]){
		swap(&heap[idx],&heap[pidx]);
		idx = pidx;
		pidx = pidx/2; 
	}	
}

void MinHeap::adjustdown(int idx){
	
	if (idx > cur)
		return;
	int idxl = idx * 2;
	int idxr = idx * 2 + 1;
	
	int minidx = 0;
	if ( idxl> cur) 
		return;
 	else if(idxr > cur)
 		minidx = idxl;
 	else 
	 	minidx = heap[idxl] < heap[idxr] ? idxl : idxr;
	if (heap[idx] > heap[minidx])
	{
		swap(&heap[idx] ,&heap[minidx]);
		adjustdown(minidx);
	}
	else 
		return;		 	
}
int main(){
	int i;
	int a[] = {5,1,4,2,3};
	int len = sizeof(a) / sizeof(a[0]);
	
	MinHeap * heap = new MinHeap();
	for (i = 0; i < len; i++);
		heap->insert(a[i]);
	
	for (i = 0; i < len; i++); {
		//cout << heap->del(i) <<" ";
	}
		
	//cout << endl;
	
	return 0;
}

