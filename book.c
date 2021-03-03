#include <stdio.h>
void f();
void f2();
void f3();

int main()
	{
		f();
		printf("\nBye");
		return 0;
	}
void f()
    {
        f2();
        printf("\ntwo");
        f3();
    }
void f2()
    {
        f3();
        exit(0);
        printf("\nthree");
    }
void f3()
    {
        printf("\none");
    }
	
----------------------------------------------Storage Classes-------------------------
Auto---------------------------------

#include <stdio.h>

int main()
{
    f();
    f();
    f();

}

int f()
    {
        int a=0;
        a++;
        printf("%d\n",a);
    }
-------------------------------------
Auto without Function....................

#include <stdio.h>

int main()
{
    int i;
    for(i=0;i<3;i++)
        {
            int a=0;
            a++;
            printf("%d\n",a);
        }

}
--------------------------------------
---------------------------------return value from funtion without return statement-----------------------
-------------------------------Returning Values with Pointer----
#include <stdio.h>

int main()
{
    int a;
    f(&a);                  //Pass Address
    printf("%d\n",a);
    
}

int f(int *i)                //receive Pointer 
    {
        *i=*i+5;
    }

.....................................................................................................
................................Passing array to Function.....................................
#include <stdio.h>

int main()
{
    int a[110];                         //Define array length
    int i;
    f(a);								//Passing array name only...since array is a pointer
    
    for(i=0;i<100;i++)					//for receiving define array
        {
            
            printf("%d \n",a[i]);
        }
}

int f(int i[])							// receives empty array
    {   
        int j;
        for(j=0;j<100;j++)
        {
            i[j]=j;
        }
    }	
	
	
	-------------------------------------------------------------------------------
	------------------------static/Dynamic Mem Allocation--------------------------
	
	
	#include <stdio.h>

int main()
{
    int i;              //static mem allocation for 1 variable
    int ar[10];         //static mem allocation for 10 cariable
    
    //////////////////////////////////////////////////////////
    
    int *p;
    p=(int*)malloc(sizeof(int));        //Dynamic mem allocation for 1 variable
    
    int *q;
    q=(int*)malloc(sizeof(int)*10)      //Dynamic mem allocation for 10 var
	return 0;
	
}


---------------------------------------------------------------------------------
--------------------matrix-------------------------------------------------------
#include <stdio.h>

int main()
{   
    int a[2][3];                    // static mem allocation
    
    
    
    int **p;
    int row=2;                      //user i/p no of rows
    int col=3;                      //user i/p no of cols
    p=(int *)malloc(sizeof(int)*row);
    for (int i = 0; i < row; i++) 
    {
        p[i]=(int *)malloc(sizeof(int)*col);
    }
            
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            {
                printf("%d\t",p[i][j]);
            }
    }   printf("\n");
}
----------------------------------------------------------------------------------
------------------------------Structures----------------------------------------
#include <stdio.h>
struct emp 
{
    char id[4];
    char company[10];
};

int main()
{
    struct emp e[4];
    int i;
    printf("Enter the details of Employee:");
    for(i=0;i<4;i++)
        {
            scanf("%s",e[i].id);
            scanf("%s",e[i].company);

        }
        
    for(i=0;i<4;i++)
        {
            printf("%s\t",e[i].id);
            printf("%s\n",e[i].company);

        }
    
}

---------------------------------------------------------------------------------------------------
#include <stdio.h>
struct emp
{
    char id[4];
    char company[10];
};
int main()
{
    struct emp *e1;
    e1 = (struct emp *)malloc(sizeof(struct emp)*2);
    strcpy(e1->id,"1");
    strcpy(e1->company,"a");
    printf("%s\t",e1->id);
    printf("%s\n",e1->company);
    
    
}
