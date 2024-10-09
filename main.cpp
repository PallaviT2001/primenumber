#include <QCoreApplication>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int n=0;
    int sum=0;
    int i=1;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<" Sum of prime number is"<<n<<" "<<sum<<endl;

    return a.exec();
}
