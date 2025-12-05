#include <stdio.h>
#include <math.h>

//Q1
// int main()
// {
//     int a, b;
//     printf("Enter two numbers a and b: ");
//     scanf("%d %d", &a, &b);

//     if (a == b)
//     {
//         printf("Given numbers are equal");
//     }
//     else{
//         printf("Given numbers are not equal");
//     }
//     return 0;
// }

//Q2
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n % 2 == 0)
//     {
//         printf("Given number is even");
//     }
//     else{
//         printf("Given number is odd");
//     }
//     return 0;
// }

//Q3
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if (n > 0)
//     {
//         printf("Given number is positive");
//     }
//     else
//     {
//         printf("Given number is negative");
//     }
//     return 0;
// }

//Q4
// int main()
// {
//     int n;
//     printf("Enter a year: ");
//     scanf("%d", &n);

//     if (n % 400 == 0 || (n % 100 != 0 && n % 4 == 0))
//     {
//         printf("Given year is a leap year");
//     }
//     else{
//         printf("Given year is not a leap year");
//     }
//     return 0;
// }

//Q5
// int main()
// {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);

//     if (age >= 18)
//     {
//         printf("Eligible to vote");
//     }
//     else{
//         printf("Not eligible to vote");
//     }
//     return 0;
// }

//Q6
// int main()
// {
//     int m, n;
//     printf("Enter the value of m: ");
//     scanf("%d", &m);

//     if (m > 0)
//     {
//         n = 1;
//     }
//     else if (m == 0)
//     {
//         n = 0;
//     }
//     else{
//         n = -1;
//     }
//     printf("%d", n);
//     return 0;
// }

//Q7
// int main()
// {
//     int height;
//     printf("Enter your height in centimeters: ");
//     scanf("%d", &height);

//     if (height >= 170 && height <= 190)
//     {
//         printf("Average height");
//     }
//     else if (height < 170)
//     {
//         printf("Short height");
//     }
//     else{
//         printf("Tall");
//     }
//     return 0;
// }

//Q8
// int main()
// {
//     int a, b, c;
//     printf("Enter three values: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a > b)
//     {
//         if (a > b)
//           printf("%d", a);
//         else
//           printf("%d", c);
//     }
//     else
//     {
//         if (b > c)
//           printf("%d", b);
//         else
//           printf("%d", c);
//     }
//     return 0;
// }

//Q9
// int main()
// {
//     int x, y;
//     printf("Enter the x and y coordinates: ");
//     scanf("%d %d", &x, &y);

//     if (x > 0 && y > 0){
//        printf("1st Quadrant\n");
//     }
//     else if (x < 0 && y > 0){
//        printf("2nd Quadrant\n");
//     }
//     else if (x < 0 && y < 0){
//        printf("3rd Quadrant\n");
//     }
//     else{
//        printf("4th Quadrant\n");
//     }
    
//     return 0;
// }

// Q10
// int main()
// {
//     int physics, maths, chemistry, total;
//     printf("Enter marks obtained in physics, maths and chemistry: ");
//     scanf("%d %d %d", &physics, &maths, &chemistry);
//     total = physics + maths + chemistry;

//     if ((physics >= 55 && maths >= 65 && chemistry >= 50) && (total >= 190 || (physics + maths) >= 140))
//     {
//         printf("Eligible for admission");
//     }
//     else
//     {
//         printf("Ineligible for admission");
//     }
//     return 0;
// }

// Q11
// int main()
// {
//     int a, b, c, disc, root1, root2;
//     printf("Enter a, b and c: ");
//     scanf("%d %d %d", &a, &b, &c);

//     disc = (b * b) - (4 * a * c);

//     if (disc < 0)
//     {
//         printf("Imaginary roots");
//     }
//     else if (disc == 0)
//     {
//         printf("Two equal roots\n");
//         root1 = (-b/(2 * a));
//         printf("Root 1 = Root 2 = %d", root1);
//     }
//     else{
//         printf("Two equal and Unique roots\n");
//         root1 = ((-b + sqrt(disc)) / (2 * a));
//         root2 = ((-b - sqrt(disc)) / (2 * a));

//         printf("Root 1 = %d\nRoot 2 = %d", root1, root2);
//     }
//     return 0;
    
// }