#include <stdio.h>

/* static変数で合計値を保持する関数 */
int add_to_total(int value)
{
    static int total = 0;

    /* 関数終了後も値が保持され、次回呼び出し時に引き継がれる */
    total += value;

    return total;
}

int main(void)
{
    int input_number;
    int result = 0;

    scanf("%d", &input_number);

    if (input_number < 1 || input_number > 10) {
        printf("NG");
        return 0;
    }

    for (int current_number = 1; current_number <= input_number; current_number++) {
        result = add_to_total(current_number * 2);
    }

    printf("%d", result);

    return 0;
}