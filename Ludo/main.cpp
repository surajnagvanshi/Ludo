#include<iostream>
#include<conio.h>
#include<stdlib.h>
int rand();
class Blue;
class Green;
class Yellow;
class Red;
using namespace std;
class token
{
public:
    int base_position;
    int position,type;
public:

};
class Red:public token
{
private:
    //type 1-p(normal position) 2-q(stop) 3-r(base home) 4-h(passsing home)
public:
    int stepup(int i)
    {
        if(type==2)
        {
            if(position>-1&&position<4)
            {
                position=1;
                type=1;
                goto out;
            }
            if(position>3&&position<8)
            {
                position=8;
                type=1;
                goto out;
            }
            if(position>7&&position<12)
            {
                position=14;
                type=1;
                goto out;
            }
            if(position>11&&position<16)
            {
                position=22;
                type=1;
                goto out;
            }
            if(position>15&&position<20)
            {
                position=48;
                type=1;
                goto out;
            }
            if(position>23&&position<28)
            {
                position=40;
                type=1;
                goto out;
            }
            if(position>27&&position<32)
            {
                position=35;
                type=1;
                goto out;
            }
            if(position>19&&position<24)
            {
                position=27;
                type=1;
                goto out;
            }
        }
        out:
        int j;
        for(j=0; j<i; j++)
        {
            if(type==4)
            {
                if((position+(i-j))==20)
                   {
                       position=25;
                      return 1;

                   }
                if((position+(i-j))>20)
                {
                    if(j!=0)
                    {
                        int k;
                        for(k=j; k>0; k--)
                        {
                            position--;
                            if(position==-1)
                                position=51;
                            if(position==14)
                            {
                                position=38;
                                type=1;
                            }

                         }
                       if(position==1||position==9||position==14||position==22||position==35||position==40||position==48)
                       {
                          type=2;
                       }
                       if(!((position==1)||(position==9)||(position==14)||(position==22)||(position==35)||(position==40)||(position==48)))
                       {
                          type=1;
                       }

                     }
                    return 0;
                }
            }
            position++;
            if(position==52)
                position=0;
            if(position==39)
            {
                position=15;
                type=4;
            }
        }
        if(position==1||position==9||position==14||position==22||position==35||position==40||position==48)
        {
            type=2;
        }
        if(!((position==1)||(position==9)||(position==14)||(position==22)||(position==35)||(position==40)||(position==48)))
        {
            type=1;
        }
        return 1;
    }
    void open()
    {
        position=40;
        type=2;
    }
    void cut()
    {
        position=base_position;
        type=3;
    }

