#include <stdio.h>

int main(){
	int i,j,t;
	scanf("%d", &t);
	int sides = (int*)malloc(t*sizeof(int));
	int lengths[1000][1000];
	for(i=0; i<t; i++){
		scanf("%d",&sides[i]);
		for(j=0; j<sides[i]; j++){
			scanf("%d", &lengths[i][j]);
		}
	}
	int l,max,sum;
	for(i=0; i<t; i++){
		sum=0;
		max=0;
		for(j=0; j<sides[i]; j++){
			l=lengths[i][j];
			sum+=l;
			if(max<l)
			max=l;
		}
		if(sum>2*max)
		printf("Yes\n");
		else
		printf("No\n");
	}
}
