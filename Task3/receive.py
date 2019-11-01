import socket
import random
import asyncio

host = "127.0.0.1"
port = 11234
s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind((host, port))
s.setblocking(0)


async def send_random():
    text = random.randint(2, 80)
    text = str(text)
    return s.sendto((text + " " + host).encode('UTF-8'), (host, port))


async def receive():
    while True:
        try:
            data, address = s.recvfrom(1024)
        except socket.error:
            pass
        else:
            print(data.decode('UTF-8') + " received from " + str(address))


async def main():
    loop.create_task(send_random())
    loop.create_task(receive())
    await asyncio.wait([receive()], [send_random()])


if __name__ == "__main__":
    try:
        loop = asyncio.get_event_loop()
        loop.run_until_complete(main())
    except socket.error:
        pass
    finally:
        loop.close()
        s.close()
print("END!")
