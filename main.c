#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
float C_F (float x)
{
return x*5.0/9.0+32;
}
float F_C (float x)
{
return (x-32)*5.0/9.0;
}
float C_K (float x)
{
return x+273.15;
}
float K_C (float x)
{
return x-273.15;
}

int main(int argc, char *argv[]){
float temp = atof(argv[1]);
printf("\n");
if(argc==3)
{
    switch (*argv[2])
    {
        case 'C':
            if (temp < -273.15)
                printf("Temperature < absolute zero for Celsius!\n");
            else
                printf("C_F(temp)=%.2f F\n", C_F(temp));
                printf("C_K(temp)=%.2f K\n", C_K(temp));
                break;
        case 'F':
            if (temp < -459.67)
                printf("Temperature < absolute zero for Fahrenheit!\n");
            else
                printf("F_C(temp)=%.2f C\n", F_C(temp));
                printf("C_K(F_C(temp)=%.2f K\n", C_K(F_C(temp)));
                break;
        case 'K':
            if (temp < 0)
                printf("Temperature < absolute zero for Kelvin!\n");
            else
                printf("K_C(temp)=%.2f C\n", K_C(temp));
                printf("C_F(K_C(temp)=%.2f F", C_F(K_C(temp)));
                break;
    }
}
else

{
    printf("temp=%.2f", temp, "C:\n");
    if (temp < -273.15)
        printf("Temperature < absolute zero for Celsius!\n");
    else
        printf("C_F=%.2f F\n", C_F);
        printf("C_K=%.2f K\n", C_K);
    printf("temp=%.2f", temp, "F:\n");
    if (temp < -459.67)
        printf("Temperature < absolute zero for Fahrenheit!\n");
    else
        printf("F_C=%.2f C\n", F_C);
        printf("C_K(F_C)=%.2f K\n", C_K(F_C));
    printf ("%.2f", temp, "K:\n");
    if (temp < 0)
        printf("Temperature < absolute zero for Kelvin!\n");
    else
        printf("K_C=%.2f C\n", K_C);
        printf("C_F(K_C)=%.2f F", C_F(K_C)));
}
return 0;
}
