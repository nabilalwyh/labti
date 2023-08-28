# POST API

import requests

url = "http://localhost:3000/users"
payload = {
    "name": "Miska",
    "hobi": "Berenang",
    "alamat": "Kemang"
}
headers = {
    "Content-type": "application/json; charset=UTF-8"
}
response = requests.post(url, json=payload, headers=headers)

if response.status_code == 201:
    data = response.json()
    print(data)
else:
    print("Failed to post data to API")
