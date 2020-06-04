#include <stdio.h>

int main(){
	long i,tests,j,min_count,max_count,min,max;
	scanf("%d", &tests);
	long *l = (long*)malloc(tests*sizeof(long));
	long *r = (long*)malloc(tests*sizeof(long));
	long *s = (long*)malloc(tests*sizeof(long));
	for(i=0; i<tests; i++){
		scanf("%d %d %d", &l[i], &r[i], &s[i]);
	}
	for(i=0; i<tests; i++){
		if(s[i]>(r[i]-l[i])){
			printf("-1 -1\n");
			continue;
		}
		else{
			min = r[i] 	;
			max = 0;
			for(j=l[i]; j<=r[i]; j++){
				if(j%s[i]==0){
					if(j<min){
						min = j;
					}
					if(j>max){
						max = j;
					}
				}
			}
			min_count = min/s[i];
			max_count = max/s[i];
			printf("%ld %ld\n", min_count,max_count);
		}
	}
}
