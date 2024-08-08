//23070123075 kshitij yadav
#include <iostream>
using namespace std;

int main()
{
	int size;
    int arr[size];
    int i;
    int j;
    int key;
    cout<<"Please Enter size";
    cin>>size;
    for(i=0;i<=size-1;i++)
    {
        cout<<"Please Enter Numbers: ";
        cin>>arr[i];
    }
    cout<<"Please Enter Number To be checked";
    cin>>key;
    for(j=0;j<=size-1;j++)
	{
    	if(key==arr[j])
		{
    		cout<<"Key is founded at"<<j<<endl;
    		break;
		}

		else
		{
			cout<<"Key is not found";
			break;
		}
    }
}
/*
Please Enter size2
Please Enter Numbers: 1
Please Enter Numbers: 2
Please Enter Number To be checked1
Key is founded at0


*/
