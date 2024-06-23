import random

# Dictionary of items
items = [
    {"name": "gun", "type": "weapon", "cost": 50, "attack": 15},
    {"name": "sword", "type": "weapon", "cost": 40, "attack": 12},
    {"name": "bow", "type": "weapon", "cost": 30, "attack": 10},
    {"name": "kevlar vest", "type": "armor", "cost": 25, "defense": 5},
    {"name": "platemail", "type": "armor", "cost": 50, "defense": 10},
    {"name": "mystic robes", "type": "armor", "cost": 20, "defense": 3},
    {"name": "health potion", "type": "consumable", "cost": 25, "health": 25},
]

# Game variables
health = 100
attack = 10
defense = 10
gold = 50

# Welcome message
print("Welcome to the Supernatural Threats Game!")

# Main game loop
while True:
    # Display current stats
    print(f"Health: {health}")
    print(f"Attack: {attack}")
    print(f"Defense: {defense}")
    print(f"Gold: {gold}")

    # Choose an action
    print("Please choose an action:")
    print("1: Explore the world")
    print("2: Fight a monster")
    print("3: Visit the shop")
    choice = int(input())

    # Explore the world
    if choice == 1:
        print("You set out to explore the world.")
        chance = random.randint(1, 3)
        if chance == 1:
            print("You stumbled upon a monster! Prepare to fight.")
            choice = 2
        elif chance == 2:
            print("You found a treasure chest! You find a health potion inside.")
            health += 25
        else:
            print("You didn't find anything of interest.")

    # Fight a monster
    elif choice == 2:
        print("You encountered a monster!")
        monster_health = 100
        monster_attack = 10
        monster_defense = 10
        while monster_health > 0 and health > 0:
            # Player turn
            print("It's your turn to attack. Choose your move:")
            print("1: Attack")
            print("2: Defend")
            move = int(input())
            if move == 1:
                damage = attack - monster_defense
                monster_health -= damage
                print(f"You hit the monster for {damage} damage!")
            elif move == 2:
                defense += 5
                print("You raise your guard and gain 5 defense.")

            # Monster turn
            damage = monster_attack - defense
            health -= damage
            print(f"The monster hits you for {damage} damage!")

        # Determine winner
        if health > 0:
            print("You defeated the monster!")
            gold += 25
        else:
            print("The monster defeated you. Game over.")
            break

    # Visit the shop
    elif choice == 3:
        print("Welcome to the shop! What would you like to do:")
        print("1: Buy an item")
        print("2: Sell an item")
        print("3: Exit the shop")
        choice = int(input())
        if choice == 1:
            # Display items for sale
            print("Here are the items for sale:")
            for i, item in enumerate(items):
                print(f"{i + 1}: {item['name']} ({item['cost']} gold)")
            choice = int(input()) - 1
            item = items[choice]
            if item['cost'] <= gold:
                gold -= item['cost']
                if item['type'] == 'weapon':
                    attack += item['attack']
                    print(f"You bought the {item['name']} for {item['cost']} gold and gained {item['attack']} attack.")
                elif item['type'] == 'armor':
                    defense += item['defense']
                    print(
                        f"You bought the {item['name']} for {item['cost']} gold and gained {item['defense']} defense.")
                elif item['type'] == 'consumable':
                    health += item['health']
                    print(f"You bought the {item['name']} for {item['cost']} gold and gained {item['health']} health.")
            else:
                print("You don't have enough gold to buy that item.")
        elif choice == 2:
            # Sell an item
            print("What would you like to sell:")
            for i, item in enumerate(items):
                if item['cost'] > 0:
                    print(f"{i + 1}: {item['name']} ({item['cost'] // 2} gold)")
            choice = int(input()) - 1
            item = items[choice]
            gold += item['cost'] // 2
            if item['type'] == 'weapon':
                attack -= item['attack']
                print(f"You sold the {item['name']} for {item['cost'] // 2} gold and lost {item['attack']} attack.")
            elif item['type'] == 'armor':
                defense -= item['defense']
                print(f"You sold the {item['name']} for {item['cost'] // 2} gold and lost {item['defense']} defense.")
            elif item['type'] == 'consumable':
                health -= item['health']
                print(f"You used the {item['name']} and lost {item['health']} health.")
        elif choice == 3:
            print("You exit the shop.")
