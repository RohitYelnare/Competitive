#include <stdio.h>

int main(){
	int len,num_queries,i,j,sum;
	scanf("%d %d", &len, &num_queries);
	int* arr = (int*)malloc(len*sizeof(int));
	int data[10000][3];
	for(i=0; i<len; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<num_queries; i++){
		for(j=0; j<3; j++){
			scanf("%d", &data[i][j]);
		}
	}
	for(i=0; i<num_queries; i++){
			if(data[i][0]==1){
				sum=data[i][1];
				arr[sum] = data[i][2];
			}
			else if(data[i][0]==2){
				sum=0;
				for(j=data[i][1]; j<=data[i][2]; j++){
					sum+=arr[j];
				}
				printf("%d\n", sum);
			}
	}
}
