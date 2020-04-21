#include <stdio.h>

int main(){
	int num,i,j;
	scanf("%d", &num);
	int* marks = (int*)malloc(num*sizeof(int));
	for(i=0; i<num; i++){
		scanf("%d", &marks[i]);
	}
	for(i=0; i<num; i++){
		for(j=i; j<num; j++){
			if(marks[i]<marks[j])
			break;
			if(j==(num-1))
			printf("%d ", marks[i]);
		}
	}
}
