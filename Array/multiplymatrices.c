#include <stdio.h>
#define MAX 100
void compute_product(int m,int n);
void print(int matrix[100][100],int m,int n);
int matrix1[MAX][MAX],matrix2[MAX][MAX],matrix3[MAX][MAX],m1,m2,n1,n2;
int main()
{
  int i,j;
      
     printf("\nEnter the no of rows(m1) & column(n1) of matrix 1: ");
  scanf("%d%d",&m1,&n1);
 
  printf("\nEnter the no of rows(m2) & column(n2) of matrix 2: ");
     scanf("%d%d",&m2,&n2);
 
     if(n1!=m2)
     {
            printf("\nMultiplication is not possible !");
            printf("\nCheck for n1 & m2, they are not equal");
     }
     else
     {
 
        printf("\nEnter the elements of matrix 1:\n");
 
        /*taking input for first matrix */
 
        for(i=0;i<m1;i++)
        {
              for(j=0;j<n1;j++)
              {
                    scanf("%d",&matrix1[i][j]);
              }
        }
 
          /*taking input for second matrix */
 
 
           printf("\nEnter the elements of matrix 2: \n");
           for(i=0;i<m2;i++)
           {
                 for(j=0;j<n2;j++)
                 {
                       scanf("%d",&matrix2[i][j]);
                 }
           }
      
           compute_product(n1,m2);
           printf("\nMatrix 1 is: \n");
           print(matrix1,m1,n1);
           printf("\n");
           printf("\nMatrix 2 is: \n");
           print(matrix2,m2,n2);
           printf("\n");
           printf("\nProduct Matrix is: \n");
           print(matrix3,m1,n2);
    }
 
}
void compute_product(int m,int n)
{
  int i,j,k;
  for(i=0;i<m;i++)
  {
        for(j=0;j<n;j++)
        {
              matrix3[i][j]=0;
              for(k=0;k<n;k++)
              {
                       matrix3[i][j]=matrix3[i][j]+matrix1[i][k]*matrix2[k][j];
              }
        }
  }
}
void print(int matrix[100][100],int m,int n)
{
  int i,j;
  for(i=0;i<m;i++)
  {
       for(j=0;j<n;j++)
       {
             printf("%d  ",matrix[i][j]);
       }
       printf("\n");
  }
}