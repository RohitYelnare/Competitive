#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	int* arr = (int*)malloc(num*sizeof(int));
	int i,min=100,sum=0,t;
	
	for(i=0; i<num; i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<num; i++){
		sum+=arr[i];	
	}
	
	for(i=0; i<num; i++){
		if((sum-arr[i])%7==0){
			t = arr[i];
			if(min>t)
			min=t;
		}
	}
	printf("%d", min);
	if(min==100)
	printf("-1");
	else{
		for(t=0; t<num; t++){
			if(min==arr[t]){
				printf("%d", i);
				break;
			}
		}
	}
}

