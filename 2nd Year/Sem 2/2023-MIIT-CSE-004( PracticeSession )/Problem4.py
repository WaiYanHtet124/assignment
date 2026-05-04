info='Tomorrow, we will start a mission'

def Mission(data):
    secret=data.split()
    encode_word=[]
    for msg in secret:
     enc_msg=msg.encode('utf-8').hex()
     encode_word.append(enc_msg)
    secret_msg=" ".join(encode_word)
    return secret_msg

encodeMsg=Mission(info)
print(encodeMsg)

def Meaning(secret_data):
    message=secret_data.split()
    decode_msg=[]
    for msg in message:
     byte=bytes.fromhex(msg)
     dec_msg=byte.decode('utf-8')
     decode_msg.append(dec_msg)
    meaning=" ".join(decode_msg)
    return meaning

decodeMsg=Meaning(encodeMsg)
print(decodeMsg)