#coding: utf8 
import speech_recognition as sr
import pyttsx3
import pywhatkit
import datetime
import wikipedia
import pyjokes
import time
from bs4 import BeautifulSoup
import requests
import webbrowser
import os
import keyboard


a=1

listener = sr.Recognizer()
engine = pyttsx3.init()
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[0].id)

def talk(text):
    engine.say(text)
    engine.runAndWait()

def take_command():
    try:
        with sr.Microphone() as source:
            print('listening...')
            voice = listener.listen(source)
            command = listener.recognize_google(voice)
            command = command.lower()
            if 'alex' in command:
                command = command.replace('alex', '')
                print(command)
    except:
        pass
    return command

def run_alex():
    command = take_command()
    print(command)
    if 'play' in command:
        song = command.replace('play', '')
        talk('playing ' + song)
        pywhatkit.playonyt(song)

    elif 'games' in command:
        os.startfile("D:\\Program Files\\Steam\\steam.exe")
        talk("easy win")

    elif 'spotify' in command:
        os.startfile("C:\\Users\\PC\\AppData\\Roaming\\Spotify\\Spotify.exe")
        talk("Okay")

    elif 'minecraft' in command:
        os.startfile("C:\\XboxGames\\Minecraft Launcher\\Content\\Minecraft.exe")
        talk("Good luck")
        
    elif 'time' in command:
        time = datetime.datetime.now().strftime('%I:%M %p')
        talk('Current time is ' + time)

    elif 'who is' in command:
        person = command.replace('who is', '')
        info = wikipedia.summary(person, 2)
        print(info)
        talk(info)

    elif 'find' in command:
        find = command.replace('find', '')
        pywhatkit.search(find)

    elif 'weather' in command:
        talk("Here it is!")
        pywhatkit.search("Počasie v CITY")

    elif 'joke' in command:
        talk(pyjokes.get_joke())

    elif 'Kusama' in command:
        pywhatkit.search("KSM to eur")

    elif 'thank you' in command:
        talk("No problem")
        a+=1

    elif 'music' in command:
        talk("Okay")
        webbrowser.open('LINK TO RADIO/YOUTUBE')
    
    elif 'twitch' in command:
        talk("Okay")
        webbrowser.open('https://www.twitch.tv')

    elif 'mail' in command:
        talk("Okay")
        webbrowser.open('https://www.gmail.com')

    else:
        talk('Please say the command again.')
 
while a==1:
    run_alex()
    