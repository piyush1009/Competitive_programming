#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define MOD 1000000000
typedef long long ll;
typedef long double ld;
const int INF=(int)(1e9);
const ll INF64=(ll)(1e18);
const ld EPS=1e-9;
const ld PI=3.1415926535897932384626433832795;
typedef vector<int> vi;
typedef vector<pair<int,int> > vii;
typedef vector<list<int> > vl;
typedef vector<list<pair<int,int> > > vlp;
typedef vector<list<pair<int,double> > >vld;
typedef map<int,int> mi;
typedef map<string,int> ms;
typedef set<int> si;
 
vector<vector<ll> >identity; // Identity Matrix
vector<vector<ll> > matMultiply(vector<vector<ll> >mat1,int p,int q,vector<vector<ll> >mat2,int r){
 
   vector<vector<ll> >mat3;
   vector<ll>row;
 
   /* Preparing answer matrix */
 
   for(int i=0;i<p;++i){
     row.clear();
     for(int j=0;j<r;++j){
        row.pb(0);
     }
     mat3.pb(row);
 
   }
 
   /* Matrix Multiplication Step */
 
   for(int i=0;i<p;++i){
      for(int j=0;j<r;++j){
         mat3[i][j]=0;
         for(int k=0;k<q;++k){
              mat3[i][j]=(mat3[i][j]%MOD+(mat1[i][k]%MOD*mat2[k][j]%MOD)%MOD)%MOD;
         }
      }
   }
 
  return mat3;
 
}
 
vector<vector<ll> > matPower(vector<vector<ll> >mat1,int p,int q,int expo){
 
   if(expo==0)
     return identity; // Identity Matrix
 
   vector<vector<ll> >F(p,vector<ll>(q));
 
   F=matPower(mat1,p,q,expo/2);
   F=matMultiply(F,p,q,F,q);   // F*F
 
   if(expo%2==0)
    return F;
   else
     return matMultiply(F,p,q,mat1,q);
 
}
 
 
 
int main(){
 
   int t;
   cin>>t;
 
   while(t--){
 
     int k;
     cin>>k;
     ll b[11],c[11];
     for(int i=0;i<k;++i)
       cin>>b[i];
 
 
     for(int i=0;i<k;++i)
       cin>>c[i];
 
 
     ll n;
     cin>>n;
 
     if(n<=k)
      cout<<b[n-1]%MOD<<endl;
 
     else{
       
       // Preparing identity matrix to be used in power function
     
       vector<ll>row;
 
       for(int i=0;i<k;++i){
         row.clear();
 
         for(int j=0;j<k;++j){
            if(j==i)
              row.pb(1);
            else
              row.pb(0);
         }
         identity.pb(row);
 
       }
 
       // Preparing basic matrix of size k * 1
 
       vector<vector<ll> >F1;  
 
       for(int i=0;i<k;++i){
           row.clear();
           for(int j=0;j<1;++j){
              row.pb(b[i]);
           }
           F1.pb(row);
       }
 
       // Preparing tranformation matrix of size k*k
 
      // F2=T*F1,  Fn=T^(n-1)*F1  
 
       vector<vector<ll> >T;  // Transform matrix;
 
       for(int i=0;i<k;++i){
         row.clear();
         for(int j=0;j<k;++j){
             row.pb(0);
         }
         T.pb(row);
       }
 
       for(int i=0;i<k-1;++i)
         T[i][i+1]=1;
 
 
       for(int j=0;j<k;++j)
         T[k-1][j]=c[k-j-1];
 
       vector<vector<ll> >ans(k,vector<ll>(1));
       T=matPower(T,k,k,n-1);
       ans=matMultiply(T,k,k,F1,1);
       cout<<ans[0][0]%MOD<<endl;
     }
   }
   return 0;
}
