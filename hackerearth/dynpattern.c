#include <stdio.h>

int main(){
	int i,j,k,l,t;
	scanf("%d", &t);
	int* list = (int*)malloc(t*sizeof(int));
	for(i=0; i<t; i++){
		scanf("%d", &list[i]);
	}
	for(i=0; i<t; i++){
		for(j=0; j<list[i]; j++){
			for(k=0; k<=j; k++){
				printf("*");
			}
			for(l=0; l<2*(list[i]-j-1); l++){
				printf("#");
			}
			for(k=0; k<=j; k++){
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}
}
