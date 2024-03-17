/**
 * We can first find the child with the most number of candies, this will be our target to overcome with extra candies
 * We can then map the values of the vector to see if after distrubing the extra candies the target is overcame 
*/
vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    auto start = candies.begin();
    auto end   = candies.end();
    vector<bool> result;
    
    int largest_n = *std::max_element(start, end);
    std::transform(
        start, end, std::back_inserter(result),
        [extraCandies, largest_n](int i) { return (i+extraCandies) >= largest_n; }
    );

    return result;
}