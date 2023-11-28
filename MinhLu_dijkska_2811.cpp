#include"stdio.h"
#define vc 9999
#include"iostream"
#include"conio.h"

int a[10][10];
 int n;
int L[10], d[10], T[10], tam[10];

void doc_file(){
	FILE *fp = fopen("D:\\djkska.txt", "r");
	if( fp == NULL ){
		printf("Loi FILE khong ton tai !!! ");
		exit(1);
		}else{
			fscanf(fp , "%d", &n);
			for( int i=1; i<=n; i++)
			for( int j=1; j<=n; j++)
			fscanf(fp, "%d", &a[i][j]);
		}
		fclose(fp);
	}
	
void xuat_file(){
	printf("\nMa tran: \n");
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++)
      printf(" %d ", a[i][j]);
      printf("\n");
  }
}
void khoitao( int x ){
	for( int i=1; i<=n; i++){
		L[i] = vc;
		d[i]=1;
	}
	L[x]=0;
}
int vitridinhmin(){
	int min = vc,vitri;
	for( int i=1; i<=n; i++){
		if( d[i]==1 && min >= L[i]){
			min = L[i];
			vitri = i;
		}
	}
	return vitri;
}
int capnhatke( int p ){
	for( int i=1; i<=n; i++){
	for( int j=1; j<=n; j++){
	if( a[p][i] != 0 && d[i]==1){
		if( L[i] > L[p] +a[p][i]){
			L[i] = L[p] +a[p][i];
			T[i]=p;
		  }
		}
	 }
   }
   	printf("\n");
   	for( int i=1; i<=n; i++){
		printf(" %5d ", L[i]);
	}
}

int timduong( int f ){
	int dem; int i=1; int x; x=f;
	while( T[f] != 0){
		//printf("%d\t", T[f]);
		tam[i] = T[f];
		f = T[f];
		i++;
		dem++;
	}
	for( int i=dem; i>=1; i--){
	 printf(" %d ", tam[i]);
	}
	printf(" %d ", x);
}
int main(){
	doc_file();
	xuat_file();
	int x,f;   
	printf("\nNhap phan tu bat dau: ");  scanf("%d", &x);
	khoitao(x);
	int lap = 0;
	while( lap != n ){
		int u = vitridinhmin();
				capnhatke(u);
				d[u] = 0;   
				lap++;
	}
	printf("\n");
	printf("\nMang o lan lap cuoi cung: ");
	for( int i=1; i<=n; i++) {
	printf("%d\t", L[i]);
    }
	printf("\nNhap dinh ket thuc: "); scanf("%d",&f);
	printf("Duong di ngan nhat tu %d den %d la: ", x,f);
	timduong(f);
	printf("\nDuong di ngan nhat co do dai la: %d ", L[f]);
return 0;
}
