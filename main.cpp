#include <cstdio>
#include "queue.h"

int main()
{	
	Queue q1(10);
	Queue q2(100);
	
	q1.push(100);
	q1.push(200);
	q1.push(300);
	
	q2.push(700);
	q2.push(800);
	q2.push(900);
	
	printf("1st 1-pop() : %d\n",q1.pop());	
	printf("2st 1-pop() : %d\n",q1.pop());
	printf("3st 1-pop() : %d\n",q1.pop());
	
	printf("1st 2-pop() : %d\n",q2.pop());	
	printf("2st 2-pop() : %d\n",q2.pop());
	printf("3st 2-pop() : %d\n",q2.pop());
	
	return 0;
}
