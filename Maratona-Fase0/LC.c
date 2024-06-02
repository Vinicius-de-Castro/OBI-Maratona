#include <stdio.h>
#include <string.h>

int main(){

    int n, i, j = 0;
    scanf("%d", &n);

    char quartos[n][9], chatos[n][9];
    char aux[9];

    for (i = 0; i < n; i++){
        scanf("%s", quartos[i]);
    }
    for (i = 0; i < n; i++){
        scanf("%s", chatos[i]);
    }

    for (i = 0; i < n; i++){
        if (i > 0) printf(" ");
        printf("%s", chatos[j]);
        if (strcmp(chatos[j], quartos[i]) != 0) j++;
    }
    printf("\n");

    return 0;
}