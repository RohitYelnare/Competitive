#include <stdio.h>

int main(){
	int t,i;
	scanf("%d", &t);
	int times[1000][4];
	for(i=0; i<t; i++){
		scanf("%d %d %d %d", &times[i][0], &times[i][1], &times[i][2], &times[i][3]);
	}
	int duration, hrs, mins;
	for(i=0; i<t; i++){
		duration = (times[i][2]*60) + times[i][3] - times[i][1] - (times[i][0]*60);
		hrs = duration/60;
		mins = duration%60;
		printf("%d %d\n", hrs, mins);
	}
}
