#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>

string ari(string);

string grade (int);

string ari(string st)
{
 
  int w=0,s=0,l=0;
 for(int i=0;i<strlen(st);i++)
 {
   
   if(st[i]>='0' && st[i]<='9')
    l++;
   else if(st[i]>='a' && st[i]<='z')
    l++;
   else if(st[i]>='A' && st[i]<='Z')
    l++;
    
   if(st[i]==' ')
    w++;
   else if(st[i]=='.' || st[i]=='?')
    s++;
    else if(st[i]=='!')
    s++;
   
 }
   
  float score = (4.71*(float)(l)/w)+(0.5*((float)(w)/s))-21.43;
  string grade(int score)
{
  switch(score){
  
 case 1 : return"Kindergarten";
 case 2 :  return "First/Second Grade";
 case 3 : return "Third Grade";
 case 4 : return "Fourth Grade";
 case 5 : return " Fifth Grade";
 case 6 : return "Sixth Grade";
 case 7  : return "Seventh Grade";
 case  8 : return "Eighth Grade";
 case  9 : return "Ninth Grade";
 case 10 : return "Tenth Grade";
 case 11 : return "Eleventh Grade";
 case 12 : return "Twelfth grade";
 case 13 : return "College student";
 case 14: return "Professor";
  
 
    
    }
    }
  st = grade((int)(score)+1);
  
  return st;
}
