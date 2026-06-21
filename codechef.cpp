// question 1
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes her
// 	int n;
// 	cin>>n;
// 	int x = n%5;
	
// 	if(x==0)cout<<"No";
// 	else cout<<"Yes";
// 	cout<<endl;

// }



// question 2
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,m ;
// 	    cin>>n>>m;
// 	    string s;
// 	    cin>>s;
// 	    string k ;
// 	    cin>>k;
// 	    int i =0;
	    
// 	    string ans="";
// 	    while(s[i]==k[i]&&i<min(n,m)){
// 	        ans+=s[i];
// 	        i++;
// 	    }
// 	    cout<<ans<<endl;
	    
// 	}

// }


// question 3
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         if (n > m) {
//             cout << m;
//         } else {
//             int side = 1;
//             int no = 0;
//             vector < int > v(n, 0);
//             for (int i = m; i >= 1; i--) {
//                 v[no] += i;

//                 if (side == 1 && no == n - 1) {
//                     side = -1;

//                 } else if (side == -1 && no == 0) {
//                     side = 1;
//                 } else {
//                     if (side == 1) {
//                         no++;
//                     } else {
//                         no--;
//                     };
//                 }
//             }
//             int maxi = 0;
//             for (int i = 0; i < n; i++) {
//                 maxi = max(maxi, v[i]);

//             }
//             cout << maxi;
//         }
//         cout << endl;

//     }

// }
// question 4
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int a,b,c;
// 	    cin>>a>>b>>c;
// 	    if(a==b)cout<<0;
// 	    else if(gcd(a,c)==gcd(b,c)){
// 	        cout<<1;
	        
// 	    }else {
// 	        if(gcd(a,c+1)==gcd(b,c+1)){
// 	            cout<<2;
// 	        }else{
// 	            cout<<3;
// 	        }
// 	    }
// 	    cout<<endl;
// 	}

// }
