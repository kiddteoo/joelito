casos = int(input(""))
i = 0
hp = 0
rammus = 0
twitch = 0
while i < casos:
    hp, rammus, twitch = input("").split()
    hp = int(hp)
    rammus = int(rammus)
    twitch = int(twitch)
    rammus_kill = 0
    twitch_kill = 0
    rondas = 0
    while hp > 0:
        if (hp - rammus) <= 0:
            rammus_kill = 1
        hp = hp - rammus
        if (hp - twitch) <= 0:
            twitch_kill = 1
        hp = hp - twitch
        rondas += 1
    if rammus_kill == 1:
        print("RAMMUS", rondas)
    elif twitch_kill == 1:
        print("TWITCH", rondas)
    i += 1