#include<stdio.h>

int main(){

    int i=1;
    float euler=1, chk=1;     // e = 1 + 1/1! + 1/2! + 1/3! + ..... = 1 + 1/1 + 1/(1*2) + 1/(1*2*3) + ...

    while(chkpt > 0.00001)
    {
        chk=chk/i;
        euler=euler+chk                   ;
        i++;
    }

    printf("Value of Euler's number is : %f",euler);

    return 0;
}
