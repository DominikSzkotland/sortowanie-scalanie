#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> tablicaPoczatkowa = {5,3,8,6,2};
    int dlugoscTablicaPoczatkowa = tablicaPoczatkowa.size() - 1;
    for(int i = 0; i < dlugoscTablicaPoczatkowa; i++)
    {
        cout<<tablicaPoczatkowa[i];
    }
}
