def main():
    starosta = 750
    standard = 4500

    pov1, pov2 = 7490, 14980

    c = 1
    for var in [0, pov1, pov2]:
        x = sum([standard, starosta, var]) * 0.97
        print(f"Var{c}: {x}, Sem: {x * 5}")
        c += 1


if __name__ == "__main__":
    main()
    while True:
        pass
