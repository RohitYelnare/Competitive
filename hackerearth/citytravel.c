#include <stdio.h>
void swap(int* p, int*q);
int main(){
	int i,j,s,x,n,index=0,days=0;
	scanf("%d %d %d", &s, &x, &n);
	int* t = (int*)malloc(n*sizeof(int));
	int* y = (int*)malloc(n*sizeof(int));
	for(i=0; i<n; i++){
		scanf("%d", &t[i]);
		scanf("%d", &y[i]);
	}
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1; j++){
			if(t[j]>t[j+1]){
				swap(&t[j],&t[j+1]);
				swap(&y[j],&y[j+1]);
			}
		}
	}
	int tmp=s;
	while(tmp>0){
		if(t[index]==(days+1)){
			tmp-=y[index];
			days++;
			index++;
		}
		else{
			tmp-=x;
			days++;
		}
	}
	printf("%d", days);
}
void swap(int* p, int*q){
	int tmp = *p;
	*p = *q;
	*q = tmp;
}
