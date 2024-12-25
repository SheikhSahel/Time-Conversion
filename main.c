#include <stdio.h>
int main()
{
    int Sec, H, M, S;

    printf("Enter Seconds: ");
    scanf("%d", &Sec);

    H = (Sec/3600);
    M = (Sec -(3600*H))/60;
    S = (Sec -(3600*H)-(M*60));

    printf("Hours:Minutes:Seconds = %d:%d:%d\n",H,M,S);

    return 0;
}
