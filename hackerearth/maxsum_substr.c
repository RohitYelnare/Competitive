#include <stdio.h>

int main(){
	long i,num;
	scanf("%ld", &num);
	long* n= (long*)malloc(num*sizeof(long));
	for(i=0; i<num; i++){
		scanf("%ld", &n[i]);
	}
	long sum=0, count=0;
	for(i=0; i<num; i++){
		if(n[i]>=0){
			sum+=n[i];
			count++;
		}
	}
	printf("%ld %ld", sum, count);
}
