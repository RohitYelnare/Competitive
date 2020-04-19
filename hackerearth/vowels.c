#include <stdio.h>

int main(){
	long i,num;
	scanf("%ld", &num);
	char c[100][32000];
	for(i=0; i<num; i++){
		scanf("%s", &c[i][0]);
	}
	long count;
	for(i=0; i<num; i++){
		count=0;
		long j=0;
		while(c[i][j]!='\0'){
			if(c[i][j]=='A'||c[i][j]=='E'||c[i][j]=='I'||c[i][j]=='O'||c[i][j]=='U' ||c[i][j]=='a'||c[i][j]=='e'||c[i][j]=='i'||c[i][j]=='o'||c[i][j]=='u'){
				count++;
			}
			j++;
		}
		printf("%ld\n", count);
	}
}
