#include<bits/stdc++.h>
#define ll long long int
#define w(t) ll t;cin>>t;while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define scana(arr) for(ll i=0,i<n;i++) cin>>arr[i];
#define printa(arr) for(ll i=0,i<n;i++) cout<<arr[i];
#define vl vector<ll>
#define vpl vector< pair<ll,ll> >
#define pb push_back
#define mp make_pair
#define mod 1000000007
using namespace std;
                     
//************************
//Important functions
                      
//gcd
/*
ll gcd(ll a,ll b){
    //base case
    if(b==0) return a;
    //rec case
    return gcd(b,a%b);
}
*/
                        
//extended euclid algorithm
/*
void extendedEuclidAlgorithm(ll a,ll b){
    //base case
    if(b==0){
        x=1;y=0;
        GCD=a;
        return;
    }
    //rec case
    extendedEuclidAlgorithm(b,a%b);
    ll cx=y;
    ll cy=x-((a/b)*y);
                    
    x=cx;
    y=cy;
}
*/
                        
//to compute a^b
/*
ll fast_modulo_exponentation(ll a,ll b){
    ll ans=1;
    while(b){
        if(b&1){
            ans*=a;
        }
        a*=a;
        b>>=1;
    }
    return ans;
}
*/
 
//to find multiplicative modulo inverse
/*
void multiplicative_modulo_inverse(ll a,ll m){
    if(gcd(a,m)==1){
        extendedEuclidAlgorithm(a,m);
        //as the func can return -ve value also, so to return +ve value we do (x+m)%m.
        cout<<(x+m)%m<<endl;
    }
    else cout<<
Multiplicative modulo inverse is not possible!
<<endl;
}
*/
 
//prime sieve
/*
void prime_sieve(ll *p){
    for(ll i=3;i<=100000;i+=2) p[i]=1;
 
    for(ll i=3;i<=100000;i+=2){
    if(p[i]==1){
        for(ll j=i*i;j<=100000;j+=i){
            p[j]=0;
        }
        }
        }
    p[2]=1;
    p[1]=0;p[0]=0;
}
*/
//************************
 
int main(){
 
    w(t){
        ll n;
        cin>>n;
        if(n<=9) cout<<n<<endl;
        else if(n>45) cout<<-1<<endl;
        else{
            ll sum=0,num=9;
            vl v;
            while(sum<n && num>0){
                v.pb(min(num,n-sum));
                sum+=num;
                num--;
            }
            if(sum<n) cout<<-1<<endl;
            else{
                for(ll i=v.size()-1;i>=0;i--) cout<<v[i];
                cout<<endl;
            }
        }
    }
     
    return 0;
}