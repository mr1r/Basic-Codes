//evaluating XOR operation

#include <stdio.h>

int bitXor(int x,int y){
	int a, b, result;
	a = x & y;   //AND
	b = ~x & ~y;  //NOR
	result = ~a & ~b;  //NOR
	
	return result;
	}

int main()
{
	int x, y, result;
	
	while(scanf("%d %d", &x, &y)==2){
	result = bitXor(x,y);
	
	printf("%d\n", result);
	}
	
	
	return 0;
}
