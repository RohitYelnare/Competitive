#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j,k,tests,count,tmp;
	scanf("%d", &tests);
	int* arr = (int*)malloc(tests*sizeof(int));
	for(i=0; i<tests; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<tests; i++){
		count=0;
		for(j=1; j<arr[i]; j++){
			for(k=j+1; k<=arr[i]; k++){
				tmp = j^k;
				if(tmp<=arr[i]){
					printf("(%d,%d)", j,k);
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	free(arr);
}
