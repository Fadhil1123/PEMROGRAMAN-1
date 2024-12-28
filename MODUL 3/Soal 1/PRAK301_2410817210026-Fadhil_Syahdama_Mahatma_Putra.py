def main():
    haha, hihi, hoho = input().split()  
    haha, hihi, hoho = int(haha), int(hihi), int(hoho)

    if haha <= hihi and haha <= hoho:
        if hihi <= hoho:
            print(haha, hihi, hoho)
        else:
            print(haha, hoho, hihi)
    elif hihi <= haha and hihi <= hoho:
        if haha <= hoho:
            print(hihi, haha, hoho)
        else:
            print(hihi, hoho, haha)
    else:
        if haha <= hihi:
            print(hoho, haha, hihi)
        else:
            print(hoho, hihi, haha)

main()