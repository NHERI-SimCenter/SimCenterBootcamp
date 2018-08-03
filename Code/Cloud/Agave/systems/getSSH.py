import json

auth = {}

with open("id_rsa.pub", "rb") as publicKeyFile:
     publicKey = publicKeyFile.read();

auth["publicKey"]=publicKey

with open("id_rsa", "rb") as privateKeyFile:
     privateKey = privateKeyFile.read()

auth["privateKey"]=privateKey

out = json.dumps(auth,sort_keys=True,indent=4, separators=(',', ': '))

print out

with open("auth.json","w") as f:
     f.write(out)

f.close()
