
list = [
    {
        "id": 1,
        "title": "Countries",
        "summary": "The project scope is to show all countries and each country details on an individual webpage and provide a search result to users searching by country name or region.",
        "image": "./assets/images/p1.png",
        "pl": "Angular, Css, Html, Ngrx",
        "URL": "https://countriesall.netlify.app/countries"
    },
    {
        "id": 2,
        "title": "Justcart",
        "summary": "The project scope is to show all products and each product details on an individual webpage and add each product to a cart in cart increments decrement the quantity of each product and provide a search result to users searching by product title or categories. Note: the project was developed with a fake API store.",
        "image": "./assets/images/p2.png",
        "pl": "Angular, Css, Html, Ngrx",
        "URL": "https://justkart.netlify.app/"
    },
    {
        "id": 3,
        "title": "uicontainer",
        "summary": "The scope of the project is angular develop ui components like tabs, accordion.",
        "image": "./assets/images/p4.png",
        "pl": "Angular, Css, Html, Ngrx",
        "URL": "https://uicontainer.netlify.app/"
    },
    {
        "id": 4,
        "title": "Someshwar reddy",
        "summary": "The scope of the project is my portfolio.",
        "image": "./assets/images/p-3.png",
        "pl": "Angular, Css, Html, Ngrx",
        "URL": "https://someshwarreddy.netlify.app/"
    }
]

for i in list:
    if i["id"] == 0:
        print(i)
    elif i["id"] == 6:
        print(i)
    else:
        print("No match found")


# What will be the output of the above code snippet?
# out put no match found

current_password = "123456"
entered_password = "12345"
max_attempts = 3
attempts = 0

while entered_password != current_password and attempts < max_attempts:
    entered_password = input("Enter the password: ")
    attempts += 1

if entered_password == current_password:
    print("Access granted")
else:
    print("Access denied. Too many attempts.")


# What will be the output of the above code snippet?
#real time examples or use of if eleif else and for loop and while loop