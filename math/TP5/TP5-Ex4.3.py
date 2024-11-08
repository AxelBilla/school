#30km +10km par jour pendant 3x7 jours
# km 10ème jour + dernier
# km total
# km par semaine
sum=30
for i in range(21):
    sum=sum+10
    match i:
        case 6:
            print(f"Nb de km de la première semaine: {sum}km")
        case 9:
            print(f"Nb de km au 10ème jour: {sum}km")
        case 13:
            print(f"Nb de km de la deuxième semaine: {sum}km")
        case 20:
            print(f"Nb de km au dernier jour: {sum}km")
            print(f"Nb de km à la dernière semaine: {sum}km")
print(f"Total de KM parcouru: {sum}km")
        