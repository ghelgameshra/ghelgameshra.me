import pyautogui as pg 
import time

print('Klik area tujuan')
time.sleep(5)


# FROM FILE
txt = open('animals.txt', 'r')
jumlah = 30
for i in txt:
    pg.write(i)
    pg.press('Enter')

# FROM FOR LOOP INT
# hitung = 36
# for i in range(hitung):
#     if i >= 0 & i < 10:
#         pg.write('Pesan-'+str(i))
#         pg.press('Enter')
#     elif i >= 10 & i < 20:
#         pg.write('Pesan-pesan ke-'+str(i))
#         pg.press('Enter')
#     elif i >= 20 & i < 30:
#         pg.write('Nama ke-'+str(i))
#         pg.press('Enter')
#     elif i >= 30:
#         pg.write('Pesan ke'+str(i))
#         pg.press('Enter')
#     elif i >= 35:
#         break