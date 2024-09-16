#include <iostream> 
using namespace std; 

int main(){
    
    int n,i=0;
    cout<<"Enter number of rows : ";
    cin>>n;

    while(i<n){
        int j=0;
        while(j<n){
            cout<<"* ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";

    i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<i+1<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";

    i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<j+1<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";

    i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<n-j<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";

    i=0;
    int k=1;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<k<<" ";
            j++;
            k++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";

    i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";

    i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<i+1<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";

    i=0;
    k=1;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<k++<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";

    i=0;
    while(i<n){
        int j=0;
        k=i+1;
        while(j<=i){
            cout<<k++<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";

    i=0;
    while(i<n){
        int j=0;
        k=i+1;
        while(j<=i){
            cout<<k--<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";

    i=0;
    char c='A';
    while(i<n){
        int j=0;
        while(j<n){
            cout<<c<<" ";
            j++;
        }
        cout<<"\n";
        i++;
        c++;
    }

    cout<<"\n\n\n";

    i=0;
    while(i<n){
        int j=0;
        char c='A';
        while(j<n){
            cout<<c<<" ";
            j++;
            c++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";

    c='A';
    i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<c<<" ";
            j++;
            c++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";


    i=0;
    while(i<n){
        c='A';
        c+=i;
        int j=0;
        while(j<n){
            cout<<c<<" ";
            j++;
            c++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";


    i=0;
    while(i<n){
        c='A';
        c+=i;
        int j=0;
        while(j<=i){
            cout<<c<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";

    c='A';
    i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<c++<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";


    i=0;
    
    while(i<n){
        c='A';
        c+=n-i-1;
        int j=0;
        while(j<=i){
            cout<<c++<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";


    i=0;
    while(i<n){
        int j=0;
        while(j<n-i-1){
            cout<<" ";
            j++;
        }
        int k=0;
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";


    i=0;
    while(i<n){
        int j=0;
        while(j<n-i){
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";


    i=0;
    while(i<n){
        int j=0;
        while(j<i){
            cout<<" ";
            j++;
        }
        int k=0;
        while(k<n-i){
            cout<<"*";
            k++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";


    i=0;
    while(i<n){
        int j=0;
        while(j<i){
            cout<<" ";
            j++;
        }
        int k=0;
        while(k<n-i){
            cout<<i+1;
            k++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";


    i=0;
    while(i<n){
        int j=0;
        while(j<n-i-1){
            cout<<" ";
            j++;
        }
        int k=0;
        while(k<=i){
            cout<<i+1;
            k++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";


    i=0;
    while(i<n){
        int j=0;
        while(j<i){
            cout<<" ";
            j++;
        }
        int k=i+1;
        while(k<=n){
            cout<<k;
            k++;
        }
        cout<<"\n";
        i++;
    }

    cout<<"\n\n\n";


    i=0;
    int count=1;
    while(i<n){
        int j=0;
        while(j<n-i-1){
            cout<<" ";
            j++;
        }
        int k=0;
        while(k<=i){
            cout<<count++;
            k++;
        }
        cout<<"\n";
        i++;
    }


    cout<<"\n\n\n";


    i=0;
    while(i<n){
        int j=0;
        while(j<n-i-1){
            cout<<" ";
            j++;
        }
        int k=0;
        count=1;
        while(k<=i){
            cout<<count++;
            k++;
        }
        count=i;
        while(count){
            cout<<count--;
        }
        cout<<"\n";
        i++;
    }

return 0;
}