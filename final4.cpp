
                                                                      //Tic-TAC-Toe game

#include<iostream.h>
#include<conio.h>
#include<windows.h>
void v1()
{
     int i;                                 /*The first four methods or functions are written so as to form the hash , which represent each and every line of
                                           hash and print positions a,b,c,d,e,f,g,h,i respectively.They are called in the function named "Hash" written below */
     for(i=1;i<=40;i++)                             
     {
                       if(i==29||i==35)       /*the fuction v1 prints the horizontal - (hypens)*/
                       cout<<"|";
                       else
                       cout<<" ";
                       
                       }
                       
                       }
void abc(char a,char b,char c)
{
     int i;
     for(i=1;i<=40;i++)
     {
                       if(i==28||i==33)
                       cout<<"|";
                       else
                       cout<<" ";
                       if(i==25)
                       cout<<a;
                       else if(i==30)
                       cout<<b;
                       else if(i==35)
                       cout<<c;
                       }
                       
                       }

void def(char d,char e,char f)
{
     int i;
     for(i=1;i<=40;i++)
     {
                       if(i==28||i==33)
                       cout<<"|";
                       else
                       cout<<" ";
                       if(i==25)
                       cout<<d;
                       else if(i==30)
                       cout<<e;
                       else if(i==35)
                       cout<<f;
                       }
                       
                       }
                       
      void ghi(char g,char h,char i)
{
     int m;
     for(m=1;m<=40;m++)
     {
                       if(m==28||m==33)
                       cout<<"|";
                       else
                       cout<<" ";
                       if(m==25)
                       cout<<g;
                       else if(m==30)
                       cout<<h;
                       else if(m==35)
                       cout<<i;
                       }
                       
                       }                 
void h1()                       
{                           /*this fuction prints the vertical -(hypens) */
     int i;
     for(i=0;i<=21;i++)
     cout<<" ";
     for(i=22;i<40;i++)
     cout<<"-";
     }
     
     
/*The check function checks all the possible ways or combinations of winning the game, two parameters i.e. g2,g1 are returned by using call by refrence method which store the scores of the players*/
void check(int c1,int c2,int c3,int c4,int c5,int c6,int c7,int c8,int c9,int r1,int r2,int r3,int r4,int r5,int r6,int r7,int r8,int r9,int i,int *g1,int *g2,int *k1,int *k2)
{
     
     if((c1==1&&c2==1&&c3==1)||(c1==1&&c5==1&&c9==1)||(c1==1&&c4==1&&c7==1)||(c2==1&&c5==1&&c8==1)||(c3==1&&c6==1&&c9==1)||(c3==1&&c5==1&&c7==1)||(c4==1&&c5==1&&c6==1)||(c7==1&&c8==1&&c9==1))
     {
         cout<<"\n \n \t \t Player 1 wins";
         *g1=*g1+1;
         *k1=*k1+1;
         //cout<<*g1;
         Sleep(1000);
         }       
     else if((r1==1&&r2==1&&r3==1)||(r1==1&&r5==1&&r9==1)||(r1==1&&r4==1&&r7==1)||(r2==1&&r5==1&&r8==1)||(r3==1&&r6==1&&r9==1)||(r3==1&&r5==1&&r7==1)||(r4==1&&r5==1&&r6==1)||(r7==1&&r8==1&&r9==1))
     {
         cout<<"\n \n \t \t Player 2 wins";
         *g2=*g2+2;
         *k2=*k2+1;
          Sleep(1000);
         }   
     else if(i==9)
     cout<<"\n \n \t Draw Match";    
     
                                                                                                                                                                                            
         }
     
    /* the hash function is a major function which assigns the positions there character symbols which are taken as input, it checks the turn of the player and allotes the symbols accordingly,
         , therefore it calls the first four functions and prints the hash with positions replaced by the input symbols*/
     void hash(int c1,int c2,int c3,int c4,int c5,int c6,int c7,int c8,int c9,int r1,int r2,int r3,int r4,int r5,int r6,int r7,int r8,int r9,char s1,char s2)
     {
          char a,b,c,d,e,f,g,h,i;
           
          if(c1==1)
          a=s1;
          else if(r1==1)
          a=s2;
          else if(c1==0&&r1==0)
          a='a';
          
           if(c2==1)
          b=s1;
          else if(r2==1)
          b=s2;
          else if(c2==0&&r2==0)
          b='b';
          
           if(c3==1)
          c=s1;
          else if(r3==1)
          c=s2;
          else if(c3==0&&r3==0)
          c='c';
          
          if(c4==1)
          d=s1;
          else if(r4==1)
          d=s2;
          else if(c4==0&&r4==0)
          d='d';
          
          if(c5==1)
          e=s1;
          else if(r5==1)
          e=s2;
          else if(c5==0&&r5==0)
          e='e';
          
          if(c6==1)
          f=s1;
          else if(r6==1)
          f=s2;
          else if(c6==0&&r6==0)
          f='f';
          
          
          if(c7==1)
          g=s1;
          else if(r7==1)
          g=s2;
          else if(c7==0&&r7==0)
          g='g';
          
          if(c8==1)
          h=s1;
          else if(r8==1)
          h=s2;
          else if(c8==0&&r8==0)
          h='h';
          
          
          if(c9==1)
          i=s1;
          else if(r9==1)
          i=s2;
          else if(c9==0&&r9==0)
          i='i';
          
          
          cout<<"\n";
      cout<<"\n";
      cout<<"\n";
      v1();
      cout<<"\n";
      v1();
      cout<<"\n";
      abc(a,b,c);
      cout<<"\n";
      v1();
      cout<<"\n";
      v1();
      cout<<"\n";
      h1();
      cout<<"\n";
      v1();
      cout<<"\n";
      v1();
      cout<<"\n";
      def(d,e,f);
      cout<<"\n";
      v1();
      cout<<"\n";
      v1();
      cout<<"\n";
      h1();
      cout<<"\n";
      v1();
      cout<<"\n";
      v1();
      cout<<"\n";
      ghi(g,h,i);
      cout<<"\n";
      v1();
      cout<<"\n";
      v1();
      }
      
      
      
      
