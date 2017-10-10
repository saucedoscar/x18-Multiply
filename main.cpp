#include<vector>
#include<string>
#include<iostream>
using namespace std;

int main()
{
vector<vector<int> > chart;
int ROWS = 13;
int COLUMNS = 13;
chart.resize(13);
    for(int w = 0; w < ROWS; w++)   //makes more columns within the rows
    {
    chart[w].resize(13);
    }
    for(int a = 1; a <  COLUMNS; a++)   
    {
    chart[0][a] = a;
    }
    for(int b = 1; b < ROWS; b++)
    {
    chart[b][0] = b;
    }

    for(int a = 1; a < ROWS; a++)
    {
        for(int b = 1; b < COLUMNS; b++)
        {
        chart[a][b] = a * b;
        }
    }
    for(int a = 1; a < ROWS; a++)
    {
        for(int b = 1; b < COLUMNS; b++)
        {
        cout<<chart[a][b];
        cout<<"    |    ";
        }
        cout<<endl;
    }

return 0;
}
