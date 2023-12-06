import random

responses = ["It is certain.", "It is decidedly so.", "Without a doubt.", "Yes - definitely.", "You may rely on it.",
             "As I see it, yes.", "Most likely.", "Outlook good.", "Yes.", "Signs point to yes.",
             "Reply hazy, try again.", "Ask again later.", "Better not tell you now.", "Cannot predict now.",
             "Concentrate and ask again.", "Don't count on it.", "Outlook not so good.", "My sources say no.",
             "Very doubtful."]

print("Welcome to the Magic 8-Ball program. Ask a yes or no question and shake the ball for an answer!")

while True:
    # Ask for user input
    question = input("\nAsk a question: ")

    # Randomly select a response from the list of responses
    response = random.choice(responses)

    print(response)

    # Ask if the user wants to ask another question
    another_question = input("\nDo you want to ask another question? (y/n): ")

    # If the user doesn't want to ask another question, break out of the loop and end the program
    if another_question.lower() != "y":
        print("\nThanks for playing the Magic 8-Ball program!")
        break
