#pragma once
#include <string>
#include <vector>
class Shape {

public:

    string name;
    double flache;

    Shape(string n, double f)
    {
        name = n;
        flache = f;
    }

    void shape_string(vector <Shape>& v)
    {
        cout << endl;
        for (int i = 0; i < v.size(); i++)
        {
            string s = to_string(v[i].flache);
            v[i].name = v[i].name + " " + s + "!";
            cout << "Shape is: " << v[i].name << endl;
        }
        
    }
};

void apply_numeric(vector <Shape>& v, double (*func)(double, double),
    double val)
{
    for (int i = 0; i < v.size(); i++)
        v[i].flache = func(val, v[i].flache);
}

double multiply(double valoare1, double valoare2)
{
    return valoare1 * valoare2;
}

double divide(double valoare1, double valoare2)
{
    return valoare1 / valoare2;
}