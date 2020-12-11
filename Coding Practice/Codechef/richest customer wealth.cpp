/*
 01:00 12-12-2020
 Richest Customer Wealth (Leet Code)
 
 Question is quite smple. You will be give a matrix of mxn you will be aske dot find the row wirth the max sum
 The approach that i followed to solve this question is i iterated thrughtevry row and found the sum of each row and compaed it wth max. if max<sum. i rewrote the value of max as sum
*/

#include<stdio.h>
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    
    int max=0;
    for(int i=0;i<accountsSize;i++)
    {
        int sum=0;
        for(int j=0;j<*accountsColSize;j++)
        {
            sum+=accounts[i][j];
        }
        if(max<sum)
            max=sum;
    }
    return max;
}
