def extract_number(s):
    first = None
    second = None

    for c in s:
        if c.isdigit():
            if first is None:
                first = c
                second = c
            else:
                second = c
    
    return int(first) * 10 + int(second)


def main():
    total_sum = 0
    # with open("sample-input.txt", "r") as fin:
    with open("puzzle-input.txt", "r") as fin:
        for line in fin:
            line = line.strip()
            if line:
                total_sum += extract_number(line)
    
    print(total_sum)


if __name__ == "__main__":
    main()
