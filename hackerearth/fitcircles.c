#include <stdio.h>

int main(){
	int i,t;
	scanf("%d", &t);
	int* a = (int*)malloc(t*sizeof(int));
	int* b = (int*)malloc(t*sizeof(int));
	for(i=0; i<t; i++){
		scanf("%d %d", &a[i], &b[i]);
	}
	int count;
	for(i=0; i<t; i++){
		if(a[i]>=b[i])
		count = a[i]/b[i];
		else
		count = b[i]/a[i];
		printf("%d\n", count);
	}
}
