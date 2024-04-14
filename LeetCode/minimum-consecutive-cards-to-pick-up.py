class Solution:
    def minimumCardPickup(self, cards: List[int]) -> int:
        length = len(cards)
        seen_set = {}
        least_pickup = sys.maxsize # Sentinel value

        # With each iteration, we first check if the value was previously seen or not.
        # If it was seen, the calculate the distance between current and last seen
        # check if it's smaller than the current recorded smallest distance between 2 same elements
        # at the end record the current position of the element
        for position, element in enumerate(cards):
            if element in seen_set:
                last_seen = seen_set[element]
                diff = position - last_seen + 1
                if diff < least_pickup:
                    least_pickup = diff
            seen_set[element] = position
        
        return least_pickup if least_pickup < sys.maxsize else -1
