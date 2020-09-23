#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
 char name[255];
 char first[255], last[255];
 
 printf("Enter your name: ");
 fgets(name, 255, stdin);
 name[strlen(name)-1] = '\0'; /* remove the newline at the end */
 printf("Enter your first name: ");
 fgets(first, 255, stdin);
 first[strlen(first)-1] = '\0'; /* remove the newline at the end */
 
 printf("Hello %s!\n", name);
 printf("Now enter your last name: ");
 gets(last); /* buf fer overflow? what's that? */
 
 printf("Hello %s %s!\n", first, last);
 return 0;
}
