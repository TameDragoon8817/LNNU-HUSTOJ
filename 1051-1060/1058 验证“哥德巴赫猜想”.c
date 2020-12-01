#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//检查一个数是否素数，是就输出1，否就输出0
int isprime(int n) {
    int isprime = 1;
    if (n == 1 || (n % 2 == 0 && n != 2)) {
        isprime = 0;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            isprime = 0;
            break;
        }
    }
    return isprime;
}


int main() {
    int n;
    scanf("%d", &n);
    int p, q;
    for (p = 2; p < n; p++) {
        q = n - p;
        if (isprime(p) && isprime(q)) {
            printf("%d = %d + %d\n", n, p, q);
            break;
        }
    }
    return 0;
}