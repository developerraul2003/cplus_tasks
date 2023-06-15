#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int input[] = {1, 2, 33, 44, 3, 3, 5, 33, 6, 77, 77, 5, 8};
    int inputSize = sizeof(input) / sizeof(input[0]);

    vector<int> output;

    for (int i = 0; i < inputSize; i++)
    {
        int current_item = input[i];
        bool duplicate = false;

        for (int j = i + 1; j < inputSize; j++)
        {
            if (current_item == input[j])
            {
                duplicate = true;
                break;
            }
        }

        if (duplicate)
        {
            if (find(output.begin(), output.end(), current_item) == output.end())
            {
                output.push_back(current_item);
            }
        }
    }

    for (int item : output)
    {
        cout << item << " ";
    }

    return 0;
}
