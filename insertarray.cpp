#include<iostream>
using namespace std;
int main()
{
    int n, arr[10], elem, pos, i, j, found=0;
    cout<<"Enter the range of the array :- ";
    cin>>n;
    cout<<"Now enter the elements in array :-\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The required array is :- \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        cout<<"\n";
    }
    cout<<"Enter Element to Insert: ";
    cin>>elem;
    cout<<"At What Position ? ";
    cin>>pos;
    for(i=n; i>=pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[i] = elem;
    n++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<n; i++)
    {   
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    cout<<"Now enter Element which you want to Delete :- ";
    cin>>elem;
    for(i=0; i<n; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(n-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            n--;
        }
    }
    if(found==0)
        cout<<"\nElement doesn't exist!";
    else
        cout<<"Congratulations! Element Deleted Successfully!   :)\n";
        cout<<"After deletion the array becomes :-\n";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    cout<<endl;
    return 0;
}
