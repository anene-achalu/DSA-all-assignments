#include <iostream>
#include <unordered_map>
using namespace std;

// Hashing Search
int hashingSearch(unordered_map<int, int>& hashMap, int target) {
    if (hashMap.find(target) != hashMap.end()) {
        return hashMap[target];
    }
    return -1; // Not found
}

int main() {
    unordered_map<int, int> hashMap;
    hashMap[1] = 0;
    hashMap[3] = 1;
    hashMap[5] = 2;
    hashMap[7] = 3;
    hashMap[9] = 4;
    hashMap[11] = 5;

    int target = 9;

    int result = hashingSearch(hashMap, target);
    if (result != -1) cout << "Element found at index " << result << endl;
    else cout << "Element not found" << endl;

    return 0;
}
