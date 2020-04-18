#include <stdio.h>

int main(){
	int i,num;
	scanf("%d", &num);
	int* queue = (int*)malloc(num*sizeof(int));
	for(i=0; i<num; i++){
		scanf("%d", &queue[i]);
	}
	int count=0;
	for(i=0; i<num; i++){
		if(queue[i+1]<queue[i])
		count++;
	}
	printf("%d", count);
}


