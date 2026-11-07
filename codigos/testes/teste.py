instrumentais = [
        ("King Crinsom", "Fracture"),
        ("Metallica", "Call of Ktulu"),
        ("Yes", "Mood for a Day"),
        ("Pink Floyd", "One of This Days")
        ]

print(sorted(f"{faixa[-1]} / {faixa[0]}" for faixa in instrumentais if faixa[0].upper() < 'N'))