    friend int execute(int,Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend void prtscr(Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend int check(Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend int player1(int,Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend int player2(int,Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    Red(int i)
    {
        base_position=i;
        position=i;
        type=3;
    }
};
class Blue:public token
{
private:
    //type 1-p(normal position) 2-q(stop) 3-r(base home) 4-h(passsing home)
public:
    int stepup(int i)
    {
        int j;
        for(j=0; j<i; j++)
        {
            cout<<"hi "<<type;
            if(type==4)
            {
                if((position+(i-j))==5)
                    {
                        position=25;
                        return 1;
                    }
                if((position+(i-j))>5)
                {
                    if(j!=0)
                    {
                        int k;
                        for(k=j; k>0; k--)
                        {
                            position--;
                            if(position==-1)
                                position=51;
                            if(position==-1&&type==4)
                            {
                                position=51;
                                type=1;
                            }

                         }
                       if(position==1||position==9||position==14||position==22||position==35||position==40||position==48)
                       {
                          type=2;
                       }
                       if(!((position==1)||(position==9)||(position==14)||(position==22)||(position==35)||(position==40)||(position==48)))
                       {
                          type=1;
                       }

                     }
                    return 0;
                }
            }
            position++;
            if(position==52)
            {
                position=0;
                type=4;
            }
        }
        if(position==1||position==9||position==14||position==22||position==35||position==40||position==48)
        {
            type=2;
        }
        if(!((position==1)||(position==9)||(position==14)||(position==22)||(position==35)||(position==40)||(position==48)))
        {
            type=1;
        }
        return 1;
    }
    void open()
    {
        position=1;
        type=2;
    }
    void cut()
    {
        position=base_position;
        type=3;
    }

    friend int execute(int,Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend void prtscr(Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend int check(Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend int player1(int,Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend int player2(int,Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    Blue(int i)
    {
        base_position=i;
        position=i;
        type=3;
    }
};
class Green:public token
{
private:
    //type 1-p(normal position) 2-q(stop) 3-r(base home) 4-h(passsing home)
public:
    int stepup(int i)
    {
                if(type==2)
        {
            if(position>-1&&position<4)
            {
                position=1;
                type=1;
                goto out;
            }
            if(position>3&&position<8)
            {
                position=8;
                type=1;
                goto out;
            }
            if(position>7&&position<12)
            {
                position=14;
                type=1;
                goto out;
            }
            if(position>11&&position<16)
            {
                position=22;
                type=1;
                goto out;
            }
            if(position>15&&position<20)
            {
                position=48;
                type=1;
                goto out;
            }
            if(position>23&&position<28)
            {
                position=40;
                type=1;
                goto out;
            }
            if(position>27&&position<32)
            {
                position=35;
                type=1;
                goto out;
            }
            if(position>19&&position<24)
            {
                position=27;
                type=1;
                goto out;
            }
        }
        out:
        int j;
        for(j=0; j<i; j++)
        {
            if(type==4)
            {
                if((position+(i-j))==10)
                    {
                        position=25;
                        return 1;
                    }
                if((position+(i-j))>10)//to check if the position exceeds
                {
                    if(j!=0)
                    {
                        int k;
                        for(k=j; k>0; k--)
                        {
                            position--;
                            if(position==-1)
                                position=52;
                            if(position==4)
                            {
                                position=12;
                                type=1;
                            }
                        }
                    }
                    return 0;
                }
                position++;
                if(position==52)
                    position=0;
                if(position==13)
                {
                    position=5;
                    type=4;
                }
            }
        }
    }
    void open()
    {
        position=14;
        type=1;
    }
    void cut()
    {
        position=base_position;
        type=3;
    }

 friend int execute(int,Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend void prtscr(Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend int check(Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend int player1(int,Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend int player2(int,Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    Green(int i)
    {
        base_position=i;
        position=i;
        type=3;
    }
};
class Yellow:public token
{
private:
    //type 1-p(normal position) 2-q(stop) 3-r(base home) 4-h(passsing home)
public:
    int stepup(int i)
    {
        int j;
        for(j=0; j<i; j++)
        {
            cout<<"hi "<<type;
            if(type==4)
            {
                if((position+(i-j))==5)
                    {
                        position=15;
                        return 1;
                    }
                if((position+(i-j))>5)
                {
                    if(j!=0)
                    {
                        int k;
                        for(k=j; k>0; k--)
                        {
                            position--;
                            if(position==-1)
                                position=51;
                            if(position==9&&type==4)
                            {
                                position=25;
                                type=1;
                            }

                         }
                       if(position==1||position==9||position==14||position==22||position==35||position==40||position==48)
                       {
                          type=2;
                       }
                       if(!((position==1)||(position==9)||(position==14)||(position==22)||(position==35)||(position==40)||(position==48)))
                       {
                          type=1;
                       }

                     }
                    return 0;
                }
            }
            position++;
            if(position==26)
            {
                position=10;
                type=4;
            }
        }
        if(position==1||position==9||position==14||position==22||position==35||position==40||position==48)
        {
            type=2;
        }
        if(!((position==1)||(position==9)||(position==14)||(position==22)||(position==35)||(position==40)||(position==48)))
        {
            type=1;
        }
        return 1;
    }
    void open()
    {
        position=27;
        type=2;
    }
    void cut()
    {
        position=base_position;
        type=3;
    }

    friend int execute(int,Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend void prtscr(Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend int check(Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend int player1(int,Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    friend int player2(int,Red*,Red*,Red*,Red*,Blue*,Blue*,Blue*,Blue*,Green*,Green*,Green*,Green*,Yellow*,Yellow*,Yellow*,Yellow*);
    Yellow(int i)
    {
        base_position=i;
        position=i;
        type=3;
    }
};
void prtscr(Red *R1,Red *R2,Red *R3,Red *R4,Blue *B1,Blue *B2,Blue *B3,Blue *B4,Green *G1,Green *G2,Green *G3,Green *G4,Yellow *Y1,Yellow *Y2,Yellow *Y3,Yellow *Y4)
{
    system("cls");

    int i;
    char *p,*p1,*q,*q1,*r,*r1,*h,*h1;
    p=new char[90];
    p1=new char[90];
    q=new char[16];
    q1=new char[16];
    r=new char[32];
    r1=new char[32];
    h=new char[20];
    h1=new char[20];
    for(i=0; i<20; i++)
    {
        h[i]=' ';
        h1[i]=' ';
    }
    for(i=0; i<90; i++)
    {
        p[i]=' ';
        p1[i]=' ';
    }
    for(i=0; i<32; i++)
    {
        r[i]=' ';
        r1[i]=' ';
    }
    p[1]='+';
    p[9]='+';
    p[14]='+';
    p[22]='+';
    p[27]='+';
    p[35]='+';
    p[40]='+';
    p[48]='+';
    q[0]='B';
    q1[0]='1';
    q[1]='B';
    q1[1]='2';
    q[2]='B';
    q1[2]='3';
    q[3]='B';
    q1[3]='4';
    q[4]='G';
    q1[4]='1';
    q[5]='G';
    q1[5]='2';
    q[6]='G';
    q1[6]='3';
    q[7]='G';
    q1[7]='4';
    q[8]='R';
    q1[8]='1';
    q[9]='R';
    q1[9]='2';
    q[10]='R';
    q1[10]='3';
    q[11]='R';
    q1[11]='4';
    q[12]='Y';
    q1[12]='1';
    q[13]='Y';
    q1[13]='2';
    q[14]='Y';
    q1[14]='3';
    q[15]='Y';
    q1[15]='4';

{
   {

    //for blue
        {//for B1
        int m;
        for(m=0;m<52;m++)
        {
            if(B1->type==1)
            {
               if(B1->position==m)
                {
                    p[m]=q[0];
                    p1[m]=q1[0];
                    q[0]=' ';
                    q1[0]=' ';

                }
            }
            if(B1->type==2)
            {
                if(B1->position==m)
                {
                    int stoping;
                    if(m==1)
                    {
                         for(stoping=0;stoping<3;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='1';
                               q[0]=' ';
                               q1[0]=' ';
                               break;
                            }
                        }
                    }
                    if(m==9)
                    {
                         for(stoping=4;stoping<8;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='1';
                               q[0]=' ';
                               q1[0]=' ';
                               break;
                            }
                        }
                    }
                    if(m==14)
                    {
                         for(stoping=8;stoping<12;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='1';
                               q[0]=' ';
                               q1[0]=' ';
                               break;
                            }
                        }
                    }
                    if(m==22)
                    {
                         for(stoping=12;stoping<16;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='1';
                               q[0]=' ';
                               q1[0]=' ';
                               break;
                            }
                        }
                    }
                    if(m==27)
                    {
                         for(stoping=20;stoping<24;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='1';
                               q[0]=' ';
                               q1[0]=' ';
                               break;
                            }
                        }
                    }
                    if(m==35)
                    {
                         for(stoping=28;stoping<32;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='1';
                               q[0]=' ';
                               q1[0]=' ';
                               break;
                            }
                        }
                    }
                    if(m==40)
                    {
                         for(stoping=24;stoping<28;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='1';
                               q[0]=' ';
                               q1[0]=' ';
                               break;
                            }
                        }
                    }
                    if(m==48)
                    {
                         for(stoping=16;stoping<20;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='1';
                               q[0]=' ';
                               q1[0]=' ';
                               break;
                            }
                        }
                    }
                }
            }
            if(B1->type==3)
            {
                q[0]='B';
                q1[0]='1';
            }
            if(B1->type==4)
            {
                int homepos;
                if(B1->position==m)
                {
                   for(homepos=0;homepos<5;homepos++)
                   {
                      h[homepos]='B';
                      h1[homepos]='1';
                      q[0]=' ';
                      q1[0]=' ';
                      break;
                   }
                }

            }
       }


        }


    {//for B2
        int m;
        for(m=0;m<52;m++)
        {
            if(B2->type==1)
            {
               if(B2->position==m)
                {
                    p[m]=q[1];
                    p1[m]=q1[1];
                    q[1]=' ';
                    q1[1]=' ';

                }
            }
            if(B2->type==2)
            {
                if(B2->position==m)
                {
                    int stoping;
                    if(m==1)
                    {
                         for(stoping=0;stoping<3;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='2';
                               q[1]=' ';
                               q1[1]=' ';
                               break;
                            }
                        }
                    }
                    if(m==9)
                    {
                         for(stoping=4;stoping<8;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='2';
                               q[1]=' ';
                               q1[1]=' ';
                               break;
                            }
                        }
                    }
                    if(m==14)
                    {
                         for(stoping=8;stoping<12;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='2';
                               q[1]=' ';
                               q1[1]=' ';
                               break;
                            }
                        }
                    }
                    if(m==22)
                    {
                         for(stoping=12;stoping<16;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='2';
                               q[1]=' ';
                               q1[1]=' ';
                               break;
                            }
                        }
                    }
                    if(m==27)
                    {
                         for(stoping=20;stoping<24;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='2';
                               q[1]=' ';
                               q1[1]=' ';
                               break;
                            }
                        }
                    }
                    if(m==35)
                    {
                         for(stoping=28;stoping<32;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='2';
                               q[1]=' ';
                               q1[1]=' ';
                               break;
                            }
                        }
                    }
                    if(m==40)
                    {
                         for(stoping=24;stoping<28;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='2';
                               q[1]=' ';
                               q1[1]=' ';
                               break;
                            }
                        }
                    }
                    if(m==48)
                    {
                         for(stoping=16;stoping<20;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='2';
                               q[1]=' ';
                               q1[1]=' ';
                               break;
                            }
                        }
                    }
                }
            }
            if(B2->type==3)
            {
                q[1]='B';
                q1[1]='2';
            }
            if(B2->type==4)
            {
                int homepos;
                if(B2->position==m)
                {
                   for(homepos=0;homepos<5;homepos++)
                   {
                      h[homepos]='B';
                      h1[homepos]='2';
                      q[1]=' ';
                      q1[1]=' ';
                      break;
                   }
                }

            }
       }


    }


    {//for B3
        int m;
        for(m=0;m<52;m++)
        {
            if(B3->type==1)
            {
               if(B3->position==m)
                {
                    p[m]=q[2];
                    p1[m]=q1[2];
                    q[2]=' ';
                    q1[2]=' ';

                }
            }
            if(B3->type==2)
            {
                if(B3->position==m)
                {
                    int stoping;
                    if(m==1)
                    {
                         for(stoping=0;stoping<3;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='3';
                               q[2]=' ';
                               q1[2]=' ';
                               break;
                            }
                        }
                    }
                    if(m==9)
                    {
                         for(stoping=4;stoping<8;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='3';
                               q[2]=' ';
                               q1[2]=' ';
                               break;
                            }
                        }
                    }
                    if(m==14)
                    {
                         for(stoping=8;stoping<12;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='3';
                               q[2]=' ';
                               q1[2]=' ';
                               break;
                            }
                        }
                    }
                    if(m==22)
                    {
                         for(stoping=12;stoping<16;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='3';
                               q[2]=' ';
                               q1[2]=' ';
                               break;
                            }
                        }
                    }
                    if(m==27)
                    {
                         for(stoping=20;stoping<24;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='3';
                               q[2]=' ';
                               q1[2]=' ';
                               break;
                            }
                        }
                    }
                    if(m==35)
                    {
                         for(stoping=28;stoping<32;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='3';
                               q[2]=' ';
                               q1[2]=' ';
                               break;
                            }
                        }
                    }
                    if(m==40)
                    {
                         for(stoping=24;stoping<28;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='3';
                               q[2]=' ';
                               q1[2]=' ';
                               break;
                            }
                        }
                    }
                    if(m==48)
                    {
                         for(stoping=16;stoping<20;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='3';
                               q[2]=' ';
                               q1[2]=' ';
                               break;
                            }
                        }
                    }
                }
            }
            if(B3->type==3)
            {
                q[2]='B';
                q1[2]='3';
            }
            if(B3->type==4)
            {
                int homepos;
                if(B3->position==m)
                {
                   for(homepos=0;homepos<5;homepos++)
                   {
                      h[homepos]='B';
                      h1[homepos]='3';
                      q[2]=' ';
                      q1[2]=' ';
                      break;
                   }
                }

            }
       }


    }


    {//for B4
        int m;
        for(m=0;m<52;m++)
        {
            if(B4->type==1)
            {
               if(B4->position==m)
                {
                    p[m]=q[3];
                    p1[m]=q1[3];
                    q[3]=' ';
                    q1[3]=' ';

                }
            }
            if(B4->type==2)
            {
                if(B4->position==m)
                {
                    int stoping;
                    if(m==1)
                    {
                         for(stoping=0;stoping<3;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='4';
                               q[3]=' ';
                               q1[3]=' ';
                               break;
                            }
                        }
                    }
                    if(m==9)
                    {
                         for(stoping=4;stoping<8;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='4';
                               q[3]=' ';
                               q1[3]=' ';
                               break;
                            }
                        }
                    }
                    if(m==14)
                    {
                         for(stoping=8;stoping<12;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='4';
                               q[3]=' ';
                               q1[3]=' ';
                               break;
                            }
                        }
                    }
                    if(m==22)
                    {
                         for(stoping=12;stoping<16;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='4';
                               q[3]=' ';
                               q1[3]=' ';
                               break;
                            }
                        }
                    }
                    if(m==27)
                    {
                         for(stoping=20;stoping<24;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='4';
                               q[3]=' ';
                               q1[3]=' ';
                               break;
                            }
                        }
                    }
                    if(m==35)
                    {
                         for(stoping=28;stoping<32;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='4';
                               q[3]=' ';
                               q1[3]=' ';
                               break;
                            }
                        }
                    }
                    if(m==40)
                    {
                         for(stoping=24;stoping<28;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='4';
                               q[3]=' ';
                               q1[3]=' ';
                               break;
                            }
                        }
                    }
                    if(m==48)
                    {
                         for(stoping=16;stoping<20;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='B';
                               r1[stoping]='4';
                               q[3]=' ';
                               q1[3]=' ';
                               break;
                            }
                        }
                    }
                }
            }
            if(B4->type==3)
            {
                q[3]='B';
                q1[3]='4';
            }
            if(B4->type==4)
            {
                int homepos;
                if(B4->position==m)
                {
                   for(homepos=0;homepos<5;homepos++)
                   {
                      h[homepos]='B';
                      h1[homepos]='4';
                      q[3]=' ';
                      q1[3]=' ';
                      break;
                   }
                }

            }
       }


    }

  }


    //for yellow

    {


        {//for Y1
        int m;
        for(m=0;m<52;m++)
        {
            if(Y1->type==1)
            {
               if(Y1->position==m)
                {
                    p[m]=q[12];
                    p1[m]=q1[12];
                    q[12]=' ';
                    q1[12]=' ';

                }
            }
            if(Y1->type==2)
            {
                if(Y1->position==m)
                {
                    int stoping;
                    if(m==1)
                    {
                         for(stoping=0;stoping<3;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='1';
                               q[12]=' ';
                               q1[12]=' ';
                               break;
                            }
                        }
                    }
                    if(m==9)
                    {
                         for(stoping=4;stoping<8;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='1';
                               q[12]=' ';
                               q1[12]=' ';
                               break;
                            }
                        }
                    }
                    if(m==14)
                    {
                         for(stoping=8;stoping<12;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='1';
                               q[12]=' ';
                               q1[12]=' ';
                               break;
                            }
                        }
                    }
                    if(m==22)
                    {
                         for(stoping=12;stoping<16;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='1';
                               q[12]=' ';
                               q1[12]=' ';
                               break;
                            }
                        }
                    }
                    if(m==27)
                    {
                         for(stoping=20;stoping<24;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='1';
                               q[12]=' ';
                               q1[12]=' ';
                               break;
                            }
                        }
                    }
                    if(m==35)
                    {
                         for(stoping=28;stoping<32;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='1';
                               q[12]=' ';
                               q1[12]=' ';
                               break;
                            }
                        }
                    }
                    if(m==40)
                    {
                         for(stoping=24;stoping<28;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='1';
                               q[12]=' ';
                               q1[12]=' ';
                               break;
                            }
                        }
                    }
                    if(m==48)
                    {
                         for(stoping=16;stoping<20;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='1';
                               q[12]=' ';
                               q1[12]=' ';
                               break;
                            }
                        }
                    }
                }
            }
            if(Y1->type==3)
            {
                q[12]='Y';
                q1[12]='1';
            }
            if(Y1->type==4)
            {
                int homepos;
                if(Y1->position==m)
                {
                   for(homepos=0;homepos<5;homepos++)
                   {
                      h[homepos]='Y';
                      h1[homepos]='1';
                      q[12]=' ';
                      q1[12]=' ';
                      break;
                   }
                }

            }
       }


        }


    {//for Y2
        int m;
        for(m=0;m<52;m++)
        {
            if(Y2->type==1)
            {
               if(Y2->position==m)
                {
                    p[m]=q[13];
                    p1[m]=q1[13];
                    q[13]=' ';
                    q1[13]=' ';

                }
            }
            if(Y2->type==2)
            {
                if(Y2->position==m)
                {
                    int stoping;
                    if(m==1)
                    {
                         for(stoping=0;stoping<3;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='2';
                               q[13]=' ';
                               q1[13]=' ';
                               break;
                            }
                        }
                    }
                    if(m==9)
                    {
                         for(stoping=4;stoping<8;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='2';
                               q[13]=' ';
                               q1[13]=' ';
                               break;
                            }
                        }
                    }
                    if(m==14)
                    {
                         for(stoping=8;stoping<12;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='2';
                               q[13]=' ';
                               q1[13]=' ';
                               break;
                            }
                        }
                    }
                    if(m==22)
                    {
                         for(stoping=12;stoping<16;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='2';
                               q[13]=' ';
                               q1[13]=' ';
                               break;
                            }
                        }
                    }
                    if(m==27)
                    {
                         for(stoping=20;stoping<24;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='2';
                               q[13]=' ';
                               q1[13]=' ';
                               break;
                            }
                        }
                    }
                    if(m==35)
                    {
                         for(stoping=28;stoping<32;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='2';
                               q[13]=' ';
                               q1[13]=' ';
                               break;
                            }
                        }
                    }
                    if(m==40)
                    {
                         for(stoping=24;stoping<28;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='2';
                               q[13]=' ';
                               q1[13]=' ';
                               break;
                            }
                        }
                    }
                    if(m==48)
                    {
                         for(stoping=16;stoping<20;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='2';
                               q[13]=' ';
                               q1[13]=' ';
                               break;
                            }
                        }
                    }
                }
            }
            if(Y2->type==3)
            {
                q[13]='Y';
                q1[13]='2';
            }
            if(Y2->type==4)
            {
                int homepos;
                if(Y2->position==m)
                {
                   for(homepos=0;homepos<5;homepos++)
                   {
                      h[homepos]='Y';
                      h1[homepos]='2';
                      q[13]=' ';
                      q1[13]=' ';
                      break;
                   }
                }

            }
       }


    }


    {//for Y3
        int m;
        for(m=0;m<52;m++)
        {
            if(Y3->type==1)
            {
               if(Y3->position==m)
                {
                    p[m]=q[14];
                    p1[m]=q1[14];
                    q[14]=' ';
                    q1[14]=' ';

                }
            }
            if(Y3->type==2)
            {
                if(Y3->position==m)
                {
                    int stoping;
                    if(m==1)
                    {
                         for(stoping=0;stoping<3;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='3';
                               q[14]=' ';
                               q1[14]=' ';
                               break;
                            }
                        }
                    }
                    if(m==9)
                    {
                         for(stoping=4;stoping<8;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='3';
                               q[14]=' ';
                               q1[14]=' ';
                               break;
                            }
                        }
                    }
                    if(m==14)
                    {
                         for(stoping=8;stoping<12;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='3';
                               q[14]=' ';
                               q1[14]=' ';
                               break;
                            }
                        }
                    }
                    if(m==22)
                    {
                         for(stoping=12;stoping<16;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='3';
                               q[14]=' ';
                               q1[14]=' ';
                               break;
                            }
                        }
                    }
                    if(m==27)
                    {
                         for(stoping=20;stoping<24;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='3';
                               q[14]=' ';
                               q1[14]=' ';
                               break;
                            }
                        }
                    }
                    if(m==35)
                    {
                         for(stoping=28;stoping<32;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='3';
                               q[14]=' ';
                               q1[14]=' ';
                               break;
                            }
                        }
                    }
                    if(m==40)
                    {
                         for(stoping=24;stoping<28;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='3';
                               q[14]=' ';
                               q1[14]=' ';
                               break;
                            }
                        }
                    }
                    if(m==48)
                    {
                         for(stoping=16;stoping<20;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='3';
                               q[14]=' ';
                               q1[14]=' ';
                               break;
                            }
                        }
                    }
                }
            }
            if(Y3->type==3)
            {
                q[14]='Y';
                q1[14]='3';
            }
            if(Y3->type==4)
            {
                int homepos;
                if(Y3->position==m)
                {
                   for(homepos=0;homepos<5;homepos++)
                   {
                      h[homepos]='Y';
                      h1[homepos]='3';
                      q[14]=' ';
                      q1[14]=' ';
                      break;
                   }
                }

            }
       }


    }


    {//for B4
        int m;
        for(m=0;m<52;m++)
        {
            if(Y4->type==1)
            {
               if(Y4->position==m)
                {
                    p[m]=q[15];
                    p1[m]=q1[15];
                    q[15]=' ';
                    q1[15]=' ';

                }
            }
            if(Y4->type==2)
            {
                if(Y4->position==m)
                {
                    int stoping;
                    if(m==1)
                    {
                         for(stoping=0;stoping<3;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='4';
                               q[15]=' ';
                               q1[15]=' ';
                               break;
                            }
                        }
                    }
                    if(m==9)
                    {
                         for(stoping=4;stoping<8;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='4';
                               q[15]=' ';
                               q1[15]=' ';
                               break;
                            }
                        }
                    }
                    if(m==14)
                    {
                         for(stoping=8;stoping<12;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='4';
                               q[15]=' ';
                               q1[15]=' ';
                               break;
                            }
                        }
                    }
                    if(m==22)
                    {
                         for(stoping=12;stoping<16;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='4';
                               q[15]=' ';
                               q1[15]=' ';
                               break;
                            }
                        }
                    }
                    if(m==27)
                    {
                         for(stoping=20;stoping<24;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='4';
                               q[15]=' ';
                               q1[15]=' ';
                               break;
                            }
                        }
                    }
                    if(m==35)
                    {
                         for(stoping=28;stoping<32;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='4';
                               q[15]=' ';
                               q1[15]=' ';
                               break;
                            }
                        }
                    }
                    if(m==40)
                    {
                         for(stoping=24;stoping<28;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='4';
                               q[15]=' ';
                               q1[15]=' ';
                               break;
                            }
                        }
                    }
                    if(m==48)
                    {
                         for(stoping=16;stoping<20;stoping++)
                        {
                            if(r[stoping]==' ')
                            {
                               r[stoping]='Y';
                               r1[stoping]='4';
                               q[15]=' ';
                               q1[15]=' ';
                               break;
                            }
                        }
                    }
                }
            }
            if(Y4->type==3)
            {
                q[15]='Y';
                q1[15]='4';
            }
            if(Y4->type==4)
            {
                int homepos;
                if(Y4->position==m)
                {
                   for(homepos=0;homepos<5;homepos++)
                   {
                      h[homepos]='Y';
                      h1[homepos]='4';
                      q[15]=' ';
                      q1[15]=' ';
                      break;
                   }
                }

            }
       }


    }



    }




}




    {
        cout<<"\n\n\n\n\n";
        cout<<"\n\t                    "<<"|---| |---|---|---| |---|";
        cout<<"\n\t                    "<<"| "<<r[7]<<r1[7]<<"| | "<<p[11]<<p1[11]<<"| "<<p[12]<<p1[12]<<"| "<<p[13]<<p1[13]<<"|"<<" "<<"| "<<*(r+8)<<r1[8]<<"|";
        cout<<"\n\t      *********     "<<"|---| |---|---|---| |---|"<<"      *********     ";
        cout<<"\n\t      * "<<q[0]<<q1[0]<<"* "<<q[1]<<q1[1]<<"*     "<<"| "<<*(r+6)<<r1[6]<<"| | "<<p[10]<<p1[10]<<"| "<<h[5]<<h1[5]<<"| "<<p[14]<<p1[14]<<"|"<<"<"<<"| "<<*(r+9)<<r1[9]<<"|"<<"      * "<<q[4]<<q1[4]<<"* "<<q[5]<<q1[5]<<"*     ";
        cout<<"\n\t      *********     "<<"|---| |---|---|---| |---|"<<"      *********     ";
        cout<<"\n\t      * "<<q[2]<<q1[2]<<"* "<<q[3]<<q1[3]<<"*     "<<"| "<<*(r+5)<<r1[6]<<"|>| "<<p[9]<<p1[9]<<"| "<<h[6]<<h1[6]<<"| "<<p[15]<<p1[15]<<"|"<<" "<<"| "<<*(r+10)<<r1[10]<<"|"<<"      * "<<q[7]<<q1[7]<<"* "<<q[6]<<q1[6]<<"*     ";
        cout<<"\n\t      *********     "<<"|---| |---|---|---| |---|"<<"      *********     ";
        cout<<"\n\t                    "<<"| "<<*(r+4)<<r1[4]<<"| | "<<p[8]<<p1[8]<<"| "<<h[7]<<h1[7]<<"| "<<p[16]<<p1[16]<<"|"<<" "<<"| "<<*(r+11)<<r1[11]<<"|";
        cout<<"\n\t  |---|---|---|---| "<<"|---| |---|---|---| |---|"<<" |---|---|---|---| ";
        cout<<"\n\t  | "<<r[0]<<r1[0]<<"| "<<r[1]<<r1[1]<<"| "<<r[2]<<r1[2]<<"| "<<r[3]<<r1[3]<<"|       "<<"| "<<p[7]<<p1[7]<<"| "<<h[8]<<h1[8]<<"| "<<p[17]<<p1[17]<<"|"<<"       | "<<r[12]<<r1[12]<<"| "<<r[13]<<r1[13]<<"| "<<r[14]<<r1[14]<<"| "<<r[15]<<r1[15]<<"|";
        cout<<"\n\t  |---|---|---|---|       "<<"|---|---|---|"<<"       |---|---|---|---| ";
        cout<<"\n\t        V                 "<<"| "<<p[6]<<p1[6]<<"| "<<h[9]<<h1[9]<<"| "<<p[18]<<p1[18]<<"|"<<"             V";
        cout<<"\n\t  |---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|";
        cout<<"\n\t  | "<<p[0]<<p1[0]<<"| "<<p[1]<<p1[1]<<"| "<<p[2]<<p1[2]<<"| "<<p[3]<<p1[3]<<"| "<<p[4]<<p1[4]<<"| "<<p[5]<<p1[5]<<"| "<<"         "<<" | "<<p[19]<<p1[19]<<"| "<<p[20]<<p1[20]<<"| "<<p[21]<<p1[21]<<"| "<<p[22]<<p1[22]<<"| "<<p[23]<<p1[23]<<"| "<<p[24]<<p1[24]<<"| ";
        cout<<"\n\t  |---|---|---|---|---|---|           |---|---|---|---|---|---|";
        cout<<"\n\t  | "<<p[51]<<p1[51]<<"| "<<h[0]<<h1[0]<<"| "<<h[1]<<h1[1]<<"| "<<h[2]<<h1[2]<<"| "<<h[3]<<h1[3]<<"| "<<h[4]<<h1[4]<<"| "<<"         "<<" | "<<h[14]<<h1[14]<<"| "<<h[13]<<h1[13]<<"| "<<h[12]<<h1[12]<<"| "<<h[11]<<h1[11]<<"| "<<h[10]<<h1[10]<<"| "<<p[25]<<p1[25]<<"| ";
        cout<<"\n\t  |---|---|---|---|---|---|           |---|---|---|---|---|---|";
        cout<<"\n\t  | "<<p[50]<<p1[50]<<"| "<<p[49]<<p1[49]<<"| "<<p[48]<<p1[48]<<"| "<<p[47]<<p1[47]<<"| "<<p[46]<<p1[46]<<"| "<<p[45]<<p1[45]<<"| "<<"         "<<" | "<<p[31]<<p1[31]<<"| "<<p[30]<<p1[30]<<"| "<<p[29]<<p1[29]<<"| "<<p[28]<<p1[28]<<"| "<<p[27]<<p1[27]<<"| "<<p[26]<<p1[26]<<"| ";
        cout<<"\n\t  |---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|";
        cout<<"\n\t            ^             "<<"| "<<p[44]<<p1[44]<<"| "<<h[19]<<h1[19]<<"| "<<p[32]<<p1[32]<<"|"<<"                 ^";
        cout<<"\n\t  |---|---|---|---|       "<<"|---|---|---|"<<"       |---|---|---|---| ";
        cout<<"\n\t  | "<<r[16]<<r1[16]<<"| "<<r[17]<<r1[17]<<"| "<<r[18]<<r1[18]<<"| "<<r[19]<<r1[19]<<"|       "<<"| "<<p[43]<<p1[43]<<"| "<<h[18]<<h1[18]<<"| "<<p[33]<<p1[33]<<"|"<<"       | "<<r[20]<<r1[20]<<"| "<<r[21]<<r1[20]<<"| "<<r[22]<<r1[22]<<"| "<<r[23]<<r1[23]<<"|";
        cout<<"\n\t  |---|---|---|---| "<<"|---| |---|---|---| |---|"<<" |---|---|---|---| ";
        cout<<"\n\t                    "<<"| "<<r[24]<<r1[24]<<"| | "<<p[42]<<p1[42]<<"| "<<h[17]<<h1[17]<<"| "<<p[34]<<p1[34]<<"|"<<" "<<"| "<<r[28]<<r1[28]<<"|";
        cout<<"\n\t      *********     "<<"|---| |---|---|---| |---|"<<"      *********     ";
        cout<<"\n\t      * "<<q[8]<<q1[8]<<"* "<<q[9]<<q1[9]<<"*     "<<"| "<<*(r+25)<<r1[25]<<"| | "<<p[41]<<p1[41]<<"| "<<h[16]<<h1[16]<<"| "<<p[35]<<p1[35]<<"|"<<"<"<<"| "<<*(r+29)<<r1[29]<<"|"<<"      * "<<q[12]<<q1[12]<<"* "<<q[13]<<q1[13]<<"*     ";
        cout<<"\n\t      *********     "<<"|---| |---|---|---| |---|"<<"      *********     ";
        cout<<"\n\t      * "<<q[10]<<q1[10]<<"* "<<q[11]<<q1[11]<<"*     "<<"| "<<*(r+26)<<r1[26]<<"|>| "<<p[40]<<p1[40]<<"| "<<h[15]<<h1[15]<<"| "<<p[36]<<p1[36]<<"| "<<"| "<<*(r+30)<<r1[30]<<"|"<<"      * "<<q[15]<<q1[15]<<"* "<<q[14]<<q1[14]<<"*     ";
        cout<<"\n\t      *********     "<<"|---| |---|---|---| |---|"<<"      *********     ";
        cout<<"\n\t                    "<<"| "<<*(r+27)<<r1[27]<<"| | "<<p[39]<<p1[39]<<"| "<<p[38]<<p1[38]<<"| "<<p[37]<<p1[37]<<"|"<<" "<<"| "<<*(r+31)<<r1[31]<<"|";
        cout<<"\n\t                    "<<"|---| |---|---|---| |---|";
        cout<<"\n\n";

    }

}
int check(Red *R1,Red *R2,Red *R3,Red *R4,Blue *B1,Blue *B2,Blue *B3,Blue *B4,Green *G1,Green *G2,Green *G3,Green *G4,Yellow *Y1,Yellow *Y2,Yellow *Y3,Yellow *Y4)
{
    int c=0;
    if((R1->position==20&&R1->type==4)&&(R2->position==20&&R2->type==4)&&(R3->position==20&&R3->type==4)&&(R4->position==20&&R4->type==4))
        c++;
    if((B1->position==20&&B1->type==4)&&(B2->position==20&&B2->type==4)&&(B3->position==20&&B3->type==4)&&(B4->position==20&&B4->type==4))
        c++;
    if((G1->position==20&&G1->type==4)&&(G2->position==20&&G2->type==4)&&(G3->position==20&&G3->type==4)&&(G4->position==20&&G4->type==4))
        c++;
    if((Y1->position==20&&Y1->type==4)&&(Y2->position==20&&Y2->type==4)&&(Y3->position==20&&Y3->type==4)&&(Y4->position==20&&Y4->type==4))
        c++;
    return c;
}
int execute(int k,Red *R1,Red *R2,Red *R3,Red *R4,Blue *B1,Blue *B2,Blue *B3,Blue *B4,Green *G1,Green *G2,Green *G3,Green *G4,Yellow *Y1,Yellow *Y2,Yellow *Y3,Yellow *Y4)
{
    //k is for player
    if(k==0)
        prtscr(R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
    else
    {
        if(k==1)// dice value for player 1
        {
again1:
            int numbersof6=0;
            int dicevalue[3]= {0,0,0};
            cout<<"\n\tplayer 1 press a key to throw dice";
            getch();
            dicevalue[0]=(rand()%6+1);
            cout<<"\n\n\tyou have got a "<<dicevalue[0];
            if(dicevalue[0]==6)
            {
                numbersof6++;
                cout<<"\n\tplayer 1 press a key to throw dice again";
                getch();
                dicevalue[1]=(rand()%6+1);
                cout<<"\n\n\tyou have got a "<<dicevalue[1];
            }
            if(dicevalue[1]==6)
            {
                numbersof6++;
                cout<<"\n\tplayer 1 press a key to throw dice again";
                getch();
                dicevalue[2]=(rand()%6+1);
                cout<<"\n\n\tyou have got a "<<dicevalue[2];
            }
            if(dicevalue[2]==6)
            {
                cout<<"\n\tyou have got three sixes you have to throw dice again";
                goto again1;
            }
            int mj,t;
            for(mj=0; mj<=numbersof6; mj++)
            {

                for(t=0; t<=numbersof6; t++)
                {
                    if(!(dicevalue[t]==0))
                    cout<<"\n\tpress "<<dicevalue[t]<<" to choose it to move your token";
                }
                int procvalue;
                cin>>procvalue;
                while(((procvalue==dicevalue[0]||procvalue==dicevalue[1]||procvalue==dicevalue[2])&&procvalue==0))
                {
                    cout<<"\n\twrong choice choose again";

                }
                switch(procvalue)
                {
                case 1:
                    {
                        player1(1,R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
                        break;
                    }
                case 2:
                    {
                        player1(2,R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
                        break;
                    }
                case 3:
                    {
                        player1(3,R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
                        break;
                    }
                case 4:
                    {
                        player1(4,R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
                        break;
                    }
                case 5:
                    {
                        player1(5,R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
                        break;
                    }
                case 6:
                    {
                        player1(6,R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
                        break;
                    }
                 default:
                    {
                        cout<<"\n\tsomething went wrong";
                        break;
                    }
                }
                for(t=0;t<3;t++)
                {
                    if(dicevalue[t]==procvalue)
                       {
                         dicevalue[t]=0;
                         break;
                       }
                }

            }



        }
        // for second player
        if(k==2)// dice value for player 2
        {
again2:
            int numbersof61=0;
            int dicevalue1[3]= {0,0,0};
            cout<<"\n\tplayer 2 press a key to throw dice";
            getch();
            dicevalue1[0]=(rand()%6+1);
            cout<<"\n\n\tyou have got a "<<dicevalue1[0];
            if(dicevalue1[0]==6)
            {
                numbersof61++;
                cout<<"\n\tplayer 2 press a key to throw dice again";
                getch();
                dicevalue1[1]=(rand()%6+1);
                cout<<"\n\n\tyou have got a "<<dicevalue1[1];
            }
            if(dicevalue1[1]==6)
            {
                numbersof61++;
                cout<<"\n\tplayer 2 press a key to throw dice again";
                getch();
                dicevalue1[2]=(rand()%6+1);
                cout<<"\n\n\tyou have got a "<<dicevalue1[2];
            }
            if(dicevalue1[2]==6)
            {
                cout<<"\n\tyou have got three sixes you have to throw dice again";
                goto again1;
            }
            int mj1,t1;
            for(mj1=0; mj1<=numbersof61; mj1++)
            {

                for(t1=0; t1<=numbersof61; t1++)
                {
                    if(!(dicevalue1[t1]==0))
                    cout<<"\n\tpress "<<dicevalue1[t1]<<" to choose it to move your token";
                }
                int procvalue1;
                cin>>procvalue1;
                while(((procvalue1==dicevalue1[0]||procvalue1==dicevalue1[1]||procvalue1==dicevalue1[2])&&procvalue1==0))
                {
                    cout<<"\n\twrong choice choose again";

                }
                switch(procvalue1)
                {
                case 1:
                    {
                        player2(1,R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
                        break;
                    }
                case 2:
                    {
                        player2(2,R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
                        break;
                    }
                case 3:
                    {
                        player2(3,R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
                        break;
                    }
                case 4:
                    {
                        player2(4,R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
                        break;
                    }
                case 5:
                    {
                        player2(5,R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
                        break;
                    }
                case 6:
                    {
                        player2(6,R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
                        break;
                    }
                 default:
                    {
                        cout<<"\n\tsomething went wrong";
                        break;
                    }
                }
                for(t1=0;t1<3;t1++)
                {
                    if(dicevalue1[t1]==procvalue1)
                        {
                            dicevalue1[t1]=0;
                            break;
                        }
                }

            }



        }
    }
}
int player1(int k,Red *R1,Red *R2,Red *R3,Red *R4,Blue *B1,Blue *B2,Blue *B3,Blue *B4,Green *G1,Green *G2,Green *G3,Green *G4,Yellow *Y1,Yellow *Y2,Yellow *Y3,Yellow *Y4)
{
        invalidmove:
        cout<<"\n\tchoose the token number that you want to move";
        cout<<"\n\tpress 1 for token number 1";
        cout<<"\n\tpress 2 for token number 2";
        cout<<"\n\tpress 3 for token number 3";
        cout<<"\n\tpress 4 for token number 4";
        cout<<"\n\tpress 5 to skip";
        int tokennumber;
        cin>>tokennumber;
        if(tokennumber==5)
        {
            return 0;
        }
        while(!(tokennumber==1||tokennumber==2||tokennumber==3||tokennumber==4))
        {
            cout<<"\n\twrong choice";
            cout<<"\n\tenter the token number again";
            cin>>tokennumber;
        }
        if(tokennumber==1)
        {
            if(B1->type==3)
            {
                if(k==6)
                {
                    B1->open();
                    goto out;
                }
                else
                {
                    cout<<"\n\tinvalid move";
                    cout<<"\n\tchoose again the token number to move for dice value "<<k;
                    goto invalidmove;
                }
           }
            if(B1->type==1)
            {
               int answer;
               answer=B1->stepup(k);
               if(answer==0)
               {
                   cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
               }
               if(answer==1)
               {
                   if(Y1->type==1)
                   {
                       if(Y1->position==B1->position)
                       {
                             Y1->cut();
                           cout<<"\n\tplayer 2 your token Y1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y2->type==1)
                   {
                       if(Y2->position==B1->position)
                       {
                           Y2->cut();
                           cout<<"\n\tplayer 2 your token Y2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y3->type==1)
                   {
                       if(Y3->position==B1->position)
                       {
                           Y3->cut();
                           cout<<"\n\tplayer 2 your token Y3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y4->type==1)
                   {
                       if(Y4->position==B1->position)
                       {
                           Y4->cut();
                           cout<<"\n\tplayer 2 your token Y4 has been moved back to home";
                           goto out;
                       }
                   }
               }

           }
            if(B1->type==4)
            {
                int answer;
                answer=B1->stepup(k);
                if(answer==1)
                {
                    goto out;
                }
                if(answer==0)
                {
                     cout<<"\n\tinvalid move";
                     goto invalidmove;
                }
            }
            if(B1->type==2)
            {
                int answer;
                answer=B1->stepup(k);
                if(answer==0)
                {
                    cout<<"hi 100";
                    cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
                }
                if(answer==1)
               {
                   if(Y1->type==1)
                   {
                       if(Y1->position==B1->position)
                       {
                           Y1->cut();
                           cout<<"\n\tplayer 2 your token Y1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y2->type==1)
                   {
                       if(Y2->position==B1->position)
                       {
                           Y2->cut();
                           cout<<"\n\tplayer 2 your token Y2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y3->type==1)
                   {
                       if(Y3->position==B1->position)
                       {
                           Y3->cut();
                           cout<<"\n\tplayer 2 your token Y3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y4->type==1)
                   {
                       if(Y4->position==B1->position)
                       {
                           Y4->cut();
                           cout<<"\n\tplayer 2 your token Y4 has been moved back to home";
                           goto out;
                       }
                   }
               }


            }
       }
         if(tokennumber==2)
        {
            if(B2->type==3)
            {
                if(k==6)
                {
                    B2->open();
                    goto out;
                }
                else
                {
                    cout<<"\n\tinvalid move";
                    cout<<"\n\tchoose again the token number to move for dice value "<<k;
                    goto invalidmove;
                }
           }
            if(B2->type==1)
            {
               int answer;
               answer=B2->stepup(k);
               if(answer==0)
               {
                   cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
               }
               if(answer==1)
               {
                   if(Y1->type==1)
                   {
                       if(Y1->position==B2->position)
                       {
                             Y1->cut();
                           cout<<"\n\tplayer 2 your token Y1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y2->type==1)
                   {
                       if(Y2->position==B2->position)
                       {
                           Y2->cut();
                           cout<<"\n\tplayer 2 your token Y2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y3->type==1)
                   {
                       if(Y3->position==B2->position)
                       {
                           Y3->cut();
                           cout<<"\n\tplayer 2 your token Y3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y4->type==1)
                   {
                       if(Y4->position==B2->position)
                       {
                           Y4->cut();
                           cout<<"\n\tplayer 2 your token Y4 has been moved back to home";
                           goto out;
                       }
                   }
               }

           }
            if(B2->type==4)
            {
                int answer;
                answer=B2->stepup(k);
                if(answer==1)
                {
                    goto out;
                }
                if(answer==0)
                {
                     cout<<"\n\tinvalid move";
                     goto invalidmove;
                }
            }
            if(B2->type==2)
            {
                int answer;
                answer=B2->stepup(k);
                if(answer==0)
                {
                    cout<<"hi 100";
                    cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
                }
                if(answer==1)
               {
                   if(Y1->type==1)
                   {
                       if(Y1->position==B2->position)
                       {
                           Y1->cut();
                           cout<<"\n\tplayer 2 your token Y1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y2->type==1)
                   {
                       if(Y2->position==B2->position)
                       {
                           Y2->cut();
                           cout<<"\n\tplayer 2 your token Y2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y3->type==1)
                   {
                       if(Y3->position==B2->position)
                       {
                           Y3->cut();
                           cout<<"\n\tplayer 2 your token Y3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y4->type==1)
                   {
                       if(Y4->position==B2->position)
                       {
                           Y4->cut();
                           cout<<"\n\tplayer 2 your token Y4 has been moved back to home";
                           goto out;
                       }
                   }
               }


            }
       }
       if(tokennumber==3)
        {
            if(B3->type==3)
            {
                if(k==6)
                {
                    B3->open();
                    goto out;
                }
                else
                {
                    cout<<"\n\tinvalid move";
                    cout<<"\n\tchoose again the token number to move for dice value "<<k;
                    goto invalidmove;
                }
           }
            if(B3->type==1)
            {
               int answer;
               answer=B3->stepup(k);
               if(answer==0)
               {
                   cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
               }
               if(answer==1)
               {
                   if(Y1->type==1)
                   {
                       if(Y1->position==B3->position)
                       {
                             Y1->cut();
                           cout<<"\n\tplayer 2 your token Y1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y2->type==1)
                   {
                       if(Y2->position==B3->position)
                       {
                           Y2->cut();
                           cout<<"\n\tplayer 2 your token Y2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y3->type==1)
                   {
                       if(Y3->position==B3->position)
                       {
                           Y3->cut();
                           cout<<"\n\tplayer 2 your token Y3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y4->type==1)
                   {
                       if(Y4->position==B3->position)
                       {
                           Y4->cut();
                           cout<<"\n\tplayer 2 your token Y4 has been moved back to home";
                           goto out;
                       }
                   }
               }

           }
            if(B3->type==4)
            {
                int answer;
                answer=B3->stepup(k);
                if(answer==1)
                {
                    goto out;
                }
                if(answer==0)
                {
                     cout<<"\n\tinvalid move";
                     goto invalidmove;
                }
            }
            if(B3->type==2)
            {
                int answer;
                answer=B3->stepup(k);
                if(answer==0)
                {
                    cout<<"hi 100";
                    cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
                }
                if(answer==1)
               {
                   if(Y1->type==1)
                   {
                       if(Y1->position==B3->position)
                       {
                           Y1->cut();
                           cout<<"\n\tplayer 2 your token Y1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y2->type==1)
                   {
                       if(Y2->position==B3->position)
                       {
                           Y2->cut();
                           cout<<"\n\tplayer 2 your token Y2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y3->type==1)
                   {
                       if(Y3->position==B3->position)
                       {
                           Y3->cut();
                           cout<<"\n\tplayer 2 your token Y3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y4->type==1)
                   {
                       if(Y4->position==B3->position)
                       {
                           Y4->cut();
                           cout<<"\n\tplayer 2 your token Y4 has been moved back to home";
                           goto out;
                       }
                   }
               }


            }
       }
       if(tokennumber==4)
        {
            if(B4->type==3)
            {
                if(k==6)
                {
                    B4->open();
                    goto out;
                }
                else
                {
                    cout<<"\n\tinvalid move";
                    cout<<"\n\tchoose again the token number to move for dice value "<<k;
                    goto invalidmove;
                }
           }
            if(B4->type==1)
            {
               int answer;
               answer=B4->stepup(k);
               if(answer==0)
               {
                   cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
               }
               if(answer==1)
               {
                   if(Y1->type==1)
                   {
                       if(Y1->position==B4->position)
                       {
                             Y1->cut();
                           cout<<"\n\tplayer 2 your token Y1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y2->type==1)
                   {
                       if(Y2->position==B4->position)
                       {
                           Y2->cut();
                           cout<<"\n\tplayer 2 your token Y2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y3->type==1)
                   {
                       if(Y3->position==B4->position)
                       {
                           Y3->cut();
                           cout<<"\n\tplayer 2 your token Y3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y4->type==1)
                   {
                       if(Y4->position==B4->position)
                       {
                           Y4->cut();
                           cout<<"\n\tplayer 2 your token Y4 has been moved back to home";
                           goto out;
                       }
                   }
               }

           }
            if(B4->type==4)
            {
                int answer;
                answer=B4->stepup(k);
                if(answer==1)
                {
                    goto out;
                }
                if(answer==0)
                {
                     cout<<"\n\tinvalid move";
                     goto invalidmove;
                }
            }
            if(B4->type==2)
            {
                int answer;
                answer=B4->stepup(k);
                if(answer==0)
                {
                    cout<<"hi 100";
                    cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
                }
                if(answer==1)
               {
                   if(Y1->type==1)
                   {
                       if(Y1->position==B4->position)
                       {
                           Y1->cut();
                           cout<<"\n\tplayer 2 your token Y1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y2->type==1)
                   {
                       if(Y2->position==B4->position)
                       {
                           Y2->cut();
                           cout<<"\n\tplayer 2 your token Y2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y3->type==1)
                   {
                       if(Y3->position==B4->position)
                       {
                           Y3->cut();
                           cout<<"\n\tplayer 2 your token Y3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(Y4->type==1)
                   {
                       if(Y4->position==B4->position)
                       {
                           Y4->cut();
                           cout<<"\n\tplayer 2 your token Y4 has been moved back to home";
                           goto out;
                       }
                   }
               }


            }
       }
       out:
           prtscr(R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
}
int player2(int k,Red *R1,Red *R2,Red *R3,Red *R4,Blue *B1,Blue *B2,Blue *B3,Blue *B4,Green *G1,Green *G2,Green *G3,Green *G4,Yellow *Y1,Yellow *Y2,Yellow *Y3,Yellow *Y4)
{
        invalidmove:
        cout<<"\n\tchoose the token number that you want to move";
        cout<<"\n\tpress 1 for token number 1";
        cout<<"\n\tpress 2 for token number 2";
        cout<<"\n\tpress 3 for token number 3";
        cout<<"\n\tpress 4 for token number 4";
        cout<<"\n\tpress 5 to skip";
        int tokennumber;
        cin>>tokennumber;
        if(tokennumber==5)
        {
            return 0;
        }
        while(!(tokennumber==1||tokennumber==2||tokennumber==3||tokennumber==4))
        {
            cout<<"\n\twrong choice";
            cout<<"\n\tenter the token number again";
            cin>>tokennumber;
        }
        if(tokennumber==1)
        {
            if(Y1->type==3)
            {
                if(k==6)
                {
                    Y1->open();
                    goto out;
                }
                else
                {
                    cout<<"\n\tinvalid move";
                    cout<<"\n\tchoose again the token number to move for dice value "<<k;
                    goto invalidmove;
                }
           }
            if(Y1->type==1)
            {
               int answer;
               answer=Y1->stepup(k);
               if(answer==0)
               {
                   cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
               }
               if(answer==1)
               {
                   if(B1->type==1)
                   {
                       if(Y1->position==B1->position)
                       {
                           B1->cut();
                           cout<<"\n\tplayer 1 your token B1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B2->type==1)
                   {
                       if(B2->position==Y1->position)
                       {
                           B2->cut();
                           cout<<"\n\tplayer 1 your token B2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B3->type==1)
                   {
                       if(B3->position==Y1->position)
                       {
                           B3->cut();
                           cout<<"\n\tplayer 1 your token B3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B4->type==1)
                   {
                       if(B4->position==Y1->position)
                       {
                           B4->cut();
                           cout<<"\n\tplayer 1 your token B4 has been moved back to home";
                           goto out;
                       }
                   }
               }

           }
            if(Y1->type==4)
            {
                int answer;
                answer=Y1->stepup(k);
                if(answer==1)
                {
                    goto out;
                }
                if(answer==0)
                {
                     cout<<"\n\tinvalid move";
                     goto invalidmove;
                }
            }
            if(Y1->type==2)
            {
                int answer;
                answer=Y1->stepup(k);
                if(answer==0)
                {
                    cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
                }
                if(answer==1)
               {
                   if(B1->type==1)
                   {
                       if(Y1->position==B1->position)
                       {
                           B1->cut();
                           cout<<"\n\tplayer 1 your token B1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B2->type==1)
                   {
                       if(B2->position==Y1->position)
                       {
                           B2->cut();
                           cout<<"\n\tplayer 1 your token B2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B3->type==1)
                   {
                       if(B3->position==Y1->position)
                       {
                           B3->cut();
                           cout<<"\n\tplayer 1 your token B3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B4->type==1)
                   {
                       if(B4->position==Y1->position)
                       {
                           B4->cut();
                           cout<<"\n\tplayer 1 your token B4 has been moved back to home";
                           goto out;
                       }
                   }
               }


            }
       }
       if(tokennumber==2)
        {
            if(Y2->type==3)
            {
                if(k==6)
                {
                    Y2->open();
                    goto out;
                }
                else
                {
                    cout<<"\n\tinvalid move";
                    cout<<"\n\tchoose again the token number to move for dice value "<<k;
                    goto invalidmove;
                }
           }
            if(Y2->type==1)
            {
               int answer;
               answer=Y2->stepup(k);
               if(answer==0)
               {
                   cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
               }
               if(answer==1)
               {
                   if(B1->type==1)
                   {
                       if(Y2->position==B1->position)
                       {
                           B1->cut();
                           cout<<"\n\tplayer 1 your token B1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B2->type==1)
                   {
                       if(B2->position==Y2->position)
                       {
                           B2->cut();
                           cout<<"\n\tplayer 1 your token B2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B3->type==1)
                   {
                       if(B3->position==Y2->position)
                       {
                           B3->cut();
                           cout<<"\n\tplayer 1 your token B3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B4->type==1)
                   {
                       if(B4->position==Y2->position)
                       {
                           B4->cut();
                           cout<<"\n\tplayer 1 your token B4 has been moved back to home";
                           goto out;
                       }
                   }
               }

           }
            if(Y2->type==4)
            {
                int answer;
                answer=Y2->stepup(k);
                if(answer==1)
                {
                    goto out;
                }
                if(answer==0)
                {
                     cout<<"\n\tinvalid move";
                     goto invalidmove;
                }
            }
            if(Y2->type==2)
            {
                int answer;
                answer=Y2->stepup(k);
                if(answer==0)
                {
                    cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
                }
                if(answer==1)
               {
                   if(B1->type==1)
                   {
                       if(Y2->position==B1->position)
                       {
                           B1->cut();
                           cout<<"\n\tplayer 1 your token B1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B2->type==1)
                   {
                       if(B2->position==Y2->position)
                       {
                           B2->cut();
                           cout<<"\n\tplayer 1 your token B2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B3->type==1)
                   {
                       if(B3->position==Y2->position)
                       {
                           B3->cut();
                           cout<<"\n\tplayer 1 your token B3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B4->type==1)
                   {
                       if(B4->position==Y2->position)
                       {
                           B4->cut();
                           cout<<"\n\tplayer 2 your token Y4 has been moved back to home";
                           goto out;
                       }
                   }
               }


            }
       }
       if(tokennumber==3)
        {
            if(Y3->type==3)
            {
                if(k==6)
                {
                    Y3->open();
                    goto out;
                }
                else
                {
                    cout<<"\n\tinvalid move";
                    cout<<"\n\tchoose again the token number to move for dice value "<<k;
                    goto invalidmove;
                }
           }
            if(Y3->type==1)
            {
               int answer;
               answer=Y3->stepup(k);
               if(answer==0)
               {
                   cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
               }
               if(answer==1)
               {
                   if(B1->type==1)
                   {
                       if(Y3->position==B1->position)
                       {
                           B1->cut();
                           cout<<"\n\tplayer 1 your token B1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B2->type==1)
                   {
                       if(B2->position==Y3->position)
                       {
                           B2->cut();
                           cout<<"\n\tplayer 1 your token B2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B3->type==1)
                   {
                       if(B3->position==Y3->position)
                       {
                           B3->cut();
                           cout<<"\n\tplayer 1 your token B3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B4->type==1)
                   {
                       if(B4->position==Y3->position)
                       {
                           B4->cut();
                           cout<<"\n\tplayer 1 your token B4 has been moved back to home";
                           goto out;
                       }
                   }
               }

           }
            if(Y3->type==4)
            {
                int answer;
                answer=Y3->stepup(k);
                if(answer==1)
                {
                    goto out;
                }
                if(answer==0)
                {
                     cout<<"\n\tinvalid move";
                     goto invalidmove;
                }
            }
            if(Y3->type==2)
            {
                int answer;
                answer=Y3->stepup(k);
                if(answer==0)
                {
                    cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
                }
                if(answer==1)
               {
                   if(B1->type==1)
                   {
                       if(Y3->position==B1->position)
                       {
                           B1->cut();
                           cout<<"\n\tplayer 1 your token B1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B2->type==1)
                   {
                       if(B2->position==Y3->position)
                       {
                           B2->cut();
                           cout<<"\n\tplayer 1 your token B2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B3->type==1)
                   {
                       if(B3->position==Y3->position)
                       {
                           B3->cut();
                           cout<<"\n\tplayer 1 your token B3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B4->type==1)
                   {
                       if(B4->position==Y3->position)
                       {
                           B4->cut();
                           cout<<"\n\tplayer 1 your token B4 has been moved back to home";
                           goto out;
                       }
                   }
               }


            }
       }
       if(tokennumber==4)
        {
            if(Y4->type==3)
            {
                if(k==6)
                {
                    Y4->open();
                    goto out;
                }
                else
                {
                    cout<<"\n\tinvalid move";
                    cout<<"\n\tchoose again the token number to move for dice value "<<k;
                    goto invalidmove;
                }
           }
            if(Y4->type==1)
            {
               int answer;
               answer=Y4->stepup(k);
               if(answer==0)
               {
                   cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
               }
               if(answer==1)
               {
                   if(B1->type==1)
                   {
                       if(Y4->position==B1->position)
                       {
                           B1->cut();
                           cout<<"\n\tplayer 1 your token B1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B2->type==1)
                   {
                       if(B2->position==Y4->position)
                       {
                           B2->cut();
                           cout<<"\n\tplayer 1 your token B2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B3->type==1)
                   {
                       if(B3->position==Y4->position)
                       {
                           B3->cut();
                           cout<<"\n\tplayer 1 your token B3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B4->type==1)
                   {
                       if(B4->position==Y4->position)
                       {
                           B4->cut();
                           cout<<"\n\tplayer 1 your token B4 has been moved back to home";
                           goto out;
                       }
                   }
               }

           }
            if(Y4->type==4)
            {
                int answer;
                answer=Y4->stepup(k);
                if(answer==1)
                {
                    goto out;
                }
                if(answer==0)
                {
                     cout<<"\n\tinvalid move";
                     goto invalidmove;
                }
            }
            if(Y4->type==2)
            {
                int answer;
                answer=Y4->stepup(k);
                if(answer==0)
                {
                    cout<<"\n\tinvalid move";
                   cout<<"\n\tchoose again the token number to move for dice value "<<k;
                   goto invalidmove;
                }
                if(answer==1)
               {
                   if(B1->type==1)
                   {
                       if(Y4->position==B1->position)
                       {
                           B1->cut();
                           cout<<"\n\tplayer 1 your token B1 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B2->type==1)
                   {
                       if(B2->position==Y4->position)
                       {
                           B2->cut();
                           cout<<"\n\tplayer 1 your token B2 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B3->type==1)
                   {
                       if(B3->position==Y4->position)
                       {
                           B3->cut();
                           cout<<"\n\tplayer 1 your token B3 has been moved back to home";
                           goto out;
                       }
                   }
                   if(B4->type==1)
                   {
                       if(B4->position==Y4->position)
                       {
                           B4->cut();
                           cout<<"\n\tplayer 1 your token B4 has been moved back to home";
                           goto out;
                       }
                   }
               }


            }
       }
       out:
           prtscr(R1,R2,R3,R4,B1,B2,B3,B4,G1,G2,G3,G4,Y1,Y2,Y3,Y4);
}

int main()
{
    Red R1(1),R2(2),R3(3),R4(4);
    Blue B1(1),B2(2),B3(3),B4(4);
    Green G1(1),G2(2),G3(3),G4(4);
    Yellow Y1(1),Y2(2),Y3(3),Y4(4);
    cout<<"\n\t hello there ! ";
    cout<<"\n\tchoose the number of players";
    cout<<"\n\tpress 2 for two players or press 4 for four players (presently available for 2 players only)"<<endl;
    int player;
    cin>>player;
    while(!(player==2||player==4))
    {
        cout<<"\n\twrong choice";
        cout<<"\n\tpress 2 for two players or press 4 for four players";
        cin>>player;
    }
    if(player==2)
    {
        cout<<"\n\tBlue for player 1 (B1,B2,B3,B4)";
        cout<<"\n\n\tYellow for player 2 (Y1,Y2,Y3,Y4)";
        cout<<"\n\npress a key to continue";
        getch();
        execute(0,&R1,&R2,&R3,&R4,&B1,&B2,&B3,&B4,&G1,&G2,&G3,&G4,&Y1,&Y2,&Y3,&Y4);
        while(check(&R1,&R2,&R3,&R4,&B1,&B2,&B3,&B4,&G1,&G2,&G3,&G4,&Y1,&Y2,&Y3,&Y4)<1)
        {
            execute(1,&R1,&R2,&R3,&R4,&B1,&B2,&B3,&B4,&G1,&G2,&G3,&G4,&Y1,&Y2,&Y3,&Y4);

            execute(2,&R1,&R2,&R3,&R4,&B1,&B2,&B3,&B4,&G1,&G2,&G3,&G4,&Y1,&Y2,&Y3,&Y4);

        }

    }
}

