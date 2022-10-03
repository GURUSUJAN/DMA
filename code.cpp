#include"iostream"
using namespace std;
int main()
{
    int ar[100],i,count=0;
    for(i=0;i<100;i++)
    {
        cin>>ar[i];
        if(ar[i]<0)
        break;
        else
        count++;
    }
    cout<<count<<endl;
}
