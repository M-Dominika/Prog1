import multiprocessing


def fuggveny():
    i = 0
    while i < 564648946563:
        i += 1


if __name__ == "__main__":
    for i in range(multiprocessing.cpu_count()):
        multiprocessing.Process(target=fuggveny).start()
