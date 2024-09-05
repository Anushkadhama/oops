#include <iostream>
using namespace std; 
 int main()
{
    int n;
    cin>>n;
    int a[n], presum[n], groups=0, group_size=0, temp=0 ;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        presum[i] = a[i] + temp ;
        temp = presum[i] ; 
    }
    for(int i = 0; ( i * i + i ) / 2 <=n; i++) {
        group_size = ( i * i + i ) / 2;
        groups = i;
    }
    int sum = 0, mx=a[0];
    for(int i=0; i<n; i++) {
        if( n-i < group_size ) {
            groups-- ;
            group_size = ( groups * groups + groups) / 2;
        }
        sum = presum[ i + group_size - 1 ] - presum[i]  + a[i];
        if(sum>mx) mx=sum;
    }
    cout<<mx<<endl;
    return 0;
}