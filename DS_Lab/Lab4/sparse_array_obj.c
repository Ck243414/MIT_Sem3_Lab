#include<stdio.h>
#define MAX 20

typedef struct {
    int row;
    int col;
    int val;
} sparse;

void readsparse(sparse a[], int m, int n) {
    int i, j, k, item, p;
    a[0].row = m;
    a[0].col = n;
    k = 1;
    printf("\nEnter the elements:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d",&item);
            if(item == 0) {
                continue;
            }
            a[k].row = i;
            a[k].col = j;
            a[k].val = item;
            k++;
        }
    }
    a[0].val = k-1;
    printf("\nThe entered sparse matrix is:\n");
    printf("\nRow\tColumn\tValue\n");
    for(p=1; p<=a[0].val; p++) {
        printf("%d\t", a[p].row);
        printf("%d\t", a[p].col);
        printf("%d\n", a[p].val);
    }
}

void transpose(sparse a[MAX], sparse b[MAX]) {
    int k=0;
    b[0].row=a[0].col;
    b[0].col=a[0].row;
    b[0].val=a[0].val;
    for (int i=0; i<a[0].col;i++){
        for (int j=1;j<=a[0].val;j++){
            if (a[j].col==i)
            {
                k++;
                b[k].row=a[j].col;
                b[k].col=a[j].row;
                b[k].val=a[j].val;
            }
        }
    }
    printf("\nThe Fast Transpose sparse matrix is:\n");
    printf("\nRow\tColumn\tValue\n");
    for(int p=1; p<=b[0].val; p++) {
        printf("%d\t", b[p].row);
        printf("%d\t", b[p].col);
        printf("%d\n", b[p].val);
    }
}

int main() {
    sparse a[MAX], b[MAX];
    int m, n;
    printf("\nEnter the no of rows and columns:\n");
    scanf("%d%d",&m, &n);
    readsparse(a, m, n);
    transpose(a, b);
    return 0;
}