// this function is the intro page of the game
  void page1()
  {
       int i;
    
    cout<<"\n\n\n\n\n\n\n\n\n\n    \t\t\t\t";
    cout<<"TIC-TAC-TOE";
    cout<<"\n\n\n";
    cout<<"\n\n\n\t\t\t     LOADING PLEASE WAIT ";
    for(i=1;i<=4;i++)
    {
                     cout<<".";
                     Sleep(1500);
                     }
                    
                    }
   //it prints the round name before the round starts in the centre
    void round(int k)
    {
                   
    cout<<"\n\n\n\n\n\n\n\n\n\n\n       \t\t\t\t ROUND "<<k;
    Sleep(1500);
    
}      

// this function prints the game heading, round name , and the functionalities on every turn
      void roundhead(int l)
      {
           cout<<"\n \t \t \t    Tic Tac Toe";
          
           cout<<"\n \n \t \t \t      Round "<<l;
           
            cout<<"\n\n     r=Reset\t \t \t n=New\t \t \t \t q=Quit";
            
            
            
            }
   //it gives the score on every turn and changes accordingly after every round
      void scorehead(char p1[],char p2[],int g1,int g2)
      {
           
           cout<<"\n\n\n    Score \n\n";
      
           
      cout<<p1<<"    "<<p2<<"\n\n";
      cout<<g1<<"         "<<g2;
      
      }
      //it gives the final score
        void finalscore(char p1[],char p2[],int g1,int g2)
      {
      cout<<"\n\n\n\n\n\n\n        \t\t\t  FINAL SCORES  \n\n";
      cout<<"\n\n      \t\t\t\t"<<p1<<"       "<<p2<<"\n\n";
      cout<<"\n\n    \t\t\t\t "<<g1<<"            "<<g2;
    }
      
      
      
int main()

