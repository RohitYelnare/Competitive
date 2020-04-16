#include <stdio.h>

int main(){
	char code[10];
	scanf("%s", code);
	int i;
	if(code[2]=='A'||code[2]=='E'||code[2]=='I'||code[2]=='O'||code[2]=='U'||code[2]=='Y'){
		printf("invalid");
		return 0;
	}
	if((code[0] + code[1])%2!=0){
		printf("invalid");
		return 0;
	}
	if((code[4] + code[3])%2!=0){
		printf("invalid");
		return 0;
	}
	if((code[4] + code[5])%2!=0){
		printf("invalid");
		return 0;
	}
	if((code[7] + code[8])%2!=0){
		printf("invalid");
		return 0;
	}
	printf("valid");
}
