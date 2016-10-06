Лабораторная работа №1
Зание 2: Доказательство перпендикулярности векторов
Соловьёв Дмитрий
Группа Иу-8(14)


#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 

int main() { 

float x1,x2,y1,y2,cos;  // Создаем вещественные переменные

printf("1st vector coordinates:"); // Просим ввести перемменные оператора
scanf("%f %f", &x1, &y1); 
printf("2nd vector coordinates:"); 
scanf("%f %f", &x2, &y2); 
cos=(x1*x2+y1*y2)/(sqrt(x1*x1+y1*y1)*sqrt(x2*x2+y2*y2)); 
if (cos==0) printf("Vectors are perpendikul'arni krch");// Применяем оператор if
else printf("Nu net v obschem"); 
system("pause"); // Используем команду для того, что оставалась командная строка
return 0; // Выводим ответ
}