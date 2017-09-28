#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
int main (){
double temperature, temperature1, temperature2;
int scale;
printf("$ tconvert ");
scanf("%lf\n", &temperature);
scale = getchar();
if (scale == 'C') {
temperature1 = temperature * 1.8 + 32;//переводим Цельсии в Фаренгейт
temperature2 = temperature + 273.15;//переводим Цельсии в Кельвины
printf("%.2lf", temperature1, " F\n");
printf(" F\n");
printf("%.2lf", temperature2, " K\n");
printf(" K\n");
}
else if (scale == 'F') {
temperature1 = (temperature - 32) / 1.8;//переводим Фаренгейты в Цельсии
temperature2 = (temperature - 32) / 1.8 + 273.15;//переводим Фаренгейты в Кельвины
printf("%.2lf", temperature1, " C\n");
printf(" C\n");
printf("%.2lf", temperature2, " K\n");
printf(" K\n");
}
else if (scale == 'K') {
temperature1 = temperature - 273.15;//переводим Кельвины в Цельсии
temperature2 = 9*(temperature -273.15)/5 + 32;//переводим Кельвины в Фаренгейты
printf("%.2lf", temperature1, " C\n");
printf(" C\n");
printf("%.2lf", temperature2, " F\n");
printf(" F\n");
}
else {
printf("%.2lf", temperature);
printf(" C:\n");
temperature1 = temperature * 1.8 + 32;//переводим Цельсии в Фаренгейт
temperature2 = temperature + 273.15;//переводим Цельсии в Кельвины
printf("%.2lf", temperature1, " F\n");
printf(" F\n");
printf("%.2lf", temperature2, " K\n");
printf(" K\n");
printf("\n");

printf("%.2lf", temperature);
printf(" F:\n");
temperature1 = (temperature - 32) / 1.8;//переводим Фаренгейты в Цельсии
temperature2 = (temperature - 32) / 1.8 + 273.15;//переводим Фаренгейты в Кельвины
printf("%.2lf", temperature1, " C\n");
printf(" C\n");
printf("%.2lf", temperature2, " K\n");
printf(" K\n");
printf("\n");

printf("%.2lf", temperature);
printf(" K:\n");
temperature1 = temperature - 273.15;//переводим Кельвины в Цельсии
temperature2 = 9*(temperature -273.15)/5 + 32;//переводим Кельвины в Фаренгейты
printf("%.2lf", temperature1, " C\n");
printf(" C\n");
printf("%.2lf", temperature2, " F\n");
printf(" F\n");
}
return 0;
}
