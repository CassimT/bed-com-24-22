#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


 int main()
     {
          srand(time(0));  
         int daysUntilExpiration = rand() % 12 ; //generated random number is assigned to daysUntilexpiration
           if (daysUntilExpiration <= 10 && daysUntilExpiration > 5 )
        {
            cout<<"\n Your subscription will expire soon. Renew now! \n"<<endl;
        }
      else if (daysUntilExpiration <=5 && daysUntilExpiration > 1 )
        {
            cout<<"\n Your subscription will expire in "<<daysUntilExpiration<<" days \n Renew now and save 10%! \n"<<endl;
        }
      else if (daysUntilExpiration == 1)
        {
            cout<<"\n Your subscription expires within a day \n"<<"Renew now and save 20%! \n"<<endl;
      }
      else if (daysUntilExpiration == 0)
        {
            cout<<"\n Your subscription has expired \n"<<endl;
        }
      else if (daysUntilExpiration > 10 )
        {
            cout<<"\n You have an active subscription \n"<<endl;
        }
       return 0;
     }
