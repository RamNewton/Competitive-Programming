#include <stdio.h> 
int fuc(int arr[]);
int fun() 
{ 
static int num = 16; 
return num--; 
} 

int main() 
{ 
for(fun(); fun(); fun()) 
printf("%d ", fun()); 
return 0; 
}
