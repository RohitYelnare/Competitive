#include <stdio.h>

int main(){
	int t, gcost, pcost, players, cost_pg, cost_gp, total;
	scanf("%d", &t);
	int i,j,k;
	int net[13];
	for(k=0; k<t; k++){
		total=0;
		
		scanf("%d %d", &gcost,&pcost);
		scanf("%d", &players);
		int board[13][13];
		for(i=0; i<players; i++){
			scanf("%d %d", &board[i][0],&board[i][1]);
		}
		//cost_pg calc
		for(i=0; i<players; i++){
			if(board[i][0]==1)
			total+=pcost;
			if(board[i][1]==1)
			total+=gcost;
		}
		cost_pg=total;
		total=0;
		for(i=0; i<players; i++){
			if(board[i][0]==1)
			total+=gcost;
			if(board[i][1]==1)
			total+=pcost;
		}
		cost_gp=total;
		if(cost_gp<cost_pg){
			net[k]=cost_gp;
		}
		else{
			net[k]=cost_pg;
		}
	}
	for(k=0; k<t; k++){
		printf("%d\n", net[k]);
	}
}
