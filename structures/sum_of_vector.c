# include <stdio.h>

struct  vector{
    int x;
    int y;
};

void cal_sum(struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x: %d \n", sum.x);
    printf("Sum of y: %d \n", sum.y);
}

int main() {
    struct  vector v1 = { 4, 8};
    struct  vector v2 = { 9, 18};
    struct  vector sum = {0};

    cal_sum(v1, v2, sum);
}
