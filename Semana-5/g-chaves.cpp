#include <stdio.h>

int main(){
    
    int n, count = 0;
    char aux;

    scanf("%d", &n);
    while ((aux = getchar()) != EOF) {
        if (aux == '{') {
            count++;
        }
        else if (aux == '}'){
            if (count <= 0){
                printf("%c", 'N');
                return 0;
            }
            count--;
        }
    }
    printf("%c", count ? 'N' : 'S');

    return 0;
}
