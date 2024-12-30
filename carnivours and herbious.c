#include<stdio.h>
void main() {

struct animal
{
   char name[30];
   int type;
};

struct animal a={"OCELOT",18};

int t1,t2,typ1,typ2;



t1= a.type >> 3;

typ1= t1 & 2;    

t2= t1 << 3;

typ2= t2 & 16;      
if(typ1==1)
printf("\n\nOCELOT is Canine\n");

if(typ1==2)
printf("\n\nOCELOT is Feline\n");

if(typ1==4)
printf("\n\nOCELOT is Cetacean\n");

if(typ1==8)
printf("\n\nOCELOT is Marsupial\n");

if(typ2!=0)
printf("\n\nOCELOT is Carnivore\n");

if(typ2==0)
printf("\n\nOCELOT is Herbivore\n");


getch();

}

