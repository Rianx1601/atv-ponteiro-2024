#include <stdio.h>

void troca(int *fx, int *fy) {
    int temp = *fx;
    *fx = *fy;
    *fy = temp;
}

void ordena(int *fx, int *fy, int *fz) {
    if (*fx > *fy) {
        troca(fx, fy);
    }
    if (*fx > *fz) {
        troca(fx, fz);
    }
    if (*fy > *fz) {
        troca(fy, fz);
    }
}

int main() {
    int x = 5, y = 2, z = 3;

    printf("antes da ordenacao: x = %d, y = %d, z = %d\n", x, y, z);

    ordena(&x, &y, &z);

    printf("apos a ordenacao: x = %d, y = %d, z = %d\n", x, y, z);

    return 0;
}
