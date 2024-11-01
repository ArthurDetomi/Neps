import os 

current_folder_path = os.getcwd()

print(current_folder_path)

print(os.listdir())

os.chdir("/home")

print(os.getcwd())

os.system("ls")