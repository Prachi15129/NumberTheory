#include<iostream>
using namespace std;
int GCD(int a,int b)
{
    
    return b==0?a:GCD(b,a%b);
}
int LCM(int gcd,int p,int q)
{
	gcd=GCD(p,q);
	return (p*q)/gcd;

}
int main()
{
    int a,b;
    cin>>a>>b;
    int gcd=GCD(a,b);
	cout<<LCM(gcd,a,b);
    return 0;
}
