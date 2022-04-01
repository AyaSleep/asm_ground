#include <stdio.h>

int sum(int val_1,int val_2);

int main(){
	int i1=40;int i2=60;
	printf("%d + %d = %d\n",i1,i2,sum(i1,i2));

	return 0;
}

asm(
	"sum:;"
	"	pushq %rbp;"
	"	movq %rsp, %rbp;"
	"	leaq (%rdi,%rsi), %rax;"
	"	movq %rbp, %rsp;"
	"	popq %rbp;"
	"	retq"
   );

/* replaced movq %rdi, %rax; addq %rsi, %rax; --> leaq (%rdi,%rsi), %rax;*/
