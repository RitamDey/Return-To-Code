def is_decreasing(differences):
    for d in differences:
        if d == 0:
            return False
        elif (d < -3) or (d  > -1):
            return False
    return True


def is_increasing(differences):
    for d in differences:
        if d == 0:
            return False
        elif (d < 1) or (d > 3):
            return False
    return True


def adjacent_difference(array, length):
    return [array[i-1] - array[i] for i in range(1, length)]


def valid_report(report):
    report_length = len(report)
    differences = adjacent_difference(report, report_length)

    return is_decreasing(differences) or is_increasing(differences)


if __name__ == '__main__':
    with open("puzzle-input.txt", "r") as fin:
    # with open("./test-input.txt", "r") as fin:
        count = 0
        for line in fin:
            report = list(map(int, line.strip().split(" ")))
            if valid_report(report):
                count += 1

        print(count)

