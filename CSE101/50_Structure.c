#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    long int regno;
    char stay;
    float cgpa;
};
int main()
{
    struct student s;
    printf("enter the name of the student ");
    scanf("%s",s.name);
    printf("enter the registation number ");
    scanf("%ld",&s.regno);
    printf("student says inside the campus (y/n) ");
    getchar();
    s.stay=getchar();
    printf("enter the current cgpa ");
    scanf("%f",&s.cgpa);
    
    printf("details entered for the student are as follows\n");
    printf("Name : %s\n",s.name);
    printf("Registration number : %ld\n",s.regno);
    printf("Stays inside the campus : %c\n",s.stay);
    printf("Current CGPA : %f",s.cgpa);
    return 0;
}