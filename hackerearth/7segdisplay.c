#include <stdio.h>

long sticks(long num);
int main(){
	long i,j,tmp,tests;
	scanf("%d", &tests);
	long* arr = (long*)malloc(tests*sizeof(long));
	for(i=0; i<tests; i++){
		scanf("%ld", &arr[i]);
	}
	for(i=0; i<tests; i++){
		tmp = sticks(arr[i]);
		if(tmp%2==0){
			tmp/=2;
			for(j=0; j<tmp; j++){
				printf("1");
			}
		}
		else{
			printf("7");
			tmp-=3;
			tmp/=2;
			for(j=0; j<tmp; j++){
				printf("1");
			}
		}
		printf("\n");
	}
	
}

long sticks(long num){
	long total=0,d;
	
	do{
		d = num%10;
		switch(d){
			case 0:
				total+=6;
				break;
			case 1:
				total+=2;
				break;
			case 2:
				total+=5;
				break;
			case 3:
				total+=5;
				break;
			case 4:
				total+=4;
				break;
			case 5:
				total+=5;
				break;
			case 6:
				total+=6;
				break;
			case 7:
				total+=3;
				break;
			case 8:
				total+=7;
				break;
			case 9:
				total+=6;
				break;
		}
		num=num/10;
	}while(num>0);
	return total;
}
