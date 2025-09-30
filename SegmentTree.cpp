#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100010;  // Tamanho máximo
int n;                    // Tamanho do array
vector<int> arr;          // Array original
vector<int> seg;          // Segment Tree (4 * n)

// --- FUNÇÕES BASE ---

// Constroi a Segment Tree
void build(int node, int l, int r) {
    if (l == r) {
        seg[node] = arr[l];
        return;
    }
    
    int mid = (l + r) / 2;
    int left_child = 2 * node + 1;
    int right_child = 2 * node + 2;
    
    build(left_child, l, mid);
    build(right_child, mid + 1, r);
    
    seg[node] = seg[left_child] * seg[right_child];
}

// Atualiza um elemento na posição 'idx' para 'val'
void update(int node, int l, int r, int idx, int val) {
    if (l == r) {
        arr[idx] = val;
        seg[node] = val;
        return;
    }
    
    int mid = (l + r) / 2;
    int left_child = 2 * node + 1;
    int right_child = 2 * node + 2;
    
    if (idx <= mid) {
        update(left_child, l, mid, idx, val);
    } else {
        update(right_child, mid + 1, r, idx, val);
    }
    
    seg[node] = seg[left_child] * seg[right_child];
}

// Consulta o intervalo [ql, qr]
int query(int node, int l, int r, int ql, int qr) {
    if (qr < l || ql > r) {
        return 1;  // neutro da multiplicação
    }
    
    if (ql <= l && r <= qr) {
        return seg[node];
    }
    
    int mid = (l + r) / 2;
    int left_child = 2 * node + 1;
    int right_child = 2 * node + 2;
    
    int left_sum = query(left_child, l, mid, ql, qr);
    int right_sum = query(right_child, mid + 1, r, ql, qr);

    if (left_sum == 0 || right_sum == 0) return 0;
    
    return left_sum * right_sum;
}

// --- INTERFACE ---
void init_segment_tree(int size) {
    n = size;
    seg.resize(4 * n);
    build(0, 0, n - 1);
}

int range_query(int l, int r) {
    return query(0, 0, n - 1, l, r);
}

void point_update(int idx, int val) {
    update(0, 0, n - 1, idx, val);
}

int main() {
    int nseq, k, x, v;
    char op;
    int inicial, final;

    while (cin >> nseq >> k) {
        arr.clear();
        arr.resize(nseq);
        seg.clear();

        for (int i = 0; i < nseq; i++) {
            cin >> x;
            if (x > 0) arr[i] = 1;
            else if (x < 0) arr[i] = -1;
            else arr[i] = 0;
        }

        init_segment_tree(nseq);

        string resposta = "";
        for (int rodada = 0; rodada < k; rodada++) {
            cin >> op;
            if (op == 'C') {
                cin >> inicial >> v;
                if (v > 0) v = 1;
                else if (v < 0) v = -1;
                else v = 0;
                point_update(inicial - 1, v);
            } else {
                cin >> inicial >> final;
                int produto = range_query(inicial - 1, final - 1);
                if (produto > 0) resposta += "+";
                else if (produto < 0) resposta += "-";
                else resposta += "0";
            }
        }
        cout << resposta << "\n";
    }

    return 0;
}
