#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;

typedef pair<long long, long long> pt;
const long long rngLim = 43*1e8;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
long long CreLL(long long l, long long r)
{ //sinh 1 so nguyen bat ki trong doan [l, r].
    return rng() % (r - l + 1) + l;
}
double CreDB(int l, int r)
{ //sinh 1 so thap phan bat ki trong doan [l, r], l va r phai co so chu so nho hon 5.
    double scale = rng() / (double) rngLim;
    //them 1 vai so 0 vao sau dau phay de tang tinh ngau nhien:
    int reduce = CreLL(1, 12);
    for(int i = 1; i <= 3; i++)
    	if(reduce == 9 + i) scale /= 10*i;
    return scale * (r - l) + l;
}

//sinh test nho
typedef long long ll;
void createTest(ofstream &fout)
{
    int t = CreLL(1,10);
    fout << t << '\n';
    while(t--){
        int n = CreLL(1,50);
        fout << n << '\n';
    }
}
//sinh test vua
void createTest2(ofstream &fout)
{
    int t = CreLL(10,20);
    fout << t << '\n';
    while(t--){
        int n = CreLL(50,1000);
        fout << n << '\n';
    }
}
//sinh test lon
void createTest3(ofstream &fout)
{
    int t = CreLL(1000,1000);
    fout << t << '\n';
    while(t--){
        int n = CreLL(8000,10000);
        fout << n << '\n';
    }
}
//cho nay khong can sua
int main()
{
    srand(time(NULL));
    int N = 15;
    for (int i = 0; i < N; i++)
    {
        string s;
        ostringstream convert;
        convert << i;
        s = convert.str();
        string input = "test/" + s + ".in";
        ofstream fout(input.c_str());
        if (i < 5)
            createTest(fout);
        else if (i < 10)
            createTest2(fout);
        else
            createTest3(fout);
        fout.close();
        cout << "Created test:" << i + 1 << endl;
    }
    return 0;
}
