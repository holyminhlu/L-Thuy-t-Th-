#include"stdio.h"
#include"iostream"
#include"conio.h"
#include"stdlib.h"
 int a[10][10];
 int n;
 void read_file(){
 FILE *fp;
 		fp = fopen("D:\\MinhLu_File2.txt","r");
 if ( fp == NULL ){
 	printf("\n File khong ton tai !!!");
 	exit(1);
 }else{
 	fscanf(fp,"%d",&n);
 	for( int i=1; i<=n; i++)
 		for( int j=1; j<=n; j++)
 			fscanf(fp,"%d", &a[i][j]);	
 	}
fclose(fp);
}
void print_file(){
	printf("\n Ma tran ke: \n");
	for( int i=1; i<=n; i++){
		for( int j=1; j<=n; j++)
			printf(" %d ",a[i][j]);
			printf("\n");
	}
}
int baccuadinh( int a[10][10], int n){
	int bac=0;
	int x;
	printf("\nNhap dinh can tinh bac: "); scanf("%d", &x);
	for( int j=1; j<=n; j++){
		if( x == j ){
			if( a[x][j] != 0 ){
			bac += 2;
		}
	}
		else{
			if( a[x][j] != 0 ){
				bac += 1;
			}
		} 

	}
	printf("\nSo bac cua dinh x = %d la %d", x,bac);
}
int main(){
	read_file();
	print_file();
	baccuadinh(a,n);
}
