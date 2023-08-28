import threading
from threading import Thread 
import time

class restoran:
	def __init__(self, makanan, minuman):
		self.makanan = makanan
		self.minuman = minuman
	def food(self):
		print("Makanan yang disajikan : {}".format(self.makanan))
	def drink(self):
		print("Minuman yang disajikan : {}".format(self.minuman))
	def run(self):
		self.food()
		self.drink()

if __name__ == '__main__':
	start = time.perf_counter()
	makanans = [
		'Sate',
		'Bakso',
		'Bubur',                                       
		'Ketoprak',
		'Soto Ayam',
	]
	minumans = [
		'IceTea',
		'Jus',
		'Susu',
		'LemonTea',
		'Wedang',
	]
	thread_list=[]
	for makanan in makanans:
		for minuman in minumans:
			t = Thread(target=restoran(makanan,minuman).run)
			t.start()
			time.sleep(0.05)
			thread_list.append(t)
	for thread in thread_list:
		thread.join()
	finish = time.perf_counter()
	print("Waktu Total: ",finish-start)