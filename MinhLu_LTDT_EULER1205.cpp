#include"stdio.h"
#include"conio.h"
#include"iostream"
int a[10][10]; int n;
void docfile(){
	FILE*fp;
	fp = fopen("D:\\eulerml.txt","r");
	if( fp == NULL ){
		printf("\nFile khong ton tai !!!");
		exit(0);
	}else{
		fscanf(fp, "%d", &n);
			for( int i=1; i<=n; i++)
			for( int j=1; j<=n; j++)
			fscanf(fp, "%d", &a[i][j]);
	}
	fclose(fp);
}
void infile(){
	printf("\nMa tran vua ghi: \n");
	for( int i=1; i<=n; i++){
		for( int j=1; j<=n; j++)
		printf(" %d ", a[i][j]);
		printf("\n");
	}
}
int Euler( int v ){
	int s[20];	int KQ[10];  int t1 = 0;	int t = 0;
	s[t++]=v;
while( t>0 ){
	int u = s[t-1];
	int k = 0;
	for( int i=1; i<=n; i++){
		if( a[u][i] != 0 ){
			s[t++]=i;
			a[u][i]--;
			a[i][u]--;
			k=1;
			break; // ngat vong lap
		}
	}
	if( k==0 ){
		t--;
		KQ[t1++]=u;
	}
}
printf("\nChu trinh Eulerla: \n" );
for( int i=t1-1; i>=0; i--){
	printf("[%d]", KQ[i]);
	if( i>0)
		printf(" -> ");
	}
	printf("\n");
}
int kiemtra() {
    int bac = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] != 0 && a[j][i] != 0) {
                bac += a[i][j];
            }
        }
        if( bac %2 != 0 ){return false;}
        bac = 0;
    }
	return true;
}
int main(){
	docfile();
	infile();
	int x;
	if( kiemtra() == false ){
		printf("\nDo thi khong co chu trinh Euler ");
	}else{
		printf("\nDo thi co chu trinh Euler. ");
		printf("\nNhap dinh bat dau: ");
		scanf("%d", &x);
		Euler(x);
		system("pause");
	}
return 0;
}
