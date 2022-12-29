#include <iostream>
using namespace std;
int main()
{
    int arr[6];
         for(int i=0;i<=5;i++){
    cin>>arr[i];
}

    cout<<"NON-REVERSED NUMBERS ARE:"<<endl;
         for(int i=0;i<=5;i++)

    { 
	cout<<arr[i]<<endl;
    }

    cout<<endl;
    cout<<"REVERSED NUMBERS ARE:"<<endl;
         for(int i=5;i>=0;i--)
 
    {
	cout<<arr[i]<<" "<<endl;
    }
  
  return 0;

}