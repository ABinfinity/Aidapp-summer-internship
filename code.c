#include<stdio.h>
int main()
{
    int n,i,j,temp=0,a[20],count=0;
    int h=100;//health
    int inj=1;//injuries
    scanf("%d",&n);//no. of elements
    for(i=0;i<n;++i)
    {
        scanf("%d",&a[i]);//sequence array
    }

    for(i=0;i<n;++i)//sorting the array
    {
        for(j=i;j<n;++j)
            if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
     for(i=0;i<n;++i)//counting the no. of monkeys we can fight
    {
     if(h>0 && inj<1000000)
     {
         h-=a[i];
         inj*=a[i];
         count++;
         
     }
    }

    printf("\n%d",count-1); //printing the count
return 0;
}
