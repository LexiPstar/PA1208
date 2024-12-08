#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//// 判断是否为素数的函数
//int is_prime(int n) {
//    if (n <= 1) {
//        return 0;  // 0和1不是素数
//    }
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            return 0;  // 如果能被 i 整除，则不是素数
//        }
//    }
//    return 1;  // 是素数
//}
//
//// 反转数字的函数
//int reverse_number(int n) {
//    int reversed = 0;
//    while (n > 0) {
//        reversed = reversed * 10 + n % 10;
//        n /= 10;
//    }
//    return reversed;
//}
//
//int main() {
//    int start, end;
//
//    printf("请输入两个整数（开始和结束）：");
//    scanf("%d %d", &start, &end);
//
//    printf("在 %d 和 %d 之间的素数，且其反序也是素数有：\n", start, end);
//
//    for (int i = start + 1; i < end; i++) {
//        if (is_prime(i)) {
//            int reversed = reverse_number(i);
//            if (is_prime(reversed)) {
//                printf("%d ", i);
//            }
//        }
//    }
//
//    printf("\n");
//    return 0;
//}




//// 判断是否为素数的函数
//int is_prime(int n) {
//    if (n <= 1) {
//        return 0;  // 0和1不是素数
//    }
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            return 0;  // 如果能被 i 整除，则不是素数
//        }
//    }
//    return 1;  // 是素数
//}
//
//// 反转数字的函数
//int reverse_number(int n) {
//    int reversed = 0;
//    while (n > 0) {
//        reversed = reversed * 10 + n % 10;
//        n /= 10;
//    }
//    return reversed;
//}
//
//int main() {
//    printf("在 0 和 10000 之间的素数，且其反序也是素数有：\n");
//
//    for (int i = 2; i < 10000; i++) {  // 从 2 开始，因为 0 和 1 不是素数
//        if (is_prime(i)) {
//            int reversed = reverse_number(i);
//            if (is_prime(reversed)) {
//                printf("%d ", i);
//            }
//        }
//    }
//
//    printf("\n");
//    return 0;
//}


#include <stdio.h>
#include <math.h>

//// 判断是否为素数的函数
//int is_prime(int n) {
//    if (n <= 1) {
//        return 0;  // 0和1不是素数
//    }
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            return 0;  // 如果能被 i 整除，则不是素数
//        }
//    }
//    return 1;  // 是素数
//}
//
//// 反转数字的函数
//int reverse_number(int n) {
//    int reversed = 0;
//    while (n > 0) {
//        reversed = reversed * 10 + n % 10;
//        n /= 10;
//    }
//    return reversed;
//}
//
//int main() {
//    int M, N;
//    int found = 0;  // 用于标记是否找到了真素数
//
//    // 输入 M 和 N
//    scanf("%d %d", &M, &N);
//
//    // 找出 M 和 N 之间的所有真素数
//    for (int i = M; i <= N; i++) {
//        if (is_prime(i)) {
//            int reversed = reverse_number(i);
//            if (is_prime(reversed)) {
//                if (found) {
//                    printf(",%d", i);  // 如果已经找到过真素数，打印逗号分隔
//                }
//                else {
//                    printf("%d", i);  // 第一个真素数时，不加逗号
//                }
//                found = 1;
//            }
//        }
//    }
//
//    // 如果没有找到真素数
//    if (!found) {
//        printf("No");
//    }
//
//    printf("\n");
//    return 0;
//}


int is_prime(int n)
{
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i < sqrt(n); ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int reverse_number(int n)
{
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}
int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    int found = 0;

    for (int i = M; i <= N; i++)
    {
        if (is_prime(i)) {
            int reversed = reverse_number(i);
            if (is_prime(reversed)) {
                if (found) {
                    printf(",%d", i);
                }
                else {
                    printf("%d", i);
                }
                found = 1;
            }
        }
    }
    if (!found) {
        printf("NO");
    }
    printf("\n");
    return 0;
}