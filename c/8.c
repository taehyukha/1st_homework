/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int n;
    scanf("%d", &n);
    int sum = 0, factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        factorial *= i;
    }
    printf("%d\n%d", sum, factorial);
    return 0;
}