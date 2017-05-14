#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>


 int queue[5] ,front= -1,rear = -1;
 void insert()
 { int item;
 if(rear==(4))
 cout<<"QUEUE IS FULL!\n";

 else
 { if(front=-1)
    {front=rear=0;
cout<<"Insert item";
      cin>>item;
      queue[front]=item;
      }
 else
 {   cout<<"Insert item";
   cin>>item;
rear++;
  queue[rear]=item;
}
  cout<<"Element "<<queue[rear]<<" Successfully inserted!";
 }
}

 void del()
 {if(front==rear+1 || front==-1)
  cout<<"QUEUE is Empty";
  else
  {   cout<<"Element "<<queue[front]<< " Successfully Deleted!";
      front++;
  }
 }

 void disp()
 { if(front==rear+1 || front==-1)
  cout<<"QUEUE is Empty";
  else
  { cout<<"Your Queue is:\t";
 for(int i=front;i<=rear;i++)
 cout<<queue[i]<<" - ";
 }
}



void main()
 {clrscr();
  int m;
  char ch;

do
 {
  cout<<"[1] INSERT"<<"\n[2] DELETE"<<"\n[3] DISPLAY"<<"\n[4] EXIT";
  cout<<"\n Enter Your Choice: ";
  cin>>m;
  switch(m)
     { case 1: insert();
	       break;
       case 2: del();
	       break;
       case 3: disp();
	       break;
       case 4: exit(0);
     }
  cout<<"\n\t\t\tDo you want to Continue?...(Y/N)";
  cin>>ch;
  }while(ch=='Y'||ch=='y');
  cout<<"Thank you..Press any key to exit";
  getch();
}