#include <vector>
#include <unorder_map>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    std::unordered_map<int, int> seen_set;
    int length = nums.size();

    for (int i = 0; i < length; i++) {
        if (seen_set.contains(nums[i]) && ((i - seen_set[nums[i]]) <= k))
            return true;
        else
            seen_set.insert_or_assign(nums[i], i);
    }

    return false;
}