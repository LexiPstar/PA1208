#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

//// �ж��Ƿ�Ϊ�����ĺ���
//int is_prime(int n) {
//    if (n <= 1) {
//        return 0;  // 0��1��������
//    }
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            return 0;  // ����ܱ� i ��������������
//        }
//    }
//    return 1;  // ������
//}
//
//// ��ת���ֵĺ���
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
//    printf("������������������ʼ�ͽ�������");
//    scanf("%d %d", &start, &end);
//
//    printf("�� %d �� %d ֮������������䷴��Ҳ�������У�\n", start, end);
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




//// �ж��Ƿ�Ϊ�����ĺ���
//int is_prime(int n) {
//    if (n <= 1) {
//        return 0;  // 0��1��������
//    }
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            return 0;  // ����ܱ� i ��������������
//        }
//    }
//    return 1;  // ������
//}
//
//// ��ת���ֵĺ���
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
//    printf("�� 0 �� 10000 ֮������������䷴��Ҳ�������У�\n");
//
//    for (int i = 2; i < 10000; i++) {  // �� 2 ��ʼ����Ϊ 0 �� 1 ��������
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

//// �ж��Ƿ�Ϊ�����ĺ���
//int is_prime(int n) {
//    if (n <= 1) {
//        return 0;  // 0��1��������
//    }
//    for (int i = 2; i <= sqrt(n); i++) {
//        if (n % i == 0) {
//            return 0;  // ����ܱ� i ��������������
//        }
//    }
//    return 1;  // ������
//}
//
//// ��ת���ֵĺ���
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
//    int found = 0;  // ���ڱ���Ƿ��ҵ���������
//
//    // ���� M �� N
//    scanf("%d %d", &M, &N);
//
//    // �ҳ� M �� N ֮�������������
//    for (int i = M; i <= N; i++) {
//        if (is_prime(i)) {
//            int reversed = reverse_number(i);
//            if (is_prime(reversed)) {
//                if (found) {
//                    printf(",%d", i);  // ����Ѿ��ҵ�������������ӡ���ŷָ�
//                }
//                else {
//                    printf("%d", i);  // ��һ��������ʱ�����Ӷ���
//                }
//                found = 1;
//            }
//        }
//    }
//
//    // ���û���ҵ�������
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