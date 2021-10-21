//Name- Indranil Naskar,Roll no-108,Sec-B,University Roll-10900220109
//Matrix Multiplication using function
#include<stdio.h>
#include<conio.h>
int main()
{
int matcalc(int a[100][100],int b[100][100],int ans[100][100],int n11,int n21,int n31);
int i,j,k;
int n1,n2,n3;
int a[100][100], b[100][100];
int ans[100][100];  
printf("The array will be a[n1][n2] and b[n2][n3] \n");
printf("Enter the value of n1: \n");
scanf("%d",&n1);
printf("Enter the value of n2: \n");
scanf("%d",&n2);
printf("Enter the value of n3: \n");
scanf("%d",&n3);
for(i=0;i<n1;i++)
{
    for(j=0;j<n2;j++)
    {
        printf("Enter value for a[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
    }
}
printf("First array is\n");
for(i=0;i<n1;i++)
{
    for(j=0;j<n2;j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
}

printf("Enter the value of second array \n");
for(i=0;i<n2;i++)             
{
    for(j=0;j<n3;j++)
    {
       printf("Enter value for b[%d][%d]:",i,j);
       scanf("%d", &b[i][j]);
    }
}
printf("Second array is \n");
for(i=0;i<n2;i++)             
{
    for(j=0;j<n3;j++)
    {
      printf("%d\t",b[i][j]);
    }
   printf("\n"); 
}
//initialing the array with 0                     
for(i=0;i<n1;i++)
{
    for(j=0;j<n3;j++)
    {
        ans[i][j]=0;
    }
}
matcalc(a,b,ans,n1,n2,n3);
return 0;
}

//matrix multiplication

matcalc(int a[100][100],int b[100][100],int ans[100][100],int n11,int n21,int n31)
{
  int x,y,z;
 for(x=0;x<n11;x++)                 
{
    for(y=0;y<n31;y++)
    {
        for(z=0;z<n21;z++)
        {
            ans[x][y]+=(a[x][z]*b[z][y]);
        }
    }
}

printf("After Multiplication: \n");

for(x=0;x<n11;x++)                //output of ans array
{
    for(y=0;y<n31;y++)
    {
        printf("%d\t",ans[x][y]);
    }
    printf("\n");
}
}
