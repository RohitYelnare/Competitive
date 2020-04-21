#include <stdio.h>

int main(){
	int i,j,num;
	scanf("%d", &num);
	if(num==2||num==3){
		printf("Not possible");
		return 0;
	}
	int board[11][11];
	for(i=0; i<num; i++){
		for(j=0; j<num; j++){
			board[i][j]=0;
		}
	}
	int t=-1;
	for(i=0; i<num; i++){
		t+=2;
		if(t>=num){
			t=0;
		}
		for(j=0; j<num; j++){
			board[i][t]=1;
		}
	}
	for(i=0; i<num; i++){
		for(j=0; j<num; j++){
			printf("%d ",board[i][j]);
		}
		printf("\n");
	}
}
