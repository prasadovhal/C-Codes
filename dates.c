#include<stdio.h>

int main()
{
 int height, looks, money, car, job;
 int ok_for_chris, ok_for_casey;
 int tall,verygood_looking,decent_looking, rich, broke, any_car, imported_car,engineer,doctor;
 printf("enter height\t,looks\t,money\t,car\t,job\t");
 scanf("%d %d %d %d %d", &height, &looks, &money, &car, &job);

 // person specification//

 tall = height >= 6*12;
 verygood_looking = looks >=9;
 decent_looking = looks >=5;
 rich = money >= 50000;
 broke = money < 0;
 any_car = car > 0;
 imported_car = car==3;
 engineer = job == 2;
 doctor = job==3;

ok_for_chris = tall && verygood_looking || rich && imported_car || engineer && decent_looking || doctor && decent_looking;
ok_for_casey = decent_looking && any_car || !broke && verygood_looking || doctor;

ok_for_chris? printf("may date chris\n"):printf("may not date chris\n");
ok_for_casey? printf("may date casey\n"):printf("may not date casey\n");

return 0;
}
