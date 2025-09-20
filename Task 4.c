#include <stdio.h>
int main()
{
    int withdraw=0;
    printf("Enter withdrawal amount: \n");
    scanf("%d", &withdraw);
    if(withdraw<=500 && withdraw%20==0)
    {
        printf("Withdrawal Approved\n");
    }
    else
    {
        printf("Withdrawal Denied\n");
    }
    return 0;
}

