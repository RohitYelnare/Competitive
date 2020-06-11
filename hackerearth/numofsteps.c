#include <stdio.h>

int main(){
	long i,num,min=10000,count=0;
	scanf("%ld", &num);
	long* a = (long*)malloc(num*sizeof(long));
	long* b = (long*)malloc(num*sizeof(long));
	for(i=0; i<num; i++){
		scanf("%ld", &a[i]);
	}
	for(i=0; i<num; i++){
		scanf("%ld", &b[i]);
	}
	for(i=0; i<num; i++){
		if(min>a[i]){
			min = a[i];
		}
	}
	for(i=0; i<num; i++){
		if((a[i]-min)%b[i]!=0){
			printf("-1");
			return 0;
		}
		else{
			count += (a[i]-min)/b[i];
		}
	}
	printf("%ld", count);

}
