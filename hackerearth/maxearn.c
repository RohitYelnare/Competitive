#include <stdio.h>

int main(){
	int tmp,i,j,k,s;
	scanf("%d", &s);
	int* n = (int*)malloc(s*sizeof(int));
	int* r = (int*)malloc(s*sizeof(int));
	int heights[10][100];
	for(i=0; i<s; i++){
		scanf("%d", &n[i]);
		scanf("%d", &r[i]);
		for(j=0; j<n[i]; j++){
			scanf("%d", &heights[i][j]);
		}
	}
	int count,earning;
	for(i=0; i<s; i++){
		count = 0;
		tmp = 0;
		for(j=0; j<n[i]; j++){
			if(tmp<heights[i][j]){
				count++;
				tmp = heights[i][j];
			}
		}
		earning = count*r[i];
		printf("%d\n", earning);
	}

}
