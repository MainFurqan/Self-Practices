// Q; print the all odd number from 5 to 50
# include <stdio.h>
int main() {
    for(int i = 5; i<=50; i++) {                       // second method
        if(i%2==0){                                    // if(i%2!=0){
                                                       //     printf("%d \n", i);
            continue;    // skip 
        }
        printf("%d \n", i);
    }
}