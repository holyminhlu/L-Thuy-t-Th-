#include <stdio.h>
#include <stdlib.h>

int a[10][10];
int n;

void read_file() {
  FILE *fp;
  fp = fopen("D:\\mltestBFS.txt", "r");
  if (fp == NULL) {
    printf("\nFile khong ton tai:");
    exit(1);
  } else {
    fscanf(fp, "%d", &n);
    for (int i = 1; i <= n; i++)
      for (int j = 1; j <= n; j++)
        fscanf(fp, "%d", &a[i][j]);
  }
  fclose(fp);
}

void print_file() {
  printf("\nMa tran: \n");
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++)
      printf(" %d ", a[i][j]);
    printf("\n");
  }
}

void bfs(int a[10][10], int n, int x) {
int T[10]; int t=0; int d[10]; int v=0;
for( int i=1; i<=n; i++){ d[i]=0; } 						//1. Th�m v v�o m?ng T ? v? tr� t (t=0)
	T[0] = x;												//2. Tang bi?n t
	t++;													//3. ��nh d?u d?nh v
	d[x] = 1;												//3. Khi m?ng T c�n ph?n t? (v? tr� t kh�c 0) th�:
while( t != 0 ){												//a. G?i x l� ph?n t? d?u ti�n c?a m?ng T
	  x = T[0];												//b. In d?nh x ra l�m k?t qu?
	  printf(" %d ", x);									//c. D?i c�c ph?n t? trong m?ng T s�ng tr�i 1 v? tr�
for( int i = 0; i < n; i++){
	T[i] = T[ i + 1 ];
}				
t--;		              									//d. T�m t?t c? c�c k? c?a x: n?u i k? x v� i chua d�nh d?u th�
for( int i=1; i<=n; i++){
	if( (a[i][x] != 0) && d[i]==0 ){						//i. Th�m i v�o h�ng m?ng T ? v? tr� t
			T[t]=i;  			   							//ii. tang v? tr� t				 	 						
															//iii. ��nh d?u d?nh i d� duy?t
	    t++;
	    d[i] = 1;
	  }
	}
  }
}

int main() {
  read_file();
  print_file();

  int x;
  printf("\nNhap phan tu bat dau: ");
  scanf("%d", &x);
  printf("BFS(%d):",x);
  bfs(a, n, x);
  
  printf("\n");

  return 0;
}

