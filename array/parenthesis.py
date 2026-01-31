def parenthesis(arr):
    n = len(arr)
    count =0
    for ch in arr:
        if ch == '{' or ch == '[' or ch == '(':  
            count += 1
        elif ch == '}' or ch == ']' or ch == ')': 
            count -= 1
        if count == 0:
            return True
        else:
            return False
def main():
    str = input("Enter string: ")
    if(parenthesis(str)):
        print("Valid Parentesis.")
    else:
        print("Invalid Parentesis.")
main()