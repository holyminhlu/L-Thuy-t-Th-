#include <stdio.h>
#include <stdlib.h>
#define max 100000
int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("D:\\KOCOGI123.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
int n,m;
int a[max+1];
   for( int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("Nhap vao phan tu thu A[%d][%d]: ",i,j); scanf("%d", &a[i][j]);
   }
}
for( int i=0; i<n; i++){
		for(int j=0; j<m; j++){
   fprintf(fptr,"%d",a[i][j]);
}
}
   fclose(fptr);
   return 0;
}
