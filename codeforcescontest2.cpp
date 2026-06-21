// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//         // your code goes here
//         int t;
//         cin >> t;
//         while (t--) {
//             int n;
//             cin >> n;
//             int arr[n];
//             for (int i = 0; i < n; i++) {
//                 cin >> arr[i];
//             }
//             int sum = 0;
//             for (int i = 0; i < n; i++) {
//                 if (i == 0) sum += arr[i];
//                 else {
//                     if (arr[i] > arr[i - 1]) {
//                         sum += arr[i - 1];
//                         arr[i] = arr[i - 1];
//                     } else {
//                         sum += arr[i];
//                     }

//                 }

//             }
//             cout<<sum<<endl;

//         }
// }




// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//         // your code goes here
//         long long t;
//         cin >> t;
//         while (t--) {
//              long long n ;
//             cin>>n;
//             long long arr[n];
            
            
//             for( long long i =0;i<n;i++){
//                 cin>>arr[i];
                
//             }
//             for( long long i =0;i<n-1;i++){
                
//                 if(arr[i+1]<arr[i]){
                    
//                   arr[i+1]=arr[i+1]+arr[i];  
//                 }
//             }
//             cout<<arr[n-1]<<endl;
            
            
//         }
// }
