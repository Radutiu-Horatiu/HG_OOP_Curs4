#pragma once
template <typename T>

T summe(T arr[], int start, int end, T wert = 0)
{
	T s = 0;
	for (int i = start; i <= end; i++)
		s += arr[i];

	return s + wert;
}