# include <stdio.h>

int main() {
    int t;
    // Ask to user enter your 'Area Temperature'
    printf("Enter your 'Area Temperature'; ");
    scanf("%d", &t);
    if (t<10){
        printf("Clod");
    } else if (20>=t || t>=10){
        printf("Moderate");
    } else {
        printf("Hot");
    }
}