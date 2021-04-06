from ip2geotools.databases.noncommercial import DbIpCity

ip = input("Enter ip: ")

response = DbIpCity.get(ip, api_key="free")

print("\n") #new line

print("Region: {0}".format(response.region))

print("\n")

print("City: {0}".format(response.city))