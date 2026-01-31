def anagramCheck(str1, str2):
    if len(str1) != len(str2):
        return False
    str1 = sorted(str1)
    str2 = sorted(str2)
    if str1 == str2:
        return True
    else:
        return False
    
def main():
    str1 = input("Enter string 1:")
    str2 = input("Enter string 2:")
    if(anagramCheck(str1, str2)):
        print("True")
    else:
        print("False")
main()
