#include <iostream>
#include <vector>
#include <unorder_set>
using namespace std;

/**
 * A way for finding if there's any duplicates in the array is to store each seen element in an set
 * and check if the current element is present in the seen set or not
*/
bool containsDuplicate(vector<int>& nums) {
    auto seen_container = std::unordered_set<int>();

    for (auto i = nums.begin(); i != nums.end(); i++) {
        if (seen_container.find(*i) != seen_container.end())
            return true;
        seen_container.insert(*i);
    }

    return false;
}



/**
 * Another way for finding if there's any duplicates in the array, is to sort the array
 * then search each neighbouring element in the sorted array if they're same, denoting presence of duplicates
*/
bool containsDuplicate(vector<int>& nums) {
    std::sort(nums.begin(), nums.end());

    auto found = std::adjacent_find(nums.begin(), nums.end());

    return found != nums.end();
}
