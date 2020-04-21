#include <stdio.h>

int main(){
	int i,num,tmp;
	scanf("%d", &num);
	char str[1000];
	int count[26]={0};
	scanf("%s", str);
	for(i=0; i<num; i++){
		tmp = str[i];
		tmp-=97;
		count[tmp]++;
	}
	for(i=0; i<num; i++){
		printf("%d\n", count[i]);
	}
	int res=0;
	for(i=0; i<num; i++){
		if(count[i]%2!=0){
			res++;
		}
	}
	printf("%d\n", res);
	for(i=0; i<num; i++){
		if(count[i]%2!=0){
			printf("%c", (i+97));
		}
	}
}
