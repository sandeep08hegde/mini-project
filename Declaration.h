#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>
#include<winbase.h>
#include<conio.h>
#include<time.h>
#include<string.h>
//Main   
    FILE*a1;
    int ch;
//NewFile
    char FileName[20];
    FILE* fp;
//starting
    struct FileOp {
        char Comp[30],Venue[30],Date[30],Toss[30],ElectedTo[10],TeamA[30],TeamB[30];
        int Innings;
    }FOP_A,FOP_B;
    int p_balls=0,t_balls,t_runs=0,t_wickets=0,f_runs1,f_runs2,f_wickets1,f_wickets2;
    char run;
    float c_over=0,over;