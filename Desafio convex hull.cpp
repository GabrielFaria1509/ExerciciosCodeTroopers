#include <bits/stdc++.h>
using namespace std;

double per = 0;
struct Point
{
	int x;
	int y;
};

// To find orientation of ordered triplet (p, q, r).
int orientation(Point p, Point q, Point r)
{
	int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);

	if (val == 0)
		return 0; // 0 --> p, q and r are colinear
	return (val > 0) ? 1 : 2; // 1 --> Clockwise / 2 --> Counterclockwise
}

void gift_wraping(Point points[], int n)
{
	if (n < 3) // There must be at least 3 points
		return;

	// Initialize Result
	int next[n];
	for (int i = 0; i < n; i++)
		next[i] = -1;

	// Find the leftmost point
	int l = 0;
	for (int i = 1; i < n; i++)
		if (points[i].x < points[l].x)
			l = i;

	// Start from leftmost point, keep moving counterclockwise until reach the start point again
	int p = l, q;
	do
	{
		// Search for a point 'q' such that orientation(p, i, q) is counterclockwise for all points 'i'
		q = (p + 1) % n;
		for (int i = 0; i < n; i++)
			if (orientation(points[p], points[i], points[q]) == 2)
				q = i;

		next[p] = q; // Add q to result as a next point of p
		p = q; // Set p as q for next iteration
	}
	while (p != l);
	//Calculando perímetro -- LÓGICA COMENTADA
	int curr = l;// começa no ponto de início do fecho convexo

	do
	{
		int nxt = next[curr];// próximo ponto do fecho convexo
		//Soma ao perímetro a distância entre o ponto atual (curr) e o próximo ponto do fecho convexo (nxt)
		per += sqrt( pow(points[nxt].x - points[curr].x, 2) + pow(points[nxt].y - points[curr].y, 2));

		curr = nxt;// avança para o próximo ponto do fecho convexo

	}
	while (curr != l);// enquanto não retornar ao ponto inicial

}

// Driver program to test above functions
int main()
{
//Variaveis
	int n, a;
//Entrada
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a;
		Point points[a];
		for(int j = 0; j < a; j++)
		{
			cin >> points[j].x;
			cin >> points[j].y;
		}
		gift_wraping(points, a);
	}
	cout << per << endl;
	return 0;
}
