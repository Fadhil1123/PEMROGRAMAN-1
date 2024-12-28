def main():
    albedo = int(input())

    if(albedo==0):
        print("Nol")
    elif(albedo>0 and albedo<10):
        print("Satuan")
    elif(albedo>10 and albedo<20):
        print("Belasan")
    elif(albedo>=20 and albedo<100):
        print("Puluhan")
    elif(albedo>=100):
        print("Anda Menginput Melebihi Limit Bilangan ")
        
main()