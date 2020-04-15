#include <stdio.h>

int main(){
	long t,i,j;
	scanf("%ld", &t);
	long nk[100][2];
	long numlist[100][100];
	for(i=0; i<t; i++){
		scanf("%ld %ld", &nk[i][0],&nk[i][1]);
		for(j=0; j<nk[i][0]; j++){
			scanf("%ld", &numlist[i][j]);
		}
	}
	long min, d;
	for(i=0; i<t; i++){
		min = numlist[i][0];
		for(j=0; j<nk[i][0]; j++){
			d = numlist[i][j];
			if(d<min)
			min=d;
		}
		d = nk[i][1]-min;
		if(min<nk[i][1]){
			printf("%ld\n", d);
		}
		else{
			printf("0\n");
		}
	}
}

