#include <iostream>

// pass by value
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

// pass by adress
void swap(int *x, int *y)
{
    int tmp{0};
    tmp = *x;
    *x = *y;
    *y = tmp;
}

// pass by reference
void swap(int &x, int &y)
{
    int tmp{0};
    tmp = x;
    x = y;
    y = tmp;
}

// array as parameter
void fn_arr(int arr[], unsigned int n) // SAME AS void fn_arr(int *arr)
{
    for (unsigned int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 10;
    }
}

struct Rectangle
{
    int width;
    int height;
};

void fn_struct(Rectangle r)
{
    r.height *= 10;
    r.width *= 10;
}

void fn_struct_ptr(Rectangle *r)
{
    r->height *= 10;
    r->width *= 10;
}

int main()
{

    int a = 10, b = 20;
    int m = max(a, b);
    std::cout << "m is " << m << '\n';

    // ----------------------------------

    // pass by address
    int n1 = 10, n2 = 20;
    swap(&n1, &n2);
    std::cout << "n1: " << n1 << '\n'; // 20
    std::cout << "n2: " << n2 << '\n'; // 10

    // ----------------------------------

    // pass by reference
    int x = 10, y = 20;
    swap(x, y);
    std::cout << "x: " << x << '\n'; // 20
    std::cout << "y: " << y << '\n'; // 10

    // ----------------------------------

    // arrays always passed by address
    int arr[] = {3, 5, 7, 11, 13};
    unsigned int n = sizeof(arr) / sizeof(arr[0]);
    fn_arr(arr, n);
    for (auto e : arr)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;

    // ----------------------------------

    // Struct is passed by value by default
    Rectangle rect = {10, 5};

    fn_struct(rect);                                 // pass by value
    std::cout << "Height : " << rect.height << '\n'; // 5
    std::cout << "Width : " << rect.width << '\n';   // 10

    fn_struct_ptr(&rect);                            // pass by address
    std::cout << "Height : " << rect.height << '\n'; // 5
    std::cout << "Width : " << rect.width << '\n';   // 10

    // ----------------------------------
    return 0;
}
