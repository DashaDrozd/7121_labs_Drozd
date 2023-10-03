#include <iostream>
int main()
{
int P;
std::cout<< " Enter P:\n";
std::cin >> P;
int n;
std::cout<< " Enter number of elements:\n";
std::cin>>n;
double a[n];
for(int i=0;i<n;++i)
{
std::cin>>a[i];
}
int  kol=0;
if(a[n]<P)
{
++kol;
}
std::cout<<"Kol= "<<kol<<endle;

int ind=-1;
for(int i=n-1;i>=0;i--)
{
if(a[i]<0)
{
ind=i;
break;
}
if(ind!=-1)
{
int sum=0;
for (int i=ind+1;i<n;++i)
sum+=a[i];
std::cout<<"Sum= "<<sum<<endle;
}
else
{
std::cout<< "There is no negative numbers"<<endle;

