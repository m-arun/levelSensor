#!/usr/bin/env python

import paho.mqtt.client as mqtt
import sys
import json
import requests
import base64

import watersensor_pb2


rxmsg = watersensor_pb2.WaterSensor()


# The callback for when the client receives a CONNACK response from the server.

def on_connect(client, userdata, flags, rc):
    print("Connected with result code "+str(rc))

    # Subscribing in on_connect() means that if we lose the connection and
    # reconnect then subscriptions will be renewed.
    client.subscribe("application/1/node/70b3d58ff0031fb3/rx")

# The callback for when a PUBLISH message is received from the server.
def on_message(client, userdata, msg):

	decodedData = str(base64.b64decode(json.loads(str(msg.payload))["data"]))
	rxmsg.ParseFromString(decodedData)
	print ''
	print 'Battery '  + str(rxmsg.battery)
	print 'Level '  + str(rxmsg.water_level)
	print 'Temperature ' + str(rxmsg.temperature)
	print ''

client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message
client.username_pw_set("loraserver","loraserver")

client.connect("gateways.rbccps.org", 1883, 60)
client.loop_forever()


