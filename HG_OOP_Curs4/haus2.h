#pragma once
#include <vector>
#include <algorithm>
using namespace std;
template <typename B>

B summe_lambda(B a[], int start, int end, B wert = 0)
{
	vector <B> v1;
	for (int i = start; i <= end; i++)
		v1.push_back(a[i]);
 
	std::for_each(v1.begin(), v1.end(), [&wert] (B x) {wert += x;});

	return wert;
}