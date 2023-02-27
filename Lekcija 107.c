#include <stdio.h>

int main()
{
    int num;
    printf("Unesi pozitivan ili negativan ceo broj: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Apsolutna vrednost od %d je |%d|\n", num, (-1) * num);
    else
        printf("Apsolutna vrednost od %d je |%d|\n", num, num);

    return 0;
}
