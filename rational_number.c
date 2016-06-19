#include<stdio.h>
#include<conio.h>
typedef struct {
 		int numerator;
 		int denominator;
 	
 	}rational;
 	rational makerational (int, int);
 	rational add_rational (rational,rational);
 	rational mul_rational (rational, rational);
 	rational equal_rational (rational, rational);
 	void main()
 	{
 		rational r1 = makerational (1,2);
 		rational r2 = makerational (2,4);
 		rational sum = add_rational (r1, r2);
 		printf("sum is %d/%d\n",sum.numerator,sum.denominator);
 		rational mul = mul_rational (r1, r2);
 		printf("Mul is %d/%d\n",mul.numerator,mul.denominator);
 		rational equal = equal_rational (r1,r2);
 	   
 		}
 		
 	rational makerational (int a, int b)
 	{
 		rational r_number;
 		r_number.numerator = a;
 		r_number.denominator =b;
 		
 		if(b==0)
 		{
 			
 			printf("no operation");
 			exit(0);
 		}
 		else
 		{
 		return r_number;
 		}	
 	}
 	rational add_rational (rational r1, rational r2)
 	{
 		rational result;
 		result.numerator = (r1.numerator*r2.denominator)+(r2.numerator*r1.denominator);
 		result.denominator = (r1.denominator*r2.denominator);
 		
 		return result;
 	}
 	rational mul_rational (rational r1, rational r2)
 	{
 		rational result;
 		result.numerator = (r1.numerator*r2.numerator);
 		result.denominator = (r1.denominator*r2.denominator);	
 		return result;
 	}
 	rational equal_rational (rational r1, rational r2)
 	{
 		rational result;
 		
 		if ((r1.numerator * r2.denominator) == (r1.denominator * r2.numerator))
 		{
 			printf("First rational number = Second rational number\n");
 		}	
 		else
 		{
 			printf("Unqeual rational numbers\n");
 		}
 		return result;
 	}
