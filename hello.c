#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	printf("Welcome to this program!\n");
	for (int i = 0; i < n; i++){
		printf("%d - ", i);
		printf("Hello, World!\n");
	}
	return 0;
}
