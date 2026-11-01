#include <stdio.h>

struct Employee {

 int id;
 char name[20];
 float salary;

};

int main() {
 struct Employee e[50];
 int n, i, hi = 0;
 float total = 0;
 printf("Number of employees:");
 scanf("%d", &n);
 for (i = 0; i < n; i++) {
    printf("Enter id name salary:");
    scanf("%d %s %f", &e[i].id,e[i].name, &e[i].salary);
    total += e[i].salary;

    if (e[i].salary > e[hi].salary) {
        hi = i;
    };
 }
 printf("Total: %.2f\n", total);
 printf("Average: %.2f\n", total / n);
 printf("Highest paid: %s\n", e[hi].name);
 return 0;
}