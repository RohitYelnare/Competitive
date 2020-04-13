#include<stdio.h>

int chkprop(int n){
	int i, num_of_factors=0;
	int factors[n];
	for(i=1; i<n; i++){
		if(n%i==0){
			factors[num_of_factors]=i;
			num_of_factors++;
		}
	}
	int j,k,l, prod, max=0;
	for(i=0; i<num_of_factors; i++){
		for(j=0; j<num_of_factors; j++){
			for(k=0; k<num_of_factors; k++){
				for(l=0; l<num_of_factors; l++){
					if(n==(factors[i]+factors[j]+factors[k]+factors[l])){
						prod=factors[i]*factors[j]*factors[k]*factors[l];
					}
					else
					continue;
					if(prod>max){
						max=prod;
					}
				}
			}
		}
	}
	return max;
}

int main(){
	int i,queries;
	scanf("%d", &queries);
	int* arr_queries = (int*)malloc(queries*sizeof(int));
	for(i=0; i<queries; i++){
		scanf("%d", &arr_queries[i]);
	}
	int tmp;
	for(i=0; i<queries; i++){
		if(chkprop(arr_queries[i])==0)
			printf("-1\n");
		else{
			printf("%d\n", chkprop(arr_queries[i]));
		}
	}
}
