#include <stdio.h>
#include <stdlib.h>

int a[10][10];
int n;
int d[10] = {0};

void read_file() {
  FILE *fp;
  fp = fopen("D:\\mltest.txt", "r");
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

void dfs(int a[10][10], int n, int x) {
  printf("%d ", x);
  d[x] = 1;

  for (int v = 1; v <= n; v++) {
    if (a[x][v] == 1 && d[v] == 0) {
      dfs(a, n, v);
    }
  }
}

int main() {
  read_file();
  print_file();

  int x;
  printf("\nNhap phan tu bat dau: ");
  scanf("%d", &x);

  dfs(a, n, x);
  printf("\n");

  return 0;
}

