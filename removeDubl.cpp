// Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> sortedVec = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    map<int, int> mapVec;

    for (auto iVec : sortedVec)
    {
        // cout << iVec << ' ';

        auto iMap = mapVec.find(iVec);
        if (iMap != mapVec.end())
        {
            iMap->second += 1;
        }
        else
        {
            mapVec.insert(make_pair(iVec, 1));
        }
    }

    for (const auto &pair : mapVec)
    {
        cout << pair.first << ' ';
    }

    // cout << pair.first << ' ' << pair.second << endl;

    cout << endl;

    return 0;
}
