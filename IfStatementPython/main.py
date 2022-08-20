
def main():
    print("Type a number")
    tempString = input()
    num1 = int(tempString)

    if num1 < 0 or num1 > 10:
        print("Finish the program")
        return
    else:
        print("OK")

    print("Type a number")
    tempString = input()
    num2 = int(tempString)

    if num2 < 0 or num2 > 10:
        print("Finish the program")
        return
    else:
        print("OK")

    result = num1*num2
    if result > 20:
        print("Value is greater than 20")
    elif result > 10:
        print("Values is greater than 10")
    else:
        print("Other options")

    print("The result is ")
    print(result)
    return

main()