#include <iostream>
using namespace std;

//not correct

void printArray(int array[], int n){
    for (int i=0; i<n; i++)
        cout<<array[i]<<" ";
    cout<<endl;
}
void merge(int array1[], int m, int array2[], int n, int array[]){

    int i = 0, j = 0, k = 0;

    while(k<m+n){
        if(array1[i] <= array2[j] || j == n){
            array[k] = array1[i];
            i++; k++;
        }

        if(array2[j] < array1[i] || i == m){
            array[k] = array2[j];
            j++; k++;
        }
    }
}

void mergeSort(int array[], int left, int right, int ans[]){
    if(left==right){
        ans[0]=array[left];
        return;
    }
    cout<<"Input : \n";
    printArray(array, right-left+1);
    if(right>left){
        int mid = (left+right)/2;
        int L[mid-left+1], R[right-mid];
        mergeSort(array, left, mid, L);
        cout<<"Left : \n";
        printArray(L, mid-left+1);
        mergeSort(array, mid+1, right, R);
        cout<<"Right : \n";
        printArray(R, right-mid);
        merge(L, mid-left+1, R, right-mid, ans);
        cout<<"Merged : ";
        printArray(ans, right-left+1);
    }
    
}
int main()
{

    int n;
    cout << "Enter Size : ";
    cin >> n;

    int array[n];

    cout << "Enter Elements : ";

    for (int i = 0; i < n; i++)
        cin >> array[i];

    int ans[n];

    mergeSort(array, 0, n-1, ans);

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";

    return 0;
}