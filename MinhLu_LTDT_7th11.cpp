#include"stdio.h"
#include"iostream"
#include"conio.h"
#include"stdlib.h"
 int a[10][10];
 int n;
 void read_file(){
 FILE *fp;
 		fp = fopen("D:\\MinhLu_File.txt","r");
 if ( fp == NULL ){
 	printf("\n File khong ton tai !!!");
 	exit(0);
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
int ktra_doixung(  int a[10][10],int n){
	for( int i=1; i<=n; i++){
		for( int j=1; j<=n; j++){
			if( a[i][j] != a[j][i] ){		//doi xung 1
				return 0;
		}
		}
	}
return 1;
}
int ktra_duongcheo( int a[10][10], int n){
	for( int i=1; i<=n; i++){
		for( int j=1; j<=n; j++){
			if( i == j){
				if( a[i][j] != 0){
					return 0;				//duong cheo bnag 0 la 1
				}
			}
		}
	}
return 1;
}
int ktra_lonhon1( int a[10][10],int n){
	for( int i=1; i<=n; i++){
		for( int j=1; j<=n; j++){
			if( a[i][j]>1){
				return 0;					//phan tu nho hon 1 la 1
			}
		}
	}
return 1;
}
int main(){
	read_file();
	print_file();
	if(ktra_duongcheo(a,n)==1 && ktra_doixung(a,n)==1 && ktra_lonhon1(a,n)==1){
		printf("\nMa tran la DON DO THI VO HUONG !!!");
	}else if(ktra_duongcheo(a,n)==1 && ktra_doixung(a,n)==1 && ktra_lonhon1(a,n)==0){
		printf("\nMa tran la DA DO THI VO HUONG !!!");
	}else if(ktra_duongcheo(a,n)==1 && ktra_lonhon1(a,n)==1 && ktra_doixung(a,n)==0){
		printf("\nMa tran la DON DO THI CO HUONG !!!");
	}else if(ktra_duongcheo(a,n)==0 && ktra_doixung(a,n)==1 /*&& ktra_lonhon1(a,n)==0 */){
		printf("\nMa tran la GIA DO THI !!!");
	}else if(ktra_duongcheo(a,n)==0 && ktra_doixung(a,n)==0 && ktra_lonhon1(a,n)==0){
		printf("\nMa tran la DA DO THI CO HUONG !!!");
	}else{	
		printf("\n Khong the tao do thi tu ma tran !!!");
	}
}

