horaInicial = int(input("Hora inicial: "))
horaFinal = int(input("Hora final: "))

if horaInicial == horaFinal:
    print("O jogo durou 24 Hora(s)")
elif horaInicial > horaFinal:
    print(f"O jogo durou {(24 - horaInicial) + horaFinal} Hora(s)")
elif horaInicial < horaFinal:
    print(f"O jogo durou {horaFinal - horaInicial} Hora(s)")