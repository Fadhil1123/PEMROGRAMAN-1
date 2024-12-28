def main():
    kafka = int(input())

    if kafka == 0 :
        print("Nol")
    elif kafka > 0 :
        print("Positif")
    elif kafka < 0 :
        print("Negatif")
main()