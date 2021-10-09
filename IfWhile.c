/****************************************************************************************
Questo codice andrà in forma ridotta per venire incontro alle mie capacità intellettive.

*****************************************************************************************/

#include <stdio.h>

int main()
{
    int c,sum;
    printf("Quando hai tempo digita un numero\n");
    scanf("%d",&c);
    c++;
    sum = (c + 20) * 2;
    printf("con le tue mani pigre hai digitato %d \n" , sum);

    if(sum<10)
        printf("minore di 10\n");
    else if(sum>10)
        printf("è maggiore di 10\n");
    else
        printf("è uguale a 10\n");

    do{
        if (sum < 10)
            sum++;
        else if (sum > 10)
            sum--;
    }
    while (sum!=10);
    printf("ora sum=%d",sum);
    return 0;
}
