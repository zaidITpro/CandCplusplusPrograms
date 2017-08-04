#include <stdio.h>
int minindex(int x);
int maxindex(int x);
int arr[100],n;
bool check(int x);
int main()
{
      int i,min_index,max_index,x;
      int t,j;
      printf("\nEnter the number of test cases: ");
      scanf("%d",&t);
      for(i=0;i<t;i++)
      {
            printf("\n\nEnter the number of elements in %d test case: ",i+1);
            scanf("%d",&n);
            printf("\nEnter the elements: \n");
            for(j=0;j<n;j++)
            {
                  scanf("%d",&arr[j]);
            }
            printf("\nEnter the element x whose index you have to found: ");
            scanf("%d",&x);
            if(check(x))
            {
                  min_index=minindex(x);
                  max_index=maxindex(x);
                  printf("%d %d",min_index,max_index);
            }
            else
            {
                  printf("-1");
            }
            printf("\n");
      }
      return 0;
}
bool check(int x)
{
     int beg,mid,end;
     beg=0;
     end=n-1;
     if(x<arr[beg] && x>arr[end])
     {
          return false;
     }
     else
     {
           mid=(beg+end)/2;
           while(beg<=end)
           {
                  if(arr[mid]==x)
                  {
                        return true;
                  }
                  else
                  {
                        if(arr[mid]>x)
                        {
                             end=mid-1;
                        }
                        else
                        {
                             beg=mid+1;
                        }
                        mid=(beg+end)/2;
                  }
          }
          return false;
     }
}
int minindex(int x)
{
    int beg,end,mid;
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end)
    {
        if(x==arr[mid] && x>arr[mid-1])
        {
            return mid;
        }
        else
        {
              if(x<=arr[mid])
              {
                    end=mid-1;
              }
              else
              {
                    beg=mid+1;
              }
              mid=(beg+end)/2;
        }
    }
    return -1;
}
int maxindex(int x)
{
      int beg,mid,end;
      beg=0;
      end=n-1;
      mid=(beg+end)/2;
      while(beg<=end)
      {
             if(x==arr[mid] && x<arr[mid+1])
             {
                   return mid;
             }
             else
             {
                   if(x<arr[mid])
                   {
                         end=mid-1;
                   }
                   else
                   {
                         beg=mid+1;
                   }
                   mid=(beg+end)/2;
             }
      }
}