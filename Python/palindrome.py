#Find the largest palindrome made from the product of two 3-digit numbers.


def reverse(n):
    return int(str(n)[::-1])


def main():
    result = 0
    for i in range(100, 1000):
        for j in range(100, 1000):
            temp = i*j
            if temp == reverse(temp) and temp > result:
                result = temp
    print(result)
                

if __name__ == "__main__":
    main()