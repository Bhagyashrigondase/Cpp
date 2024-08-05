//Write a program to create an array of integers and perform following operations on that array like 
//finding the sum, average, maximum and minimum number in that array. Accept the numbers of the 
//array from user. 
#include<iostream>
using namespace std;

int sumofarray(int* arr,int n)
{
      int sum=0;
      for(int i=0;i<n;i++)
      {
        sum=sum+arr[i];
      }
      return sum;
}

int avgofarray(int* arr,int n)
{
    int avg=0,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    return avg; 
}

void maxmin(int* arr,int n)
{
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"MIN="<<min<<" Max="<<max<<endl;
}

/*void display(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
*/
int main()
{
    int n,ans;
    cout<<"Enter the size of an array=";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the array elements=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ans=sumofarray(arr,n);
    cout<<"Sum of an array="<<ans<<endl;
    cout<<"\n------------------------------"<<endl;

    ans=avgofarray(arr,n);
    cout<<"Average of an array="<<ans<<endl;

    cout<<"\n------------------------------"<<endl;
    maxmin(arr,n);
    //cout<<"Min and max in array="<<ans<<endl;

    return 0;
}