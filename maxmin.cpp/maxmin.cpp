//kshitij yadav 23070123075
#include<iostream>
using namespace std;
int main ()
{
    int arr[6]={33,23,21,34,343,2};
    int min = arr[0];
    int max = arr[0];
    for(int i=1; i<6; i++) 
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"min number is "<<min <<"."<<endl;
    cout<<"max number is "<<max <<"."<<endl; 
    
    return 0;
}
/*
min number is 2
max number is 343.


=== Code Execution Successful ===
*/
