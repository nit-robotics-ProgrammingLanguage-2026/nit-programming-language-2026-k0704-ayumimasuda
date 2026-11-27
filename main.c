#include <stdio.h>

/* 偶数の合計を保持する関数 */
int calculateCumulativeSum(int evenNumber)
{
    /* 関数終了後も値を保持し、次の呼び出しに引き継ぐ */
    static int cumulativeSum = 0;

    cumulativeSum += evenNumber;

    return cumulativeSum;
}

int main(void)
{
    int inputNumber;
    int finalResult = 0;

    scanf("%d", &inputNumber);

    if (inputNumber < 1 || inputNumber > 10) {
        printf("NG");
        return 0;
    }

    for (int currentValue = 1; currentValue <= inputNumber; currentValue++) {
        finalResult = calculateCumulativeSum(currentValue * 2);
    }

    printf("%d", finalResult);

    return 0;
}