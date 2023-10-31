#include"stdio.h"
#include"iostream"
#include"stdlib.h"
 int inp_arr( int a[100][100], int n, int m);
 int out_arr( int a[100][100], int n, int m);
 int x_arr( int a[100][100], int n, int m);
 int y_arr( int a[100][100], int n, int m);
 int k_arr( int a[100][100], int n, int m);
 int m_arr( int a[100][100], int n, int m);
 int sumchan_arr( int a[100][100], int n, int m);
 void duongcheo_arr( int a[100][100], int n, int m);
 void min1_arr( int a[100][100], int n, int m);
 void doixung_arr( int a[100][100], int n, int m);
 int main(){
 	int a[100][100];
 	int n,m;
 	printf("NHAP SO HANG CUA MA TRAN: "); scanf("%d", &m);
 	printf("NHAP SO COT CUA MA TRAN: "); scanf("%d", &n);
 	inp_arr(a,n,m);
 	out_arr(a,n,m);
 	x_arr(a,n,m);
 	y_arr(a,n,m);
 	k_arr(a,n,m);
 	m_arr(a,n,m);
 	sumchan_arr(a,n,m);
 	duongcheo_arr(a,n,m);
 	min1_arr(a,n,m);
 	doixung_arr(a,n,m);
 }
 //
 int inp_arr( int a[100][100], int n, int m){
 	printf("INTPUT ARRAY \n");
 	for( int i=0; i < m; i++){
 		for( int j=0; j < n; j++){
 		printf("Nhap phan tu thu A[%d][%d]: ", i,j);
 		scanf("%d", &a[i][j]);
 	}
 }
 }
 //
 int out_arr( int a[100][100], int n, int m){
 	printf("OUTPUT ARRAY \n");
 	for( int i=0; i < m; i++){
 		for( int j=0; j < n; j++){
 		printf(" %d ", a[i][j]);
 	}
 	printf("\n");
  }
 }
 int x_arr( int a[100][100], int n, int m){
 	int x = 0; int max = 0;
 	printf("\nNhap vao phan tu hang thu x: "); scanf("%d",&x);
    while( x<0 || x > m-1){
    printf("\nNHAP SAI ! Nhap lai phan tu hang thu x: "); scanf("%d",&x);
    }
 		for( int j=0; j < n; j++){
 		if( a[x][j] > max ){
 			max = a[x][j];
 		}
 	}
 	printf("\nPhan tu lon nhat tren hang thu x=%d la %d ", x , max);
 	printf("\n");
}
int y_arr( int a[100][100], int n, int m){
 	int y = 0; int min = 0;
 	printf("\nNhap vao phan tu cot thu y: "); scanf("%d",&y);
 	while( y<0 || y > n-1){
    printf("\nNHAP SAI ! Nhap lai phan tu cot thu y: "); scanf("%d",&y);
    }
 	min = a[0][y];
 		for( int i=0; i < m; i++){
 		if( a[i][y] < min ){
 			min = a[i][y];
 		}
 	}
 	printf("\nPhan tu nho nhat tren cot thu y=%d la %d ", y , min);
 	printf("\n");
}
int k_arr( int a[100][100], int n, int m){
 	int k = 0; int tong = 0;
 	printf("\nNhap vao phan tu hang thu k: "); scanf("%d",&k);
 	while( k<0 || k > n-1){
    printf("\nNHAP SAI ! Nhap lai phan tu hang thu k: "); scanf("%d",&k);
    }
 		for( int j=0; j < n; j++){
 			tong += a[k][j];
 		}
 
 	printf("\nTong phan tu tren hang k=%d la: %d",k, tong);
 	printf("\n");
	}
int m_arr( int a[100][100], int n, int m){
 	int mm = 0; int sum = 0;
 	printf("\nNhap vao phan tu cot thu m: "); scanf("%d",&mm);
 	while( mm<0 || mm > m-1){
    printf("\nNHAP SAI ! Nhap lai phan tu cot thu m: "); scanf("%d",&mm);
    }
 	//min = a[0][m];
 		for( int i=0; i < m; i++){
 		sum += a[i][mm];
 	}
 	printf("\nTong phan tu tren cot m=%d la %d ",mm,sum);
 	printf("\n");
}
int sumchan_arr( int a[100][100], int n, int m){
	int sumchan = 0;
 	for( int i=0; i < m; i++){
 		for( int j=0; j < n; j++){
 		if( a[i][j]%2 == 0){
 			sumchan += a[i][j];
 		}
 	}
  }
  	printf("\nTong phan tu chan trong ma tran la %d ",sumchan);
 }
void duongcheo_arr( int a[100][100], int n, int m){
	bool kiemtra = true;
	for( int i=0; i< m; i++){
		for( int j=0; j<n; j++){
			if( i == j){
				if( a[i][j] != 0){
					kiemtra = false;
				}
			}
		}
	}
	if( kiemtra == false){
		printf("\nKhong co duong cheo bang 0 !!!");
	}else{
		printf("\nCo duong cheo bang 0 !!!");
	}
}
void min1_arr( int a[100][100], int n, int m){
	bool ktra = true;
	for( int i=0; i< m; i++){
		for( int j=0; j<n; j++){
				if( a[i][j] > 1){
					ktra = false;
				}
		}
	}
	if( ktra == false){
		printf("\nCo phaN tu lon hon 1 - NO !!!");
	}else{
		printf("\nToan bo phan tu nho hon or bang 1 - YES !!!");
	}
}
void doixung_arr( int a[100][100], int n, int m){
	bool kt = true;
	//system( " color 2 ");
	for( int i=0; i< m; i++){
		for( int j=0; j<n; j++){
				if( a[i][j] != a[j][i]){
					kt = false;
				}
		}
	}
	if( kt == false){
		printf("\nKHONG DOI XUNG !!!");
	}else{
		printf("\nDOI XUNG !!!");
	}
}
