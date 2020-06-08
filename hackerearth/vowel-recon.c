#include <stdio.h>
int chkvowel(char *str, int strlen);
int main(){
	int tests,i,j,k,t,count,len;
	scanf("%d", &tests);
	char str[100][100];
	for(i=0; i<tests; i++){
		scanf("%s", &str[i][0]);
	}
	for(i=0; i<tests; i++){
		count=0;
		len=0;
		while(str[i][len]!='\0'){
			len++;
		}
		for(j=0; j<len; j++){
			for(k=j; k<len; k++){
				count += chkvowel(&str[i][j], k-j+1);
			}
		}
		printf("%d\n", count);
	}
}
int chkvowel(char *str, int strlen){
	int i,vowelcount=0;
	char ch;
	for(i=0; i<strlen; i++){
		ch = *(str+i);
		if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
    		vowelcount++;
		}
	}

	return vowelcount;
}
