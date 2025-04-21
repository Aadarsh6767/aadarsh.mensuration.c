#include <stdio.h>
#include <windows.h>
int main()
{
    int choice, radius, side, height, base, length1,length2,length3;
    char restart = 'Y';
    printf("Press 1 for Circle\n Press 2 for Square\n Press 3 for Triangle\n");
    scanf("%d", &choice);
        Sleep(1000);
printf("You choose %d\n", choice);
    // for circle
    if (choice == 1)
    {
        printf("Press 1 for circumference of Circle\n Press 2 for area of Circle \n");
        scanf("%d", &choice);
           Sleep(1000);

        if (choice == 1)
        {
            printf("You choose %d for Circle\n", choice);
              printf("Enter radius of circle\n");
        scanf("%d", &radius);
            printf("Circumference of circle is %f\n", 2 * 3.14 * radius);
        }
        else if (choice == 2)
        {
            printf("You choose %d\n", choice);

            printf("Enter radius of circle\n");
      scanf("%d", &radius);
            printf("Area of circle is %f\n", 3.14 * radius * radius);
        }
        else
        {
            printf("Invalid choice\n");
        }
        // for square
    }
    else if (choice == 2)
    {
        printf("You choose %d for Square\n", choice);
        printf("Press 1 for area of square\n Press 2 for perimeter of square\n");
        scanf("%d", &choice);
            Sleep(1000);
            if (choice == 1)
            {
            printf("Enter side of square\n");
            scanf("%d", &side);
            printf("Area of square is %d\n", side * side);
        }
        else if (choice == 2)
        {
            printf("You choose %d\n", choice);
                 printf("Enter side of square\n");
            scanf("%d", &side);
            printf("Perimeter of square is %d\n", 4 * side);
        }
        else
        {
            printf("Invalid choice\n");
        }
        // for triangle
    }
    else if (choice == 3)
    {
        printf("Press 1 for area of triangle\n Press 2 for perimeter of triangle\n");
        scanf("%d", &choice);
        printf("You choose %d for Triangle\n", choice);
            Sleep(1000);
            if (choice == 1)
            {
                printf("Enter base and height of triangle\n");
                        scanf("%d %d", &base, &height);
            printf("Area of triangle is %f\n", 0.5 * base * height);
        }
        else if (choice == 2)
        {
            printf("You choose %d\n", choice);
            printf("Enter side of triangles\n");
            scanf("%d %d %d", &length1, &length2, &length3);
            printf("Perimeter of triangle is %d\n", length1 + length2 + length3);
        }
        else
        {
            printf("Invalid choice\n");
        }
        Sleep(1000);
    }
    else
    {
        printf("Invalid choice\n");
    }
    printf("Do you want to restart the program? (Press Y for Yes, N for No)\n");
        scanf(" %c", &restart); // Space before %c is intentional to ignore whitespaces
        Sleep(1000);
        if (restart == 'Y' || restart == 'y') {
            main();
        } else {
            printf("Exiting the program.\n");
        }
    return 0;
}