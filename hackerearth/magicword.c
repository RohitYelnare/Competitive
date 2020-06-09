#include <stdio.h>
int primechk(int num);
int get(int a, int b, int c); 
int find(int arr[], int n, int target); 
  
int main(){

	int i,j,k,tmp,tmp2,tests;
	scanf("%d", &tests);

	int* arr = (int*)malloc(tests*sizeof(int));
	char str[100][500];

	for(i=0; i<tests; i++){
		scanf("%d", &arr[i]);
		scanf("%s", &str[i][0]);
	}

	int primes[12];
	j=0;
	for(i=65; i<=90; i++){
		if(primechk(i)==1){
			primes[j]=i;
			j++;
		}
	}
	for(i=97; i<=122; i++){
		if(primechk(i)==1){
			primes[j]=i;
			j++;
		}
	}
	

	for(i=0; i<tests; i++){
		for(j=0; j<arr[i]; j++){
			if(str[i][j]<65 ){
				printf("C");
				continue;
			}
			if(str[i][j]>122){
				printf("%c", 113);
				continue;
			}
			if(primechk(str[i][j])==1){
				printf("%c", str[i][j]);
				continue;
			}
			else{
				tmp = find(primes,12,str[i][j]);
				printf("%c", tmp);
			}
		}
		printf("\n");
	}
}

int primechk(int num){
	int i;
	for(i=2; i<=num/2; i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}

int get(int val1, int val2, int target){ 
    if (target-val1 > val2-target) 
        return val2; 
    else
        return val1; 
} 

int find(int arr[], int n, int target){ 
   
    if (target <= arr[0]) 
        return arr[0]; 
    if (target >= arr[n - 1]) 
        return arr[n - 1]; 
  
    int i=0,j=n,m; 
    while (i < j) { 
        
		m = (i+j) / 2; 
  
        if (arr[m] == target) 
            return arr[m]; 
  
        if (target < arr[m]) { 
            if (m>0 && target>arr[m-1]) 
                return get(arr[m - 1], arr[m], target); 
            j = m; 
        } 
        else { 
            if (m<n-1 && target<arr[m+1]) 
                return get(arr[m], 
                                  arr[m+1], target); 
            i = m+1;  
        } 
    } 
    return arr[m]; 
} 
