from Question import Question

question_prompts = [
    "What color are apples?\n(a) Red/Green\n(b) Purple\n(c) Orange\n\n",
    "What is Python?\n(a) Programming language\n(b) Snake\n(c) Car\n\n",
    "What is c++?\n(a) Programming language\n(b) Language you need to write minimum three more lines of code than in python\n(c) Car\n\n"
]

questions = [
    Question(question_prompts[0], "a"),
    Question(question_prompts[1], "a"),
    Question(question_prompts[2], "b"),
]

def run_test(questions):
    Score = 0
    for Question in questions:
        answer = input(Question.prompt)
        if answer == Question.answer:
            Score += 1
    print("You got " + str(Score) + " out of " + str(len(questions)) + " correct")

run_test(questions)