#include <stdio.h>

int main() {
    char chuoi[100];
    printf("Nhap chuoi: ");
    gets(chuoi);

    int so_tu = 1;
    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == ' ') {
            so_tu++;
        }
    }

    printf("So tu trong chuoi la: %d\n", so_tu);

    return 0;
}
