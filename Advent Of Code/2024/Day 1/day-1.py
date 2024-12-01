from itertools import accumulate

def sub(x, y):
    return abs(x - y)

def process(locations1, locations2):
    locations1 = sorted(locations1)
    locations2 = sorted(locations2)

    diffs = map(sub, locations1, locations2)

    return sum(diffs)

if __name__ == '__main__':
    locations1 = []
    locations2 = []
    # with open("input.txt") as fin:
    with open("puzzle_input.txt") as fin:
        for line in fin:
            line = line.strip().split(" ")
            locations1.append(int(line[0]))
            locations2.append(int(line[-1]))

    print(process(locations1, locations2))
