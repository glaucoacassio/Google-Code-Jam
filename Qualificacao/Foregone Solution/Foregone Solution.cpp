/*
A ideia nesse problema é substituir o 4 por qualquer numero desde que a soma de N de igual N = A + B, entao atribui pra string toda vez 
que receber o 4 substituir por 3(A) e 1(B). Ela aceitava varias respostas e acho que essas que botaram ai foram so pra confundir um pouco 
mais porque senao seria muito facil. Mas se voce pensar no 1 teste vai ate 10^5(100.000), na forca bruta sai porque a entrada é pequena
mas tipo: N = A+B entao B = N - A. Depois disso substitui e acha o valor de B. O valor A estando no intervalo A[1,...N-1]
Esta entre [1...N-1] porque se for 4 digamos, usando inteiro e nao string como fiz, seria de 0..4, eu poderia ter A=0, B=4 resultando em A+B = N
pra N = 4. E isso ele nao quer na questao. Ta meio confuso mas dar pra entender eu acho.  =]
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <cstdio>
#include <stack>
#include <string.h>
#include <queue>
#include <iomanip>
#include <math.h>
#include <utility>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include <climits>
#include <clocale>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) (a) * (a)
//compara se numero flutuantes sao iguais if(abs(a-b) < 1e-9)   a e b sao iguais...
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t; 
    cin>>t;
    for(ll cas=1; cas<=t; cas++)
    {
        string n;
        cin >> n;
        string A(n.size(), ' ');
        string B(n.size(), ' ');
        bool have_B = false;
        for(ll i=0; i<n.size(); i++)
        {
            if(n[i] == '4')
            {
                A[i] = '3';
                B[i] = '1';
                have_B = true;
            }
            else
            {
                A[i] = n[i];
                if(have_B)
                {
                    B[i]='0';
                }
            }
        }
        cout << "Case #"<<cas<<": "<<A<<" "<<B<<endl;
    }
    return 0;
}
