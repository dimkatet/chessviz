#include<stdio.h>
main()
{
char a[9][9]={'8','R','N','B','Q','K','D','N','R','7','P','P','P','P','P','P','P','P', '6',' ',' ',' ',' ',' ',' ',' ',' ', '5',' ',' ',' ',' ',' ',' ',' ',' ', '4',' ',' ',' ',' ',' ',' ',' ',' ','3',' ',' ',' ',' ',' ',' ',' ',' ','2','P','P','P','P','P','P','P','P', '1','R','N','B','Q','K','D','N','R',' ','a','b','c','d','e','f','g','h'};
for(int i=0;i<9;i++)
{
for(int j=0;j<9;j++)
{
printf("%c ",a[i][j]);
}
printf("\n");
}
}
