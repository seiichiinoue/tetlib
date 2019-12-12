#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<n; ++i)
#define rep1(i, n) for (int i=1; i<=n; ++i)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
constexpr ll  MOD = (1e9+7);

int h=20, w=10;
vector<string> field(h);
vector<ll> bit_field(w, (1ll << 20));

void read_input() {
    // initialization
    rep(i, h) cin >> field[i];
    // convert field as string-represent to bits-represent array
    rep(j, w) {
        rep(i, h) {
            // row_i == bits_i
            bit_field[j] |= (1ll << i) * (field[i][j] - '0');
            // cout << bitset<20>(bit_field[j]) << endl;
        }
    }
    return;
}
void visualize_bit_field() {
    rep(i, h) {
        rep(j, w) {
            (bit_field[j] >> i & 1) ? cout << "1" : cout << "0";
        }
        cerr << endl;
    }
    return;
}

int main() {
    read_input();
    visualize_bit_field();
    // debug
    // rep(i, h) cerr << field[i] << endl;
}