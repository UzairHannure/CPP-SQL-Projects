 

#include<iostream.h> 

#include<conio.h> 

class CLOCK 

{ 

int hour; 

int minute; 

public: 

void readtime(int, int); 

void showtime(); 

void addtime(CLOCK, CLOCK); 

} z; 

void CLOCK::readtime(int a, int b) 

{ 

hour= a;

minute= b;

}

void CLOCK::showtime() 

{ 

cout<<"\nTotal Time: "; 

cout<<hour<<" hrs "<<minute<<" mins "; 

} 

void CLOCK::addtime(CLOCK x, CLOCK y) 

{ 

hour=0; 

minute=0; 

hour=x.hour+y.hour; 

minute=x.minute+y.minute; 

if(minute>=60) 

{ 

hour+=minute/60; 

minute=minute%60; 

} 

} 

void main() 

{ 

clrscr(); 

CLOCK c1, c2, z; 

int f, g, i, j;

cout<<"\nEnter time 1 in hours: "; 

cin>>f; 

cout<<"\nEnter time 1 in minutes: "; 

cin>>g; 

cout<<"\nEnter time 2 in hours: "; 

cin>>i; 

cout<<"\nEnter time 2 in minutes: "; 

cin>>j; 

c1.readtime(f, g); 

c2.readtime(i, j); 

z.addtime(c1, c2); 

z.showtime(); 

getch(); 

} 