#include <stdio.h>

struct ListNode {
	int val;
	ListNode *next;	
	ListNode(int x) : val(x), next(NULL) {}
};

ListNode * reverselist(ListNode *head)
{
	ListNode* new_head = NULL;
	
	while(head){
		ListNode* next = head->next;
		head->next     = new_head;
		new_head       = head;
		head           = next;	
	}
	return new_head;
}

ListNode * reverselistbeween(ListNode *head,int m, int n)
{
	int list_len = n-m+1;
	ListNode* new_head = NULL;
	ListNode* next     = NULL;
	ListNode* mod_tail = NULL;
	ListNode* pri  = NULL;
	ListNode* res  = head;
	while(head && --m){
		pri = head;
		head = head->next;
	}
	mod_tail = head;
    
	while(head && list_len){
		next        = head->next;
		head->next  = new_head;
		new_head    = head;
		head        = next;
	    list_len--;	
	}
 	mod_tail->next= head;
 	if(pri) {
 		pri->next = new_head;
 	}else {
        res = new_head;
    }
 	
	return res;
}

ListNode* mergetwolist(ListNode *p1, ListNode *p2)
{
	ListNode head(0),*p;
	p= &head;l
	
	while(p1&&p2)
	{
		if(p1->val > p2->val){
			p->next= p2;
			p2 = p2->next;
		}
		else{
			p->next= p1;
			p1 = p1->next;
		}
		p=p->next;
	}
	if(p1)
		p->next = p1;
	if(p2)
		p->next = p2;
							
	return head.next;
}
ListNode * findnode(ListNode *p1, ListNode *p2)
{
	std::set<ListNode *> node_set;
	while(p1){
		node_set.insert(p1);
		p1=p1->next;
	}	
	while(p2){
		int i=0
		if(node_set.find(p2) != node_set.end())
			return p2;
		p2=p2->next;		
	}
	return NULL;	
}

ListNode * findnode(ListNode *p1, ListNode *p2)
{
	int plen1,plen2,len;
	plen1 = getlen(p1);
	plen2 = getlen(p2);
	
	if (plen1>plen2) {
	  len= plen1-plen2;
	  while(len--)
	  	p1=p1->next;
	}
	else {
      len= plen2-plen1;
   	  while(len--)
	  	p2=p2->next;
	}              
	while(p1&&p2) {
		if(p1=p2)
			return p1;
		p1 = p1->next;
		p2 = p2->next;	
	}  
	return NULL;	
}
ListNode *ringnode(ListNode *head)
{
	std:set<ListNode *> node_set;
	while(head){
		if(node_set.find(head)!=node_set.end())
			return head;
	    node_set.insert(head);		
		head =head->next;	
	}
	return NULL;
}

ListNode *partition(ListNode *head, int x)
{
	ListNode blisthead(0);
	ListNode slisthead(0);
	
	ListNode *blisttmp = blisthead;
	ListNode *slisttmp = slisthead;

	while(head)
	{
		if(head->var > x) {	
			blisttmp->next= head;
			blisttmp = blisttmp->next;
		}
		else {
			slisttmp->next= head;
			slisttmp = slisttmp->next;			
		}
		head = head->next;
	}
	slisttmp->next = blisthead.next;
	blisttmp->next = NULL;
	
	return slisthead.next;
}

int main()
{
	ListNode a(1);
	ListNode b(2);
	ListNode c(3);
	ListNode d(4);
	ListNode e(5);
	ListNode f(6);
	ListNode g(7);
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;
	e.next = &f;
	f.next = &g; 
	ListNode *head= &a;
	ListNode *p   = NULL;
	/*while(head) {
		printf("%d %p %p\n", head->val, head, head->next);
		head = head->next;
	}*/
	
	//p = reverselist(head);
	p = reverselistbeween(head,3,6);
	while(p) {
		printf("%d %p %p\n", p->val, head, p->next);
		p = p->next;
	}
    printf("Qzeng !\n");
    return 0;
}
