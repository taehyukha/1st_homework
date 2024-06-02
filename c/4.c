/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int n;
    scanf("%d", &n);
    if (n >= 90 && n < 100)
        printf("A");
    else if (n >= 80 && n < 90)
        printf("B");
    else if (n >= 70 && n < 80)
        printf("C");
    else if (n >= 60 && n < 70)
        printf("D");
    else
        printf("F");
    return 0;
}