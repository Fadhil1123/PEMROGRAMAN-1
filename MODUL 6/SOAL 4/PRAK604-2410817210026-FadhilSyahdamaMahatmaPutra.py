def bandingkan_array(bocchi, rover):
    hash_count = 0
    star_count = 0
    
    for i in range(len(bocchi)):
        if bocchi[i] == ' ' and rover[i] == ' ':
            print(" ", end="")
        elif bocchi[i] == rover[i]:
            print("*", end="")
            star_count += 1
        else:
            print("#", end="")
            hash_count += 1

    print()
    print(f"* = {star_count}")
    print(f"# = {hash_count}")

    if hash_count > star_count:
        print("Pesan Palsu")
    elif star_count > hash_count:
        print("Pesan Asli")

bocchi = input().rstrip()
rover = input().rstrip()

if len(bocchi) != len(rover):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    bandingkan_array(bocchi, rover)