#include<stdio.h>
int add_integers(int a, int b)
{
    
   int Sum= a+b;
   return Sum;
}
void test_add_integers()
{
    if(0== add_integers(0,0))
    printf("Add fucntion works\n");
    else
    printf("function is not working");

      if(30== add_integers(10,20))
    printf("Add function works for positive numbers\n");
    else
    printf("function is not working");

      if(-30== add_integers(-10,-20))
    printf("Add fucntion works for negative nos\n");
    else
    printf("function is not working");

}

int main()
{
    test_add_integers();
    return 0;
}