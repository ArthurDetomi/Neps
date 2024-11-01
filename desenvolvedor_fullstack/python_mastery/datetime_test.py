from datetime import datetime

data = datetime(2024, 10, 29)

data_em_br = data.strftime("%d/%m/%Y")

print(data_em_br)

data_inserida = "13/01/2023"

data_convert = datetime.strptime(data_inserida, "%d/%m/%Y")

print(data_convert)

data_atual = datetime.now()

print(data_atual)