/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int Y, M;
    scanf("%d %d", &Y, &M);
    if (M == 4 || M == 6 || M == 9 || M == 11)
        printf("30");
    else if (M == 2)
    {
        if ((Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0)
            printf("29");
        else
            printf("28");
    }
    else
        printf("31");
    return 0;
}