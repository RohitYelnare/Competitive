#include<stdio.h>
#include<math.h>
long length(long num);
int main() {
   int n;
   long i,tmp1,tmp2,tmp3,num,chk=0;
   scanf("%d", &n);
   long* arr = (long *)malloc(n*sizeof(long));
   for(i=0; i<n; i++){
      scanf("%ld", &arr[i]);
   }
   for(i=0; i<n/2; i++){
      tmp1 = arr[n-1-i]%10;
      tmp2 = pow(10,i);
      tmp3 = (long) tmp2;
      chk+=tmp1*tmp2;
   }
   for(i=0; i<n/2; i++){
      tmp1 = pow(10,length(arr[i])-1);
      tmp2 = (long) tmp1;
      tmp3 = arr[i]/tmp2;
      tmp1 = pow(10,n-1-i);
      tmp2 = (long) tmp1;
      chk += tmp3*tmp2;
   }
   if(chk%11==0){
      printf("OUI");
   }
   else{
      printf("NON");
   }
}
long length(long num){
   long t = num, len=0;
   while(t!=0){
      len++;
      t/=10;
   }
   return len;
}
