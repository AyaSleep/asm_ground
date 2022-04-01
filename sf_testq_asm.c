#include <stdio.h>

int cmp(int x,int y);

int main(){
	printf("%d\n",cmp(-3,3));
}

asm(
		"cmp:;"
		"	pushq %rbp;"
		"	movq %rsp, %rbp;"
		"	xorq %rax, %rax;"
		"	addw %di, %si;"
		"	setc %al;"
		"	movq %rbp, %rsp;"
		"	popq %rbp;"
		"	retq"
   );
