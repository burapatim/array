#include<stdio.h>

void cal() {
	int count;
	int n;
	char num[27] = { "abcdefghigklmnopqrstuvwxyz" };
	
	printf("length of your name : ");
	scanf_s("%d", &count);
	char name[100];
	for (int i = 1; i <= count;i++) {
		
		printf("Alphabet Position %d : ",i);
		scanf_s("%d",&n);
		printf("%c\n", num[n-1]);
		name[i] = num[n - 1];
		
	}
	printf("your name is : ");
	for (int ii = 1;ii <= count;ii++ ) {
		printf("%c", name[ii]);
	}
}
int main(){
	cal();
}