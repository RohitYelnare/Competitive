#include <stdio.h>

int main(){
	int t, i;
	scanf("%d", &t);
	int* n = (int*)malloc(t*sizeof(int));
	int* p = (int*)malloc(t*sizeof(int));
	int* q = (int*)malloc(t*sizeof(int));
	int* r = (int*)malloc(t*sizeof(int));
	int* flights = (int*)malloc(t*sizeof(int));
	for(i=0; i<t; i++){
		scanf("%d %d %d %d", &n[i],&p[i],&q[i],&r[i]);
	}
	int j,count, takeoffs;
	for(i=0; i<t; i++){
		takeoffs=0;
		for(j=1; j<=n[i]; j++){
			count=0;
			if(j%p[i]==0){
				count++;
			}
			if(j%q[i]==0){
				count++;
			}
			if(j%r[i]==0){
				count++;
			}
			if(count==1){
				takeoffs++;
				flights[i]=takeoffs;
			}
		}
	}
	for(i=0; i<t; i++){
		printf("%d\n", flights[i]);
	}
}
