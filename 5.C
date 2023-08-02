#include<stdio.h>
#include<conio.h>
void  main() {
    int n,factorial=1,i;
    clrscr();
    // Collect Data Form User
    printf("Enter the value of N: ");
    scanf("%d", &n);

    //start loop process

    for (i=1;i<=n;i++)
    {
	factorial *= i;
    }

    printf("Factorial of %d is: %d\n", n, factorial);

    getch();
}
