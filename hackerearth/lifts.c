#include <stdio.h>

int main(){
	int pos_a=0, pos_b=7, i, t, dis_a, dis_b;
	scanf("%d", &t);
	int* cases=(int*)malloc(t*sizeof(int));
	
	for(i=0; i<t; i++){
		scanf("%d", &cases[i]);
	}

	for(i=0; i<t; i++){
		dis_a = cases[i]-pos_a;
		dis_b = pos_b-cases[i];
		//printf("a %d\n", dis_a);
		//printf("b %d\n", dis_b);
		if(dis_a<dis_b){
			printf("A\n");
			pos_a = cases[i];
		}
		else if(dis_a==dis_b){
			if(pos_a<pos_b){
				printf("A\n");
				pos_a = cases[i];
			}
			else{
				printf("B\n");
				pos_b = cases[i];
			}
		}
		else{
			printf("B\n");
			pos_b = cases[i];
		}
	}
}


