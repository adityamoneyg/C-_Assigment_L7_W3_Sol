#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

//                             2 Solution

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//                             3 Solution

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
}

//                             4 Solution

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. ";
    cin>>n;
    for(int i=1;i<=n+1;i++){
        for(int j=1;j<=i;j++){
            if (i%2==0) cout<<char(j+64)<<" ";
            else cout<<j<<" ";
        }
        cout<<endl;
    }
}

//                             5 Solution

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i = 0; i < n-1; ++i) {
        for(int j = 0; j < n - i - 1; ++j) {
            cout << "* ";
        }
    cout << endl;
    }
}    

//                                 6 Solution

#include <iostream>
using namespace std;
int main() {
    int m, n;
    cin>>m>>n;
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i == 0 || j == 0 || i == m-1 || j == n-1) {
                cout << "* ";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
return 0;
}

//                               7 Solution

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n-i-1; ++j) {
            cout << " ";
        }
        for(int j = 0; j < n; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

//                                   8 Solution

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

//                                   9 Solution

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n-i-1; ++j) {
            cout << " ";
            }
        for(int j = 1; j <= i+1; ++j) {
            cout << (char)('A' + j - 1) << " ";
            }
        cout << endl;
    }
}

//                            10. Solution

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n-i-1; ++j) {
            cout << " ";
        }
        for(int j = i+1; j >= 1; --j) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

//                            11. Solution

#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n-i-1; ++j) {
            cout<<" ";
        }
        for(int j = 0; j <= i; ++j) {
            cout<<"*";
        }
        cout<<endl;
    }
// Printing lower triangle
    for(int i = 0; i < n-1; ++i) {
        for(int j = 0; j <= i; ++j) {
            cout << " ";
        }
        for(int j = 0; j <=n; --j) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}