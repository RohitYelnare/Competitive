#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	scanf("%s", str);
	int i,len=strlen(str);
	for(i=0; i<len; i++){
		if(str[i]<=90 && str[i]>=65)
		str[i]+=32;
		else
		str[i]-=32;
		printf("%c",str[i]);		
	}
}

