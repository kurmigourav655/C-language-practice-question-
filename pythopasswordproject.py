import json
import os

passwords = {}

file_name = "password.json"


# Load data from file
def load_passwords():
    global passwords

    if os.path.exists(file_name):
        with open(file_name, "r") as file:
            passwords = json.load(file)
    else:
        passwords = {}


# Save data to file
def save_passwords():
    with open(file_name, "w") as file:
        json.dump(passwords, file, indent=4)


def add_password():
    website = input("Enter website: ")
    username = input("Enter username: ")
    password = input("Enter password: ")

    passwords[website] = {
        "username": username,
        "password": password
    }

    save_passwords()

    print("Password saved successfully!")


def view_passwords():
    if not passwords:
        print("No passwords saved.")
        return

    for website, data in passwords.items():
        print("\nWebsite:", website)
        print("Username:", data["username"])
        print("Password:", data["password"])


def search_password():
    website = input("Enter website to search: ")

    if website in passwords:
        print("\nWebsite:", website)
        print("Username:", passwords[website]["username"])
        print("Password:", passwords[website]["password"])
    else:
        print("Password not found.")


def delete_password():
    website = input("Enter website to delete: ")

    if website in passwords:
        del passwords[website]

        save_passwords()

        print("Password deleted.")
    else:
        print("Website not found.")


# Load saved data when program starts
load_passwords()


while True:

    print("\n===== PASSWORD MANAGER =====")
    print("1. Add Password")
    print("2. View Passwords")
    print("3. Search Password")
    print("4. Delete Password")
    print("5. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        add_password()

    elif choice == "2":
        view_passwords()

    elif choice == "3":
        search_password()

    elif choice == "4":
        delete_password()

    elif choice == "5":
        print("Goodbye!")
        break

    else:
        print("Invalid choice!")