def main():

    bocchi, zani = input().split()
    bocchi = int(bocchi)

    for i in range(1, 51) :
        if i % bocchi == 0 :
            print(zani , end=" ")
        else :
            print(i , end=" ")

main()