#include <string.h>
#include <stdio.h>
int main(){
	char str[21];
	scanf("%s", str);
	int x=0,y=0,i;
	for(i=0; i<strlen(str); i++){
		if(str[i]=='z')
		x++;
		else
		y++;
	}
	if(y==2*x)
	printf("Yes");
	else
	printf("No");
}
