#include <stdio.h>

int main(){
	int i,count,tmp,n;
	scanf("%d",&n);
	tmp=n;
	for(i=1; ;i++){
		tmp-=i;
		if(tmp<=0){
			printf("Patlu");
			break;
		}
		tmp-=2*i;
		if(tmp<=0){
			printf("Motu");
			break;
		}
	}
}

