#include <stdio.h>

int main(){
	int k,num_of_queries;
	scanf("%d", &num_of_queries);
	int seat_query[100000];
	for(k=0; k<num_of_queries; k++){
		scanf("%d", &seat_query[k]);
	}
	int seatnum[18][6];
	char seattype[18][6];
	int i,j;
	k=1;
	for(i=0; i<18; i++){
		for(j=0; j<6; j++){
			seatnum[i][j]=k;
			k++;
		}
	}

	for(i=0; i<18; i++){
		for(j=0; j<6; j++){
			k=seatnum[i][j]%6;
			if(k==0)
			seattype[i][j]='w';
			else if(k==1)
			seattype[i][j]='w';
			else if(k==2)
			seattype[i][j]='m';
			else if(k==3)
			seattype[i][j]='a';
			else if(k==4)
			seattype[i][j]='a';
			else
			seattype[i][j]='m';
			}
	}
	int tmp1,tmp2,tmp3;
	for(k=0; k<num_of_queries; k++){
		i = (seat_query[k]/6);
		j = (seat_query[k]%6) - 1;
		if(j==(-1)){
		j=5;
		i--;
		}
		
		tmp1=5-j;
		if(i%2==0){
			printf("%d ", seatnum[i+1][tmp1]);
		}
		else{
			printf("%d ", seatnum[i-1][tmp1]);			
		}
		
		if(seattype[i][j]=='w')
		printf("WS\n");
		else if(seattype[i][j]=='a')
		printf("AS\n");
		else
		printf("MS\n");
	}			
}
