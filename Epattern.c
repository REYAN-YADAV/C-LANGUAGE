// WAP to print  E patern
  /*
          * * * * *
          *
          * * * * *
          * 
          * * * * *
            
  */
 #include<stdio.h>
 int main()
{
    int i, j;
    for(i=1; i<=5; i++)    // for row 
    {
        for(j=1; j<=5; j++)  // for cloumn
        {
            if(i==1 ||  i==3 || i==5 ||j==1)
                printf(" * ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}