#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
      {
        srand(time(0));
        int daysUntilExpiration = rand () % 12;
        
        switch (daysUntilExpiration)
        {
          case 0:
          cout<<" \n Your subscription has epired \n" << endl;
            break;
         
          case 1:
          cout<<"\n Your subscription expires within a day \n"<<endl;
            break;
        
          case 2 ... 5:
          cout<<"\n Your subscription will epire in " << daysUntilExpiration <<" days \n Renew now and save 10% \n"<<endl;
           break;

          case 6 ... 10:
          cout<<"\n Your subscription will expire soon \n " << " Renew now! \n"<<endl;  
            break;
          
        default:
           cout<<"\n you have an active subscription"<<endl;
            break;
        }
        return 0;
      }