int main() 
{
	int n,m,sum=0,count=0;
    cin>>n>>m;
    int a[n];

    for(int i=0;i<n;i++)
    {
    cin>>a[i];
     sum+=a[i];
     if(a[i]>sum/4*m)
     count++;
    }
    if(count>m)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}