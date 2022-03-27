#include "func.h"
float divide(int x, int y)  
{    
    if (y == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &y);        
    }  
    return (float)x / y;    
     
}  