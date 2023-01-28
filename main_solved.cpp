#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;




void fillVectorWithData(const string& filePath, vector<double>& v)
{
    std::ifstream inFile(filePath);
    double number;
    while (inFile >> number)
    {
        v.push_back(number);
    }
}

void doubleAllItems(vector<double>& v)
{
    for (double& item: v)
    {
        item *= 2;
    }
}


void printVector(const vector<double>& v)
{
    for (const double& item: v)
    {
        cout << item << endl;
    }
}

int main()
{
    string filePath("../data.txt");

    vector<double> dataVector;

    fillVectorWithData(filePath, dataVector);
    doubleAllItems(dataVector);
    printVector(dataVector);

    return 0;
}
