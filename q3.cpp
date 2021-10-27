#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define fl(n) for(int i=0;i<n;i++)
#define flo(n) for(int i=1;i<=n;i++)
#define mii map<int,int>
#define mci map<char,int>
#define V vector<int>
#define vp vector<pair<int,int>>
#define pb push_back
#define pp pair<int,int>
#define ff first
#define ss second
#define S set<int>
#define all(v) v.begin(),v.end()
#define gr greater<int>()
#define show2(a, b) cout<<a<<' '<<b<<endl;
#define show3(a, b, c) cout<<a<<' '<<b<<' '<<c<<endl;
const long long mod=1000000007;
const int N=1e5+5;
const long double PI=3.14159265358;
bool visited[N];
vector<int> adj[N],ans;
int c[N];
mii m;

int32_t main(){
   
    int n,q;
    cin>>n>>q;
    V v;
    fl(n){
    	int x;
    	cin>>x;
    	v.pb(x);
	}
	fl(q){
		int x;
		cin>>x;
		int z=0,in=0,ans=0,w=x;
		while(1){
		auto it=lower_bound(v.begin(),v.end(),w);
        cout<<*it<<endl;
		if(*it==w) it++;
		z=it-v.begin();
		ans=w-z;	
		w=w+z-in;
		in=z;
		if(ans==x){
			cout<<w<<endl;
			break;
		} 
		}

		
	}
	
	
	return 0;
	}