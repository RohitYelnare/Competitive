#include <stdio.h>
int calcsum(int* arr, int len, int index);

int main(){
	int i,j,len,max=-100,tmp;
	scanf("%d", &len);
	int* arr = (int*)malloc(len*sizeof(int));
	for(i=0; i<len; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<len; i++){
		tmp = calcsum(arr, len, i);
		if(max<tmp){
			max = tmp;
		}
	}
	printf("%d", max);
}
int calcsum(int* arr, int len, int index){
	int i,tmp=1,terms=0,sum=0;

	while(terms<(len-index-terms)){

		for(i=index+terms; i<index+terms+tmp; i++){
			sum+=arr[i];
		}
		terms+=tmp;
		tmp++;
	}
	return sum;
}
