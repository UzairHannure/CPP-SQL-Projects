#include<iostream.h> 

#include<conio.h> 

class building 

{ 

public: 

int floors; 

int rooms; 

float sqft; 

}; 

class house:private building 

{ 

int bedrooms; 

int bathrooms; 

 

public: 

void putdata(); 

void getdata(); 

}; 

class office:private building 

{ 

int fireexting; 

int tele; 

 

public: 

void putdata(); 

void getdata(); 

}; 

void house::getdata() 

{ 

cout<<"\t\t\t\tHOUSE DETAILS"; 

cout<<"\nEnter no. of floors: "; 

cin>>floors; 

cout<<"\nEnter no. of rooms: "; 

cin>>rooms; 

cout<<"\nEnter no. of bedrooms: "; 

cin>>bedrooms; 

cout<<"\nEnter no. of bathrooms: "; 

cin>>bathrooms; 

cout<<"\nEnter total size of house: "; 

cin>>sqft; 

} 

void house::putdata() 

{ 

cout<<"\nNo. of floors: "; 

cout<<floors; 

cout<<"\nNo. of rooms: "; 

cout<<rooms; 

cout<<"\nNo. of bedrooms: "; 

cout<<bedrooms; 

cout<<"\nNo. of bathrooms: "; 

cout<<bathrooms; 

cout<<"\nTotal size of house: "; 

cout<<sqft; 

} 

void office::getdata() 

{ 

cout<<"\n\t\t\t\tOFFICE DETAILS"; 

cout<<"\nEnter no. of floors: "; 

cin>>floors; 

cout<<"\nEnter no. of rooms: "; 

cin>>rooms; 

cout<<"\nEnter no. of fire extinguishers "; 

cin>>fireexting; 

cout<<"\nEnter no. of telephones: "; 

cin>>tele; 

cout<<"\nEnter total size of office: "; 

cin>>sqft; 

} 

void office::putdata() 

{ 

cout<<"\nNo. of floors: "; 

cout<<floors; 

cout<<"\nNo. of rooms: "; 

cout<<rooms; 

cout<<"\nNo. of fire extinguishers: "; 

cout<<fireexting; 

cout<<"\nNo. of telephones: "; 

cout<<tele; 

cout<<"\nTotal size of office: "; 

cout<<sqft; 

} 

void main() 

{ 

clrscr(); 

house h1; 

office o1; 

h1.getdata(); 

h1.putdata(); 

o1.getdata(); 

o1.putdata(); 

getch(); 

} 