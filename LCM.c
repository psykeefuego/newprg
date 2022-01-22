#include <stdio.h>
int LCM(int,int);
int main() 
    {
    int n1, n2,res;
    printf("\n Input first number: ");
    scanf("%d",&n1);
    printf("\n Input second number: ");
    scanf("%d",&n2);
    res=LCM(n1,n2);
    printf("\n LCM of %d and %d is: %d",n1,n2,res);
    return 0;
	}
 int LCM(a,b)
    {
    int lcm,fact=1;
    lcm = (a > b) ? a : b;
        while (fact>0)
	    {
        if (lcm % a == 0 && lcm % b == 0) 
		{
            return lcm;
            break;
        }
        lcm++;
	    }
	}
    
