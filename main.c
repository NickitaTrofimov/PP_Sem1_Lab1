#include <stdio.h>
#include <stdlib.h>
float C_F (float x)
{
return x*9.0/5.0+32;
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
            {
                printf("Temperature < absolute zero for Celsius!\n");
            }
            else
            {
                printf("%.2f F\n", C_F(temp));
                printf("%.2f K\n", C_K(temp));
            }
                break;
        case 'F':
            if (temp < -459.67)
            {
                printf("Temperature < absolute zero for Fahrenheit!\n");
            }
            else
            {
                printf("%.2f C\n", F_C(temp));
                printf("%.2f K\n", C_K(F_C(temp)));
            }
                break;
        case 'K':
            if (temp < 0)
            {
                printf("Temperature < absolute zero for Kelvin!\n");
            }
            else
            {
                printf("%.2f C\n", K_C(temp));
                printf("%.2f F", C_F(K_C(temp)));
            }
                break;
    }
}

else
{
    printf("%.2f C:\n", temp);
    if (temp < -273.15)
    {
        printf("Temperature < absolute zero for Celsius!\n");
    }
    else
    {
        printf("%.2f F\n", C_F(temp));
        printf("%.2f K\n", C_K(temp));
    }
    printf("%.2f F:\n", temp);
    if (temp < -459.67)
    {
        printf("Temperature < absolute zero for Fahrenheit!\n");
    }
    else
    {
        printf("%.2f C\n", F_C(temp));
        printf("%.2f K\n", C_K(F_C(temp)));
    }
    printf ("%.2f K:\n", temp);
    if (temp < 0)
    {
        printf("Temperature < absolute zero for Kelvin!\n");
    }
    else
    {
        printf("%.2f C\n", K_C(temp));
        printf("%.2f F", C_F(K_C(temp)));
    }
}
return 0;
}
