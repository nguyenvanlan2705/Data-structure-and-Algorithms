#include <stdio.h>

// int factorial(int n) {
//     static int result = 1;  // Biến static để lưu trữ giá trị giữa các lần đệ quy

//     if (n <= 1) {
//         return result;
//     } else {
//         result *= n;
//         return factorial(n - 1);
//     }
// }

// int main() {
//     int n = 5;
//     int result = factorial(n);
//     printf("Factorial of %d is %d\n", n, result);
//     return 0;
// }
int func(int n)
{
    static int x = 0; // static variables in recursion
    if (n > 0)
    {
        x++;
        
        return func(n - 1) + x;
        printf("%d\n", x);
    }
    
    return 0;
}
int main()
{
    int a = 5;
    printf("%d", func(a));
    return 0;
}
