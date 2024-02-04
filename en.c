/* calculator*/

#include<stdio.h>

int main()
{
    int currNum =1,i=1;
    float sum =1, check = 1, currFact=1;

    do{

        while(i<=currNum)
            currFact*=i++;

        check=1.0/currFact;
        if(check>0.00001)
            sum += check;

        currNum++;
        printf("%f\n",check);

    }while(check>0.00001);

    printf("%f",sum);
}
