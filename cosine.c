#include<stdio.h>
#include<math.h>

const float PI = 3.141593;

int fact(int i)
{
    int factorial =1;
    for(int j=1;j<=i;j++)
    {
        factorial *=j; 
    }

    return factorial;
}

int main()
{
    float val;
    printf("Enter the value of angle in degrees : ");
    scanf("%f",&val);

    float rad = (val * PI)/180;
    float preCos= cos(rad);

    float cosine = 1;
    int i=2;
    float diff;
    do
    {
        int count = 1;
        cosine += (pow(-1,count-1)*((rad*rad))/fact(2*i));
        count++;
        if(preCos>cosine)
            diff = (preCos - cosine);
        else
            diff = -(preCos - cosine);

    } 
    while (diff>=0.000001);

    printf("%f",cosine);

    return 0;
    
    
}