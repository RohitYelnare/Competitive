#include <stdio.h>

int main(){
	int i,j,tests,count,tmp;
	scanf("%d", &tests);
	int* arr = (int*)malloc(tests*sizeof(int));
	for(i=0; i<tests; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<tests; i++){
		count = 0;
		tmp = arr[i];
		while(tmp){
			if(tmp%2==0){
				tmp/=2;
			}
			else{
				tmp-=1;
				count++;
			}
		}
		printf("%d\n", count);
	}

}
