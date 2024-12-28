def main():
    holo = int(input())

    if holo >= 86400:
        botan = holo // 86400
        holo = holo % 86400
    else:
        botan = 0

    if holo >= 3600:
        wisadel = holo // 3600
        holo = holo % 3600
    else:
        wisadel = 0
    peco = 0

    if holo >= 60:
        peco = holo // 60
        holo = holo % 60

    if botan > 0:
        print(f"{botan} Hari {wisadel:02d}:{peco:02d}:{holo:02d}")
    else:
        print(f"{wisadel:02d}:{peco:02d}:{holo:02d}")

main()