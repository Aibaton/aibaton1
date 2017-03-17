#  Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

def main():
    summSqr = 0
    sqrSumm = 0

    for i in range(1, 101):
        summSqr += i * i
        sqrSumm += i

    sqrSumm = sqrSumm * sqrSumm
    print("Difference between {} and {} is {}".format(sqrSumm, \
           summSqr, sqrSumm - summSqr))

if __name__ == "__main__":
    main()
