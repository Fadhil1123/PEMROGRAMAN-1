def main():
    ling = int(input())

    if ling < 50 :
        print("E")
    elif ling >= 50 and ling < 60 :
        print("D")
    elif ling >= 60 and ling < 70 :
        print("C")
    elif ling >= 70 and ling < 80 :
        print("B")
    elif ling >= 80 :
        print("A")
main()