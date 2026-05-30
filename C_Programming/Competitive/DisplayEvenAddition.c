/*

Accept range from user and display addition of all even numbers in between that range
(Range should contains positive numbers only)

Input  : 23 30
Output : 108

Input  : 10 18 
Output : 70

Input  : -10 2 
Output : Invalid Range

Input  : 90 18
Output : Invalid Range

*/

#include<stdio.h>

int RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
       printf("Invalid Range");
       return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting point : ");
    scanf("%d",&iValue1);

    printf("Enter Ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeDisplayEven(iValue1,iValue2);

    if(iRet != 0)
    {
        printf("Addition is %d",iRet);
    }
    
    return 0;
}

// Time Complexity : O(N)
// Where N >= 0