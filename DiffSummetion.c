/*
Problem statement : 7.5
Accept number from user and return diffrence between summatuion of even and odd digits.
 
 Input : 127   Output : -6  (2 - 8)
 Input : 4522   Output : 3 (8 - 5 )
Input : -5842 Output : 9 (14 - 5)
 Input : 442    Output : 10 (10 - 0)
 Input : 735    Output :  -15 (0 - 15)
 */

#include<stdio.h>

int CountEvenDigits(int iValue)
{
  int eSum = 0;
  int iDigit = 0;
  
  while(iValue != 0)
  {
    iDigit = iValue % 10;
	
	if((iDigit % 2) ==0)
	{
	   eSum = eSum + iDigit;
	}
    iValue = iValue / 10;
  }
  return eSum;
}

int CountOddDigits(int iValue)
{
  int oSum = 0;
  int iDigit = 0;
  
  while(iValue != 0)
  {
    iDigit = iValue % 10;
	
	if((iDigit % 2) !=0)
	{
	 oSum = oSum + iDigit;
	}
    iValue = iValue / 10;
  }
  return oSum;
}

int DiffEvenOdd(int iValue)
{
 int diff1 = 0;
 int diff2 = 0;
 
 diff1 = CountEvenDigits(iValue);
 diff2 = CountOddDigits(iValue);
 
 return diff1-diff2;
 }

int main()
{
 int iNo = 0;
 int iRet = 0;
 
 printf("Enter The Number \n");
 scanf("%d",&iNo);
 
 iRet = DiffEvenOdd(iNo);
 printf("No of digits are : %d",iRet);
 
return 0;
}

/*output

Enter The Number
4522
No of digits are : 3
D:\ProgramTopicWise\LB\ProblemsOnDigits\DiffEvenOddSum>myexe
Enter The Number
-5842
No of digits are : -9
D:\ProgramTopicWise\LB\ProblemsOnDigits\DiffEvenOddSum>myexe
Enter The Number
735
No of digits are : -15
*/