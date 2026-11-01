#include <stdio.h>

struct Student {

 int roll;
 char name[20];
 float marks;

};

int main() {

 struct Student s[50];
 int n, i, top = 0;

 scanf("%d", &n);
 for (i = 0; i < n; i++)
 scanf("%d %s %f", &s[i].roll,
 s[i].name, &s[i].marks);

 for (i = 0; i < n; i++) {
    printf("%d %s %.1f\n", s[i].roll,
    s[i].name, s[i].marks);
    if (s[i].marks > s[top].marks)
        top = i;
 }
 printf("Topper: %s\n", s[top].name);
 return 0;

}
