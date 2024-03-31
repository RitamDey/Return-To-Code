class Solution:
    def minimumCardPickup(self, cards: List[int]) -> int:
        length = len(cards)
        seen_set = {}
        least_pickup = sys.maxsize

        for position, element in enumerate(cards):
            if element in seen_set:
                last_seen = seen_set[element]
                diff = position - last_seen + 1
                if diff < least_pickup:
                    least_pickup = diff
            seen_set[element] = position
        
        return least_pickup if least_pickup < sys.maxsize else -1
