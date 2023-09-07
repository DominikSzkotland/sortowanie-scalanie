#include <iostream>
#include <vector>
const int iloscelementow = 5;
using namespace std;
void merge(int arr[],int left,int middle, int right)
{
    int i = left;
    int j = middle + 1;
    int k = left;

    int tempArr[iloscelementow];
    while(i <= middle && j <= right)
    {
        if(arr[i]<=arr[j])
        {
            tempArr[k] = arr[i];
            i++;
            k++;

        }
        else
        {
            tempArr[k] = arr[j];
            j++;
            k++;
        }
    }
    while(i<=middle)
    {
        tempArr[k]=arr[i];
        i++;
        k++;
    }
    while(j<=right)
    {
        tempArr[k]=arr[j];
        j++;
        k++;
    }
    for(int i=left;i<=right;i++)
    {
        arr[i]=tempArr[i];
    }
}
void mergeSort(int arr[],int left, int right)
{
    if(left < right)
    {
        int middle = (left + right)/2;
        mergeSort(arr,0,middle);
        mergeSort(arr,middle+1,right);
        merge(arr,left,middle,right);
    }
}

int main()
{
    //int arr[5] = {4,6,1,2,7}

    int arr[iloscelementow];
    for(int i=0;i<iloscelementow;i++)
    {
        cin>>arr[i];
    }
    cout<<"przed sortowaniem"<<endl;
    for(int i=0;i<iloscelementow;i++)
    {
        cout<<arr[i]<<" ";
    }

    mergeSort(arr,0,iloscelementow - 1);
    cout<<endl;
    cout<<"po sortowaniu"<<endl;
    for(int i=0;i<iloscelementow;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
