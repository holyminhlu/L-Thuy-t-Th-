#include"stdio.h"
#include"iostream"
#include"stdlib.h"
 int inp_arr( int a[100], int n);
 int out_arr( int a[100], int n);
 int x_arr( int a[100], int n, int x);
 int out_arr( int a[100], int n);
 int min_arr( int a[100], int n);
 int max_arr( int a[100], int n);
 int sole_arr( int a[100], int n);
 int tong_arr( int a[100], int n);
 //main
int main(){
	int n, x;
	int a[100];
	printf("\tNhap so luong phan tu cho mang: ");
	scanf("%d",&n);
	inp_arr(a,n);
	out_arr(a,n);
	x_arr(a,n,x);
	min_arr(a,n);
	max_arr(a,n);
	sole_arr(a,n);
	tong_arr(a,n);
return 0;
}
//
 int inp_arr( int a[], int n){
 	printf("INTPUT ARRAY \n");
 	for( int i=0; i < n; i++){
 		printf("Nhap phan tu thu A[%d]: ", i);
 		scanf("%d", &a[i]);
 	}
 }
//
 int out_arr( int a[], int n){
 	printf("OUTPUT ARRAY");
 	for( int i=0; i < n; i++){
 		printf("\n Phan tu cua mang: A[%d] = %d", i,a[i]);
 	}
 }
 //
  int x_arr( int a[100], int n, int x){
  	printf("\nNhap vao phan tu x: ");scanf("%d", &x);
  	while( x<0 || x > n-1){
    printf("\nNHAP SAI ! Nhap lai phan tu x: "); scanf("%d",&x);
    }
  	for( int i=0; i<n; i++){
  		if( x == i)
  		{
  			printf("\nGia tri phan tu thu %d la: %d ", x, a[i]);
  		}else if( x<0 && x>=n){
  			printf("\nVuot qua kich thuoc mang");
  		}
  	}
  }
  int max_arr( int a[100], int n){
  	int max=a[0];
  	int vitri = 0;
  	for( int i=0; i<n; i++){
  		if( a[i] > max ){
  			max = a[i];
  			vitri = i;
  		}
  	}
  		printf("\nGia tri lon nhat la: %d tai vi tri A[%d] ", max, vitri);
  }

  int min_arr( int a[100], int n){
  	int min=a[0];
  	int vitri = 0;
  	for( int i=0; i<n; i++){
  		if( a[i] < min ){
  			min = a[i];
  			vitri = i;
  		}
  	}
  		printf("\nGia tri nho nhat la: %d tai vi tri A[%d] ", min, vitri);
  }
   int sole_arr( int a[100], int n){
   	printf("\nCac phan tu la so le: ");
   	for( int i=0; i< n; i++){
   		if( a[i]%2 != 0){
   			printf("\n %d", a[i]);
   		}
   	}
}
int tong_arr( int a[100], int n){
	int tong = 0;
	for( int i=0; i<n; i++){
		tong += a[i];
	}
	printf("\nTong cac phan tu trong mang la: %d ", tong);
}
  
  
