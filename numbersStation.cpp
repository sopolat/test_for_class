#include <iostream>

using namespace std;
void answer(int l[],int t,int len, int* ans)
{
	int sum=l[0];
	int i=0;
	int j=0;
	while(j<len)
	{
		if(sum==t)
		{
			ans[0]=i;
			ans[1]=j;
			return;
		}
		else if(sum>t)
		{
			sum-=l[i];
			i++;
		}
		else
		{
			j++;
			sum+=l[j];
		}
		cout<<i<<" , "<<j<<" , "<<sum<<endl;
	}
	return;
}
int main()
{
    int l[] ={4, 3, 10, 2, 8,7,11,456,21,23,4, 3, 10, 2, 8,7,11,456,21,23};
	int len=20;
	int t=12;
	int ans[]={-1,-1};
	answer(l,t,len,ans);
	cout<<ans[0]<<" , "<<ans[1]<<endl;
    return 0;
}
