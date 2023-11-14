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
int ktra_dxung( int a[10][10], int n){
	for( int i=1; i<=n; i++){
		for( int j=1; j<=n; j++){
			if( a[i][j] != a[j][i]){
				return 1;
				}
			}
		}
return 0;
}
int baccuadinh( int a[10][10], int n, int x){
	int bac=0;
	for( int j=1; j<=n; j++)
		bac = bac + a[x][j];
	if( a[x][x]!=0){
		bac = bac + a[x][x];
}
	printf("\nSo bac cua dinh x = %d la %d", x,bac);
}
int baccuadinh_ch( int a[10][10], int n, int x){
	int bacvao=0;
	int bacra =0;
	for( int j=1; j<=n; j++){
			bacvao = bacvao + a[j][x];
			bacra = bacra + a[x][j];
	}
	printf("\nSo bac vao cua dinh x = %d la %d", x,bacvao);
	printf("\nSo bac ra cua dinh x = %d la %d", x,bacra);
}
int main(){
	read_file();
	print_file();
	int x;
	printf("\nNhap dinh can tinh bac: "); scanf("%d", &x);
	if( ktra_dxung(a,n) == 0){
		baccuadinh(a,n,x);
	}else{
		baccuadinh_ch(a,n,x);
	}
}
