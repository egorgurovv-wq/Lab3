#include <stdio.h>
#include <locale.h>
int main()
{
setlocale(LC_CTYPE, "RUS");
float sm_vklad;
float pr_stav;
float dohod;
float it_sum;
printf("Введите сумму вклада\n");
scanf("%f", &sm_vklad);
printf("Введите процентную ставку\n");
scanf("%f", &pr_stav);
dohod = sm_vklad*pr_stav/100;
it_sum = sm_vklad + dohod;
printf("Доход с вклада: %.1f\n", dohod);
printf("Общая сумма: %.1f", it_sum);
}