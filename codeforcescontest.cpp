// #include <iostream>
// using namespace std;

// int main() {
	
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n ;
// 	    cin>>n;
// 	    int arr[n];
// 	    int maxi=0;
// 	    int mini=10000;
// 	    for(int i =0;i<n;i++){
// 	        cin>>arr[i];
// 	        maxi = max(maxi,arr[i]);
// 	        mini = min(mini,arr[i]);
// 	    }
// 	    cout<<maxi-mini+1<<endl;
// 	}

// }






// #include <iostream>
 
// using namespace std;
 
// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         string s;
//         cin >> s;
//         bool truth = true;
//         for (int i = 0; i < n; i++) {
//             if(s[i]=='1'){
//                 s[i]='0';
//                 if(i+m>=n){
//                     truth = false;
//                     continue;
//                 }
//                 if(s[i+m]=='0')s[i+m]='1';
//                 else s[i+m]='0';
//             }
 
 
 
//         }
//         for(int i =0;i<n;i++){
//             if(s[i]!='0')truth=false;
//         }
//         if(truth==false)cout<<"NO";
//         else cout<<"YES";
//         cout<<endl;
 
//     }
 
// }






// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long a,b,x;
//         cin>>a>>b>>x;
        
//         long long mini = abs(a-b);
//         vector<int>v1;
//         vector<int>v2;
        
//         while(a!=0){
//             v1.push_back(a);
//             a=a/x;
            
//         }
//         if(a==0) v1.push_back(0);
//         while(b!=0){
//             v2.push_back(b);
//             b=b/x;
            
//         }
//         if(b==0) v2.push_back(0);
//         for(long long i =0;i<v1.size();i++){
//             for(long long j =0;j<v2.size();j++){
//                 if(v1[i]==v2[j]){
//                     mini=min(mini,i+j);
//                 }
//                  mini=min(mini,abs(v1[i]-v2[j])+i+j);
//             }
           
//         }
//         cout<<mini<<endl;
//     }
// }
