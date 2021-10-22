
#include<iostream>
#include<string>
#include<cstring>
using namespace std ;
int main ()
{
    string t1;
    cin>>t1;
     int hr,mn,sec;
     hr= (t1[0]-'0')*10 + (t1[1]-'0');
     mn= (t1[3]-'0')*10+(t1[4]-'0');
     sec=(t1[6]-'0')*10+(t1[7]-'0');
     if (t1[8]=='A'&& hr==12 )
     {
         hr=00;

     }
     else if ( t1[8]=='P')
     {
         if ( hr==12 )
         {
             hr=12;

         }
         else
         {
         hr=hr+12;
     }
}

   printf("%02d:%02d:%02d",hr,mn,sec);
}