{ 
        label3:   
        system ( "color 20" );
        
      page1(); // It displays the first page i.e. introduction
      system("CLS");//Clears the screen
      
             /*This block of instructions accepts and stores Name, symbols and rounds of players */
  char p1[30],s1,s2,p2[30];
    int v;
    cout<<"\n\n \t\t\tWELCOME TO THE TIC-TAC-TOE WORLD";
   
    Sleep(2000);
    cout<<"\n\n \t Please Enter the Player's Names \n \n";
    Sleep(2000);
   cout<<"\n\n \t Player 1 : ";
    cin>>p1;
    //cout<<"\n\n\n "<<p1;
    cout<<"\n \t Enter your symbol : ";
    cin>>s1;
    //cout<<s1;
     Sleep(500);
    cout<<"\n\n \t Player 2 : ";
    cin>>p2;
    //cout<<"\n\n\n "<<p2;
    cout<<"\n\n \t Enter your symbol : ";
    cin>>s2;
    //cout<<s2;
    Sleep(500);
    cout<<"\n\n \t Enter the number of rounds to be Played : ";
    cin>>v;
    
    
      
     system("CLS") ;
      int v2=1;
      round(v2);
      system("CLS") ;
      int k1=0,k2=0; //variables used to keep track of the score
      label2:
             
      while(v2<=v)//here v is the number of rounds , initially v2 is 1
      {
                        
       round(v2);                 
      int i,p=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,l=0,g1=0,g2=0;
      char a;
        system("CLS");
        i=1;
         label1:
       roundhead(v2);         
       
       scorehead(p1,p2,k1,k2);
      
      
      
       hash(c1,c2,c3,c4,c5,c6,c7,c8,c9,r1,r2,r3,r4,r5,r6,r7,r8,r9,s1,s2);
      
      
      while(i<=9)
      {                
      
                       check(c1,c2,c3,c4,c5,c6,c7,c8,c9,r1,r2,r3,r4,r5,r6,r7,r8,r9,i,&g1,&g2,&k1,&k2);
                       
                       if(g1!=0||g2!=0) //this conditional statement is used to stop the round when any of the two players win
                       {
                                       system("CLS");
                                       
                                       goto label4;
                                       }
                       
      if(i==1||i==3||i==5||i==7||i==9)
       cout<<"\n \n \n\t "<<p1<<" enter Position   ";
        else if(i==2||i==4||i==6||i==8)
        cout<<"\n \n \n\t "<<p2<<" enter Position   ";
        
       cin>>a;
       system("CLS");
           switch(a)
      {
               case 'a':
                    {
                    if(i==1||i==3||i==5||i==7||i==9)
                    c1=c1+1;
                    else if(i==2||i==4||i==6||i==8)
                    r1=r1+1;
                    i++;
                    //cout<<g1<<g2;
                    //Sleep(2000);
                     roundhead(v2);  
                     scorehead(p1,p2,k1,k2);
                    
                     
                    hash(c1,c2,c3,c4,c5,c6,c7,c8,c9,r1,r2,r3,r4,r5,r6,r7,r8,r9,s1,s2);
                    break;
                    }
                    
               case 'b':
                    {
               if(i==1||i==3||i==5||i==7||i==9)
               c2=c2+1;
               else if(i==2||i==4||i==6||i==8)
               r2=r2+1;
               //cout<<c2<<r2;
                   i++;
                    roundhead(v2);  
                    scorehead(p1,p2,k1,k2);
                hash(c1,c2,c3,c4,c5,c6,c7,c8,c9,r1,r2,r3,r4,r5,r6,r7,r8,r9,s1,s2);
               break;
               }
                    
                  case 'c':
                       {
                   if(i==1||i==3||i==5||i==7||i==9)
                    c3=c3+1;
                    else if(i==2||i==4||i==6||i==8)
                    r3=r3+1;
                      i++;
                       roundhead(v2);  
                      scorehead(p1,p2,k1,k2);
                      hash(c1,c2,c3,c4,c5,c6,c7,c8,c9,r1,r2,r3,r4,r5,r6,r7,r8,r9,s1,s2);
                    break;
                    }        
                    
                     case 'd':
                       {
                   if(i==1||i==3||i==5||i==7||i==9)
                    c4=c4+1;
                    else if(i==2||i==4||i==6||i==8)
                    r4=r4+1;
                      i++;
                       roundhead(v2);  
                       scorehead(p1,p2,k1,k2);
                    hash(c1,c2,c3,c4,c5,c6,c7,c8,c9,r1,r2,r3,r4,r5,r6,r7,r8,r9,s1,s2);
                    break;
                    }        
                    
                     case 'e':
                       {
                   if(i==1||i==3||i==5||i==7||i==9)
                    c5=c5+1;
                    else if(i==2||i==4||i==6||i==8)
                    r5=r5+1;
                     i++;
                      roundhead(v);  
                      scorehead(p1,p2,k1,k2);
                   hash(c1,c2,c3,c4,c5,c6,c7,c8,c9,r1,r2,r3,r4,r5,r6,r7,r8,r9,s1,s2);
                    break;
                    }        
                    
                     case 'f':
                       {
                   if(i==1||i==3||i==5||i==7||i==9)
                    c6=c6+1;
                    else if(i==2||i==4||i==6||i==8)
                    r6=r6+1;
                     i++;
                      roundhead(v2);  
                      scorehead(p1,p2,k1,k2);
                    hash(c1,c2,c3,c4,c5,c6,c7,c8,c9,r1,r2,r3,r4,r5,r6,r7,r8,r9,s1,s2);
                    break;
                    }        
                    
                    
                    
                     case 'g':
                       {
                   if(i==1||i==3||i==5||i==7||i==9)
                    c7=c7+1;
                    else if(i==2||i==4||i==6||i==8)
                    r7=r7+1;
                      i++;
                       roundhead(v2);  
                       scorehead(p1,p2,k1,k2);
                     hash(c1,c2,c3,c4,c5,c6,c7,c8,c9,r1,r2,r3,r4,r5,r6,r7,r8,r9,s1,s2);
                    break;
                    }        
                    
                    
                    case 'h':
                       {
                   if(i==1||i==3||i==5||i==7||i==9)
                    c8=c8+1;
                    else if(i==2||i==4||i==6||i==8)
                    r8=r8+1;
                      i++;
                       roundhead(v2);  
                       scorehead(p1,p2,k1,k2);
                  hash(c1,c2,c3,c4,c5,c6,c7,c8,c9,r1,r2,r3,r4,r5,r6,r7,r8,r9,s1,s2);
                    break;
                    }   
                    
                    
                    case 'i':
                       {
                   if(i==1||i==3||i==5||i==7||i==9)
                    c9=c9+1;
                    else if(i==2||i==4||i==6||i==8)
                    r9=r9+1;
                     i++;
                      roundhead(v2);  
                      scorehead(p1,p2,k1,k2);
                     hash(c1,c2,c3,c4,c5,c6,c7,c8,c9,r1,r2,r3,r4,r5,r6,r7,r8,r9,s1,s2);
                    break;
                    }   
                    
                    case 'r': // r is used to reset the round
                    {
                         goto label2;
                         break;
                         }
                    
                    case 'n': // n is used to start a new game by jumping to label3
                         {
                             goto label3;
                             break;
                             }
                             
                    case 'q': // the only way to end the game is by entering 'q' during the game
                         {
                             exit(0);
                             break;
                             }
                                      
                    default:
                            {
                            cout<<"\n \n \t \t "<<"\n\n\n\n \t\t\t Wrong Position, Enter Again"<<endl;
                             Sleep(700);
                             system("CLS");
                            goto label1; 
                            }
                            }
                  
                    
                    
                    
                    
                    }    
                           label4:                    
                           v2++;//increments the rounds
                           system("CLS");
                          
                    goto label2;      
                    
      }
      finalscore(p1,p2,k1,k2);// gives the final score page
      Sleep(2500);
      char p;
      system("CLS");
       cout<<"\n\n\n\n\n\n\n\n\n\n\n     \t\t\tDo you want to play another game(y/n):  ";
      cin>>p; 
      if(p=='n')
      exit(0);
      else if(p=='y')
      goto label3;
      getch();
      return 0;
      
      
      
}
      
      
       
       
