def Lis(nums):
    n = len(nums)
    dp = [1]*n
    for i in range (n):
        for j in range(i):
            if nums[i] > nums[j]:
                dp[i] = max(dp[i], dp[j]+1)
    return max(dp)
def main():
    n = int(input("Enter size: "))
    arr = []

    for i in range(n):
        arr.append(int(input()))
    print(Lis(arr))

main()