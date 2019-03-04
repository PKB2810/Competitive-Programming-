#include<stdio.h>
#include<string.h>
#include<stdlib.h>
static int mrow=0,mcol=0,prow=0,pcol=0;

void findm(int row , int col);
void findp(int n,char a[101][101]);
void findpath(char *move[5]);

int main()
{
    int n,i,j,m,count = 0,row_of_m,col_of_m;
  //  static int mrow=0,mcol=0,prow=0,pcol=0;
    char maze[101][101];
    char *move[5];
    printf("Enter n\n");
    scanf("%d",&n);
//    m = n;
    if(n<3 || n > 101)
        exit(0);

    else
       {

            printf("Enter row of m");
            scanf("%d", &row_of_m);

            printf("Enter col of m");
            scanf("%d", &col_of_m);

            printf("Enter val\n");

            for(i=0;i<n;i++)
  //                  for(j=0;j<n;j++)
            //            {
            {
                //if(i == row_of_m)
                  //      *(maze[i] + col_of_m ) = 'm';


                //else
                    scanf("%s",maze[i]);
                  //printf("hi" );


            }

            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                    if(i == row_of_m && j == col_of_m )
                        maze[row_of_m][col_of_m] = 'm';

            printf("%c\n" , maze[row_of_m][col_of_m]);
                  //  if(maze[i][j] != 'm' || maze[i][j] != 'p' || maze[i][j] != '-' )
                    //    exit(0);
      //              count++;
        //        }
                //printf("\n");

                for(i =  0;i<n;i++)
                    printf("%s\n" , maze[i]);


                findm(row_of_m , col_of_m);
                findp(n,maze);
                findpath(move);

                printf("%s" , *(move + 0));



       }

        //for(i=0;i<n;i++)
        //{
          //     printf("%c",maze[i][j]);
                  //  if(maze[i][j] != 'm' || maze[i][j] != 'p' || maze[i][j] != '-' )
                    //    exit(0);

        //}
//        printf("%d" , count);//


    return 0;
}

void findm(int row , int col)
{
                        mrow = row;
                        mcol = col;

      // printf("%d\t%d",mrow,mcol);

}

void findp(int n,char a[101][101])
{
    int i,j;
    for(i=0;i<n;i++)
           {
                for(j=0;j<n;j++)
                {
                    if(a[i][j] == 'p'  )
                    {
                        prow = i;
                        pcol = j;

                    }

                }

           }
      //  printf("%d\t%d",prow,pcol);

}

void findpath(char *move[])
{
    int d=0,l=0,r=0,u=0,i=0;
    //char *down = "Down";char *up="Up";char *left = "Left";char *right = "Right";
//    printf("hi" );

    if(prow > mrow)
    {
        d = prow - mrow;
        //printf("%c",d);
        *(move + i) = "Down";
        //printf("d");

        i++;

    }
    else
    {
        u = mrow - prow;
        //printf("%c",u);
        *(move + i) = "Up";
       // printf("u");

        i++;
    }

    if(pcol > mcol)
    {
        r = pcol - mcol;
        //printf("%c",r);
        *(move + i) = "Right";
        //*move[i] = "Right";
        //printf("r");

        i++;
    }
    else
    {
        l = mcol - pcol;
        //printf("%c",l);
        *(move + i) = "Left";
        //printf("L");
        i++; }

}

