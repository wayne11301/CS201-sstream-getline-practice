#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string input, stringnum;
    char token; //comma
    int number = 0, count = 0, sumline = 0, sumall = 0;
    float avgline;
    int itr = 4; //4 numbers each line
    istringstream iss;  //convert user input to stringstream

    cout << "Use stringstreams to parse comma-separated integers" << endl << "Enter rows of 4 integers, each followed by a comma" << endl;

    while (getline(cin, stringnum)) {
        iss.clear();
        iss.str(stringnum);
        sumline = 0;

        for (itr = 0; itr < 4; itr++) { //read in each number
            iss >> number;
            iss >> token;
            sumline += number;  //compute the sum of the line
        }
        cout << "The row's sum = " << sumline << endl;
        if (sumline == 0)
        {
            break;
        }
        sumall += sumline;
        count++;
    }

    avgline = (float)(sumall) / count; //compute average
    sumline = 0;
    cout << "Avg row sum = " << avgline; //output average
    return 0;
}
