#include<iostream>
using namespace std;
float taxcalculator(char type,float price);
main()
{
    char type;
    float price;
    float finalresult;
    system("cls");
    cout<<"enter the price of vehical";
    cin>>price;
    cout<<"enter the type of vehical";
    cin>>type;
    finalresult=taxcalculator(type, price);
    cout<<"The final Price of Vehical of type $"<<type<<"after adding the tax is $"<<finalresult<<endl;

}
 float taxcalculator(char type, float price)
{
    float taxprice;
    float final;
    float amount;
     if(type=='M')
     {
        amount=(price*6) /100;
        final=price+amount;
        return final;
     }
       if(type=='E')
    {
        amount=(price*8) /100;
        final=price+amount;
        return final;
     } 
         if(type=='S')
      {
        amount=(price*10) /100;
        final=price+amount;
        return final;
      }  
          if(type=='V')
       {
         amount=(price*12) /100;
         final=price+amount;
         return final;
        } 
           if(type=='T')
          {
            amount=(price*15) /100;
             final=price+amount;
             return final;
           }
               return 0;
}