#include<iostream.h>
#include<conio.h>
class matrix
{
  private:
    int x,y,m,n,i,j,k;
    int a[5][5],b[5][5],c[5][5];
  public:
     void get_xy();
     void get_mn();
     void get_a();
     void get_b();
     void multiply();
     void display_c();
};
void matrix::get_xy()
{
 cout<<"enter the order of matrix A:";
 cin>>x>>y;
}
void matrix::get_mn()
{
 cout<<"enter the order of matrix B:";
 cin>>m>>n;
}
void matrix::get_a()
{
 cout<<"enter the elements of A:\n";
 for(i=0;i<x;i++)
  {
   for(j=0;j<y;j++)
    {
     cin>>a[i][j];
    }
  }
}
void matrix::get_b()
{
 cout<<"enter the elements of B:\n";
 for(i=0;i<m;i++)
  {
  for(j=0;j<n;j++)
   {
    cin>>b[i][j];
   }
  }
}
void matrix::multiply()
{
 if(y==m)
  {
   for(i=0;i<x;i++)
    {
     for(j=0;j<n;j++)
      {
       c[i][j]=0;
       for(k=0;k<m;k++)
	{
	 c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
	}
      }
    }
  }
else
 {
  cout<<"multiplication is not possible:";

 }
}
void matrix::display_c()
{
 if(y==m)
 {
 cout<<"multiplication is:\n" ;
 for(i=0;i<x;i++)
  {
   for(j=0;j<n;j++)
    {
     cout<<c[i][j]<<"\t";
    }
   cout<<endl;
  }
 }
}
void main()
{
 clrscr();
 matrix m;
 m.get_xy();
 m.get_mn();
 m.get_a();
 m.get_b();
 m.multiply();
 m.display_c();
 getch();
}


/*
-----output-----
enter the order of matrix A:3 3
enter the order of matrix B:3 3
enter the elements of A:
1 2 3
4 5 6
7 8 9
enter the elements of B:
1 2 3
4 5 6
7 8 9
multiplication is:
30      36      42
66      81      96
102     126     150
*/

/*
-------output-------
enter the order of matrix A:3 3
enter the order of matrix B:2 2
enter the elements of A:
1 2 3
4 5 6
7 8 9
enter the elements of B:
1 2
3 4
multiplication is not possible:
*/

















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

