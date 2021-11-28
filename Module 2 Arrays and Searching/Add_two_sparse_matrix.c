/* logical error found, not completed */
  include<stdio.h>
int main(){
int i=1,j=1,k=1,m ,n, a[10][3], b[10][3] , c[10][3];

printf("Enter the num of rows of matrix A");
scanf("%d", &m);
printf("Enter the matrix A");
for(i=0; i<m;i++)
	for(j=0;j<3;j++)
	    {
		    scanf("%d", &a[i][j]);
		}
printf("Enter the num of rows of matrix B");
scanf("%d", &n);
printf("Enter the matrix B");
for(i=0; i<m;i++)
	for(j=0;j<3;j++)
	    {
		    scanf("%d", &b[i][j]);
		}


if( a[0][0] == b[0][0] && a[0][1] == b[0][1] )
{
	while(i<m && j<n)
	{
		if(a[i][0]==b[j][0] && a[i][1]==b[j][1])
		{

			c[k][0]=a[i][0];
			c[k][1]=a[i][1];
			c[k][2]=a[i][2]+b[i][2];
			i++;j++;k++;
		}
		else if( a[i][0]==a[j][0])
		   {
			
			if(a[i][1]<b[i][1])
			    {
				c[k][0]=a[i][0];
				c[k][1]=a[i][1];
			    c[k][2]=a[i][2];
				i++;k++;
				}
			else{
				c[k][0]=b[j][0];
				c[k][1]=b[j][1];
			    c[k][2]=b[j][2];
				j++;k++;
				}
			}
					
		else
		{
			if(a[i][0]<b[i][0])
			{
				c[k][0]=a[i][0];
				c[k][1]=a[i][1];
			    c[k][2]=a[i][2];
				i++;k++;
				
			}
			else{
			    c[k][0]=b[j][0];
				c[k][1]=b[j][1];
			    c[k][2]=b[j][2];
				j++;k++;
			    
			}
		}
		while(i<m)
		{
		c[k][0]=a[i][0];
		c[k][1]=a[i][1];
		c[k][2]=a[i][2];
		i++;k++;
		}
	    while(j<n)
	    {
		c[k][0]=b[j][0];
		c[k][1]=b[j][1];
		c[k][2]=b[j][2];
		j++;k++;
		}
		
	c[0][0]=a[0][0];
	c[0][1]=a[0][1];
	c[0][2]=k-1	;
	}

}
else
    {
        printf("\nADDITION NOT POSSIBLE");
    }
       

printf("The matrix A+B");
printf("\nrow\tcolumn\tvalue\n");
for(i=1; i<k; i++)
	
	    {
		    printf("\n %d \t %d \t %d", c[i][0], c[i][1], c[i][2]);
		}
return 0;
}
