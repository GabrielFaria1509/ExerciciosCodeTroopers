int n, a, b, v[1005];
long long int res, soma[1005];

cin >> n;

for (int i = 0; i < n; i++) // lê os elementos de v
    cin >> v[i];

soma[0] = v[0]; // define o 1º elemento

for (int i = 1; i < n; i++) // calcula do 2º elemento em diante
    soma[i] = soma[i - 1] + v[i];
