# Eliza
This project is a fun way to make a chatbot that emulate the Eliza chatbot (Or the Emacs Doctor)
and implement some things i'm learning right now.



# Main project

Just as the Eliza program, this is my version adding more words and more answer that
the doctor can use.



















# Future implementations

Things to do:
   Set up a database that contains words ordered by arguments:
      - Food
      - Drink
      - Animal
      - Person



# Food
This have tags that describes if food:
   - Salty
   - Sweet
   - Sour
Each of them has a indicator that indicate the percentage of this describers.
Every food has a "connection" with each other food, which means that a food can be good
with ones but bad with others:
Example:
   - Fish and milk is a bad combination
   - Fish with lemons is a good combination
   - Fish with lemons and milk are a bad combination

Implemet an algorithm that can make a reciepe based on balancing the taste of those foods
and the relationships with each other, depending also of the choice of the user.

// TODO: Find a database

# Drinks
Gives a list of drinks and its ingredients.
// TODO: Find a Database

# Animal
Gives a lsit of animals
// TODO: Find a database

# Person
Find a way to describe people and, based on this, formulate aswers to you.
In this first version we'll have standard person based on this adjectives:
   - Pessimistic
   - Optimistic
   - Funny
   - Imaginative
   - Supportive
   - Romantic
   (more will be added)
develop a program that uses a set of phrases already given based on his personality

personality can be described as a structure that contains:
   - vector of integers that describes the adjectives (Uses an Hash table to identify this adjectives)
   - string identifying the name of this personality
