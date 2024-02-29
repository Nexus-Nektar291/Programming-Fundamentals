#include<iostream>
using namespace std;
int calculategcd(int no1, int no2);
int calculateLCM(int no1, int no2, int result);
main()
{
    int no1,no2;
    int result,result1;
    cout<<"enter no one:";
    cin>>no1;
    cout<<"enter no two:";
    cin>>no2;
    result=calculategcd(no1,no2);
    cout<<"hcf is:"<<result<<endl;
    result1=calculateLCM(no1,no2,result);
    cout<<"lcm is:"<<result1;


}
int calculategcd(int no1, int no2)
{
    int x;
    int hcf;
    for(int i=1;i<=no1;i=i+1)
    {
        if(no1%i==0&&no2%i==0)
        {
            hcf=i;
        }
    }
    return hcf;
}
int calculateLCM(int no1, int no2, int result)
{
    int lcm;
    lcm=no1*no2/result;
    return lcm;
}