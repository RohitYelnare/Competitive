#include <stdio.h>

int main(){
	char str[200];
	scanf("%s", str);
	char c;
	int x=0,y=0,i;
	for(i=0; i<strlen(str); i++){
		c = str[i];
		switch(c){
			case 'L':x--;
					break;
			case 'R':x++;
					break;
			case 'D':y--;
					break;
			case 'U':y++;
					break;
		}
	}
	printf("%d %d",x,y);
}
