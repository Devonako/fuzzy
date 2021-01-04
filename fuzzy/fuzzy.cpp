#include <string>
#include <random>
#include <time.h>
#include <sstream>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
std::vector<std::string> fnames = { "Emma", "Olivia", "Ava", "Isabella", "Sophia", "Charlotte", "Mia", "Amelia", "Harper", "Evelyn", "Abigail", "Emily", "Elizabeth", "Mila", "Ella", "Avery", "Sofia", "Camila", "Aria", "Scarlett", "Victoria", "Madison", "Luna", "Grace", "Chloe", "Penelope", "Layla", "Riley", "Zoey", "Nora", "Lily", "Eleanor", "Hannah", "Lillian", "Addison", "Aubrey", "Ellie", "Stella", "Natalie", "Zoe", "Leah", "her	Hazel", "Violet", "Aurora", "Savannah", "Audrey", "Brooklyn", "Bella", "Claire", "Lucy", "Paisley", "Everly", "Anna", "Caroline", "Nova", "Genesis", "Kennedy", "Samantha", "Maya", "Willow", "Kinsley", "Naomi", "Aaliyah", "Elena", "Sarah", "Ariana", "Allison", "Gabriella", "Alice", "Madelyn", "Cora", "Ruby", "Eva", "Serenity", "Autumn", "Adeline", "Gianna", "Valentina", "Isla", "Eliana", "Quinn", "Nevaeh", "Ivy", "Sadie", "Piper", "Lydia", "Alexa", "Josephine", "Emery", "Julia", "Delilah", "Arianna", "Vivian", "Kaylee", "Sophie", "Brielle", "Madeline", "Peyton", "Rylee", "Clara", "Hadley", "Melanie", "Mackenzie", "Reagan", "Adalynn", "Liliana", "Aubree", "Jade", "Katherine", "Elle", "Natalia", "Raelynn", "Maria", "Athena", "Ximena", "Arya", "Leilani", "Taylor", "Faith", "Rose", "Kylie", "Alexandra", "Mary", "Margaret", "Lyla", "Ashley", "Amaya", "Eliza", "Brianna", "Bailey", "Andrea", "Khloe", "Melody", "Iris", "Isabel", "Norah", "Annabelle", "Valeria", "Emerson", "Adalyn", "Ryleigh", "Eden", "Emersyn", "Anastasia", "Kayla", "Alyssa", "Juliana", "Charlie", "Esther", "Ariel", "Cecilia", "Valerie", "Alina", "Molly", "Reese", "Aliyah", "Lilly", "Parker", "Finley", "Morgan", "Sydney", "Jordyn", "Eloise", "Trinity", "Daisy", "Kimberly", "Lauren", "Genevieve", "Sara", "Arabella", "Harmony", "Elise", "Remi", "Teagan", "Alexis", "London", "Sloane", "Laila", "Lucia", "Diana", "Juliette", "Sienna", "Elliana", "Londyn", "Ayla", "Callie", "Gracie", "Josie", "Amara", "Jocelyn", "Daniela", "Everleigh", "Mya", "Rachel", "Summer", "Alana", "Brooke", "Alaina", "Mckenzie", "Catherine", "Amy", "Presley", "Journee", "Rosalie", "Ember", "Brynlee", "Rowan", "Joanna", "Paige",  "Ana", "Sawyer", "Mariah", "Nicole", "Brooklynn", "Payton", "Marley", "Fiona", "Georgia", "Lila", "Harley", "Adelyn", "Alivia", "Noelle", "Gemma", "Vanessa", "Journey", "Makayla", "Angelina", "Adaline", "Catalina", "Alayna", "Julianna", "Leila", "Lola", "Adriana", "June", "Juliet", "Jayla", "River", "Tessa", "Lia", "Dakota", "Delaney", "Selena", "Blakely", "Ada", "Camille", "Zara", "Malia", "Samara", "Vera", "Mckenna", "Briella", "Izabella", "Hayden", "Raegan", "Michelle", "Angela", "Ruth", "Freya", "Kamila", "Vivienne", "Aspen", "Olive", "Kendall", "Elaina", "Thea", "Kali", "Destiny", "Amiyah", "Evangeline", "Cali", "Blake", "Elsie", "Juniper", "Alexandria", "Myla", "Ariella", "Kate", "Mariana", "Lilah", "Charlee", "Daleyza", "Nyla", "Jane", "Maggie", "Zuri", "Aniyah", "Lucille", "Leia", "Melissa", "Adelaide", "Amina", "Giselle", "Lena", "Camilla", "Miriam", "Millie", "Brynn", "Gabrielle", "Sage", "Annie", "Lilliana", "Haven", "Jessica", "Kaia", "Magnolia", "Amira", "Adelynn", "Makenzie", "Stephanie", "Nina", "Phoebe", "Arielle", "Evie", "Lyric", "Alessandra", "Gabriela", "Paislee", "Raelyn", "Madilyn", "Paris", "Makenna", "Kinley", "Gracelyn", "Talia", "Maeve", "Rylie", "Kiara", "Evelynn", "Brinley", "Jacqueline", "Laura", "Gracelynn", "Lexi", "Ariah", "Fatima", "Jennifer", "Kehlani", "Alani", "Ariyah", "Luciana", "Allie", "Heidi", "Maci", "Phoenix", "Felicity", "Joy", "Kenzie", "Veronica", "Margot", "Addilyn", "Lana", "Cassidy", "Remington", "Saylor", "Ryan", "Keira", "Harlow", "Miranda", "Angel", "Amanda", "Daniella", "Royalty", "Gwendolyn", "Ophelia", "Jordan", "Madeleine", "Esmeralda", "Kira", "Miracle", "Elle", "Amari", "Danielle", "Daphne", "Willa", "Haley", "Gia", "Kaitlyn", "Oakley", "Kailani", "Winter", "Alicia", "Serena", "Nadia", "Aviana", "Demi", "Jada", "Braelynn", "Dylan", "Alison", "Camryn", "Avianna", "Bianca", "Skyler", "Scarlet", "Maddison", "Nylah", "Sarai", "Regina", "Dahlia", "Nayeli", "Raven", "Helen", "Adrianna", "Averie", "Skye", "Kelsey", "Tatum", "Kensley", "Maliyah", "Erin", "Viviana", "Jenna", "Anaya", "Carolina", "Shelby", "Sabrina", "Mikayla", "Annalise", "Octavia", "Lennon", "Blair", "Carmen", "Yaretzi", "Kennedi", "Mabel", "Zariah", "Kyla", "Christina", "Selah", "Celeste", "Eve", "Mckinley", "Milani", "Frances", "Jimena", "Kylee", "Leighton", "Katie", "Aitana", "Kayleigh", "Sierra", "Rosemary", "Jolene", "Alondra", "Elisa", "Helena", "Charleigh", "Hallie", "Lainey", "Avah", "Jazlyn", "Kamryn", "Mira", "Cheyenne", "Francesca", "Antonella", "Wren", "Chelsea", "Amber", "Emory", "Lorelei", "Nia", "Abby", "April", "Emelia", "Carter", "Aylin", "Cataleya", "Bethany", "Marlee", "Carly", "Kaylani", "Emely", "Liana", "Madelynn", "Cadence", "Matilda", "Sylvia", "Myra", "Fernanda", "Oaklyn", "Elianna", "Hattie", "Dayana", "Kendra", "Maisie", "Malaysia", "Kara", "Katelyn", "Maia", "Celine", "Cameron", "Renata", "Jayleen", "Charli",  "Holly", "Azalea", "Leona", "Alejandra", "Bristol", "Collins", "Imani", "Meadow", "Alexia", "Edith", "Kaydence", "Leslie", "Lilith", "Kora", "Aisha", "Meredith", "Danna", "Wynter", "Emberly", "Julieta", "Michaela", "Alayah", "Jemma", "Reign", "Colette", "Kaliyah", "Elliott", "Johanna", "Remy", "Sutton", "Emmy", "Virginia", "Briana", "Adelina", "Everlee", "Megan", "Angelica", "Justice", "Mariam", "Khaleesi", "Macie", "Karsyn", "Alanna", "Aleah", "Mae", "Mallory", "Esme", "Skyla", "Madilynn", "Charley", "Allyson", "Hanna", "Shiloh", "Henley", "Macy", "Maryam", "Ivanna", "Ashlynn", "Lorelai", "Amora", "Ashlyn", "Sasha", "Baylee", "Beatrice", "Itzel","Marie", "Jayda", "Liberty", "Rory", "Alessia", "Alaia", "Janelle", "Kalani", "Sloan", "Dorothy", "Greta", "Julie", "Zahra", "Savanna", "Annabella", "Poppy", "Amalia", "Zaylee", "Cecelia", "Coraline", "Kimber", "Emmie", "Anne", "Karina", "Kassidy", "Kynlee", "Anahi", "Jaliyah", "Jazmin", "Maren", "Monica", "Siena", "Marilyn", "Reyna", "Kyra", "Lilian", "Jamie", "Melany", "Alaya", "Ariya", "Kelly", "Rosie", "Adley", "Dream", "Jaylah", "Laurel", "Jazmine", "Mina", "Karla", "Bailee", "Aubrie", "Katalina", "Melina", "Harlee", "Elliot", "Hayley", "Elaine", "Karen", "Dallas", "Lylah", "Ivory", "Chaya", "Rosa", "Aleena", "Braelyn", "Nola", "Alma", "Leyla", "Pearl", "Addyson", "Roselyn", "Lacey", "Lennox", "Reina", "Aurelia", "Noa", "Janiyah", "Jessie", "Madisyn", "Saige", "Alia", "Tiana", "Astrid", "Cassandra", "Kyleigh", "Romina", "Stevie", "Haylee", "Zelda", "Lillie", "Aileen", "Brylee", "Eileen", "Yara", "Ensley", "Lauryn", "Giuliana", "Livia", "Anya", "Mikaela", "Lyra", "Mara", "Marina", "Kailey", "Liv", "Clementine", "Kenna", "Briar", "Emerie", "Tiffany", "Bonnie", "Cynthia", "Frida", "Tatiana", "Joelle", "Armani", "Jolie", "Nalani", "Rayna", "Yareli", "Meghan", "Rebekah", "Addilynn", "Faye", "Zariyah", "Lea", "Aliza", "Julissa", "Lilyana", "Anika", "Kairi", "Aniya", "Noemi", "Angie", "Crystal", "Bridget", "Ari", "Davina", "Amelie", "Amirah", "Annika", "Elora", "Xiomara", "Linda", "Hana", "Mercy", "Hadassah", "Madalyn", "Louisa", "Simone", "Kori", "Jillian", "Alena", "Malaya", "Miley", "Milan", "Sariyah", "Clarissa", "Nala", "Princess", "Amani", "Analia", "Estella", "Milana", "Aya", "Chana", "Tenley", "Zaria", "Penny", "Ailani", "Lara", "Aubriella", "Clare", "Rhea", "Bria", "Thalia", "Keyla", "Haisley", "Ryann", "Addisyn", "Amaia", "Chanel", "Ellen", "Harmoni", "Aliana", "Tinsley", "Landry", "Paisleigh", "Lexie", "Myah", "Rylan", "Deborah", "Emilee", "Laylah", "Novalee", "Ellis", "Emmeline", "Avalynn", "Hadlee", "Legacy", "Braylee", "Elisabeth", "Kaylie", "Ansley", "Dior", "Paula", "Belen", "Corinne", "Maleah", "Martha", "Teresa", "Salma", "Louise", "Averi", "Lilianna", "Amiya", "Royal", "Aubrielle", "Calliope", "Frankie", "Natasha", "Kamilah", "Meilani", "Raina", "Amayah", "Lailah", "Rayne", "Isabela", "Nathalie", "Miah", "Opal", "Kenia", "Azariah", "Hunter", "Tori", "Andi", "Keily", "Scarlette", "Jaelyn", "Saoirse", "Selene", "Dalary", "Lindsey", "Marianna", "Ramona", "Estelle", "Giovanna", "Holland", "Nancy", "Emmalynn", "Mylah", "Rosalee", "Sariah", "Zoie", "Blaire", "Lyanna", "Maxine", "Anais", "Dana", "Judith", "Kiera", "Jaelynn", "Noor", "Kai", "Adalee", "Oaklee", "Amaris", "Jaycee", "Belle", "Carolyn", "Della", "Karter", "Sky", "Treasure", "Vienna", "Jewel", "Rivka", "Rosalyn", "Alannah", "Ellianna", "Sunny", "Claudia", "Cara", "Hailee", "Estrella", "Harleigh", "Zhavia", "Alianna", "Brittany", "Jaylene", "Journi", "Marissa", "Mavis", "Iliana", "Jurnee", "Aislinn", "Alyson", "Elsa", "Kamiyah", "Kiana", "Lisa", "Arlette", "Kadence", "Kathleen", "Halle", "Erika", "Sylvie", "Adele", "Erica", "Veda", "Whitney", "Bexley", "Emmaline", "Guadalupe", "August", "Brynleigh", "Gwen", "Promise", "Alisson", "India", "Madalynn", "Paloma", "Patricia", "Samira", "Aliya", "Casey", "Jazlynn", "Paulina", "Dulce", "Kallie", "Perla", "Adrienne", "Alora", "Nataly", "Christine", "Kaiya", "Ariadne", "Karlee", "Barbara", "Lillianna", "Raquel", "Saniyah", "Yamileth", "Arely", "Celia", "Heavenly", "Kaylin", "Marisol", "Marleigh", "Avalyn", "Berkley", "Kataleya", "Zainab", "Dani", "Egypt", "Joyce", "Kenley", "Annabel", "Kaelyn", "Etta", "Hadleigh", "Joselyn", "Luella", "Jaylee", "Zola", "Ezra", "Queen", "Amia", "Annalee", "Bellamy", "Paola", "Tinley", "Violeta", "Jenesis", "Arden", "Don", "Mike","Giana", "Ellison", "Florence", "Margo", "Naya", "Carlos", "Robin", "Scout", "Waverly", "Janessa", "Jayden", "Micah", "Novah", "Zora", "Ann", "Jana", "Taliyah", "Vada", "Giavanna", "Ingrid", "Valery", "Azaria", "Emmarie", "Esperanza", "Kailyn", "Keilani", "Austyn", "Whitley", "Elina", "Kimora" };
std::vector<std::string> lnames = { "Smith","Johnson","Williams","Brown","Jones","Garcia","Miller","Davis","Rodriguez","Martinez","Hernandez","Lopez","Gonzalez","Wilson","Anderson","Thomas","Taylor","Moore","Jackson","Martin","Lee","Perez","Thompson","White","Harris","Sanchez","Clark","Ramirez","Lewis","Robinson","Walker","Young","Allen","King","Wright","Scott","Torres","Nguyen","Hill","Flores","Green","Adams","Nelson","Baker","Hall","Rivera","Campbell","Mitchell","Carter","Roberts" };
std::vector<std::string> anames = { "Emma", "Olivia", "Ava", "Isabella", "Sophia", "Charlotte", "Mia", "Amelia", "Harper", "Evelyn", "Abigail", "Emily", "Elizabeth", "Mila", "Ella", "Avery", "Sofia", "Camila", "Aria", "Scarlett", "Victoria", "Madison", "Luna", "Grace", "Chloe", "Penelope", "Layla", "Riley", "Zoey", "Nora", "Lily", "Eleanor", "Hannah", "Lillian", "Addison", "Aubrey", "Ellie", "Stella", "Natalie", "Zoe", "Leah", "her	Hazel", "Violet", "Aurora", "Savannah", "Audrey", "Brooklyn", "Bella", "Claire", "Lucy", "Paisley", "Everly", "Anna", "Caroline", "Nova", "Genesis", "Kennedy", "Samantha", "Maya", "Willow", "Kinsley", "Naomi", "Aaliyah", "Elena", "Sarah", "Ariana", "Allison", "Gabriella", "Alice", "Madelyn", "Cora", "Ruby", "Eva", "Serenity", "Autumn", "Adeline", "Gianna", "Valentina", "Isla", "Eliana", "Quinn", "Nevaeh", "Ivy", "Sadie", "Piper", "Lydia", "Alexa", "Josephine", "Emery", "Julia", "Delilah", "Arianna", "Vivian", "Kaylee", "Sophie", "Brielle", "Madeline", "Peyton", "Rylee", "Clara", "Hadley", "Melanie", "Mackenzie", "Reagan", "Adalynn", "Liliana", "Aubree", "Jade", "Katherine", "Elle", "Natalia", "Raelynn", "Maria", "Athena", "Ximena", "Arya", "Leilani", "Taylor", "Faith", "Rose", "Kylie", "Alexandra", "Mary", "Margaret", "Lyla", "Ashley", "Amaya", "Eliza", "Brianna", "Bailey", "Andrea", "Khloe", "Melody", "Iris", "Isabel", "Norah", "Annabelle", "Valeria", "Emerson", "Adalyn", "Ryleigh", "Eden", "Emersyn", "Anastasia", "Kayla", "Alyssa", "Juliana", "Charlie", "Esther", "Ariel", "Cecilia", "Valerie", "Alina", "Molly", "Reese", "Aliyah", "Lilly", "Parker", "Finley", "Morgan", "Sydney", "Jordyn", "Eloise", "Trinity", "Daisy", "Kimberly", "Lauren", "Genevieve", "Sara", "Arabella", "Harmony", "Elise", "Remi", "Teagan", "Alexis", "London", "Sloane", "Laila", "Lucia", "Diana", "Juliette", "Sienna", "Elliana", "Londyn", "Ayla", "Callie", "Gracie", "Josie", "Amara", "Jocelyn", "Daniela", "Everleigh", "Mya", "Rachel", "Summer", "Alana", "Brooke", "Alaina", "Mckenzie", "Catherine", "Amy", "Presley", "Journee", "Rosalie", "Ember", "Brynlee", "Rowan", "Joanna", "Paige", "Ana", "Sawyer", "Mariah", "Nicole", "Brooklynn", "Payton", "Marley", "Fiona", "Georgia", "Lila", "Harley", "Adelyn", "Alivia", "Noelle", "Gemma", "Vanessa", "Journey", "Makayla", "Angelina", "Adaline", "Catalina", "Alayna", "Julianna", "Leila", "Lola", "Adriana", "June", "Juliet", "Jayla", "River", "Tessa", "Lia", "Dakota", "Delaney", "Selena", "Blakely", "Ada", "Camille", "Zara", "Malia", "Samara", "Vera", "Mckenna", "Briella", "Izabella", "Hayden", "Raegan", "Michelle", "Angela", "Ruth", "Freya", "Kamila", "Vivienne", "Aspen", "Olive", "Kendall", "Elaina", "Thea", "Kali", "Destiny", "Amiyah", "Evangeline", "Cali", "Blake", "Elsie", "Juniper", "Alexandria", "Myla", "Ariella", "Kate", "Mariana", "Lilah", "Charlee", "Daleyza", "Nyla", "Jane", "Maggie", "Zuri", "Aniyah", "Lucille", "Leia", "Melissa", "Adelaide", "Amina", "Giselle", "Lena", "Camilla", "Miriam", "Millie", "Brynn", "Gabrielle", "Sage", "Annie", "Lilliana", "Haven", "Jessica", "Kaia", "Magnolia", "Amira", "Adelynn", "Makenzie", "Stephanie", "Nina", "Phoebe", "Arielle", "Evie", "Lyric", "Alessandra", "Gabriela", "Paislee", "Raelyn", "Madilyn", "Paris", "Makenna", "Kinley", "Gracelyn", "Talia", "Maeve", "Rylie", "Kiara", "Evelynn", "Brinley", "Jacqueline", "Laura", "Gracelynn", "Lexi", "Ariah", "Fatima", "Jennifer", "Kehlani", "Alani", "Ariyah", "Luciana", "Allie", "Heidi", "Maci", "Phoenix", "Felicity", "Joy", "Kenzie", "Veronica", "Margot", "Addilyn", "Lana", "Cassidy", "Remington", "Saylor", "Ryan", "Keira", "Harlow", "Miranda", "Angel", "Amanda", "Daniella", "Royalty", "Gwendolyn", "Ophelia", "Jordan", "Madeleine", "Esmeralda", "Kira", "Miracle", "Elle", "Amari", "Danielle", "Daphne", "Willa", "Haley", "Gia", "Kaitlyn", "Oakley", "Kailani", "Winter", "Alicia", "Serena", "Nadia", "Aviana", "Demi", "Jada", "Braelynn", "Dylan", "Alison", "Camryn", "Avianna", "Bianca", "Skyler", "Scarlet", "Maddison", "Nylah", "Sarai", "Regina", "Dahlia", "Nayeli", "Raven", "Helen", "Adrianna", "Averie", "Skye", "Kelsey", "Tatum", "Kensley", "Maliyah", "Erin", "Viviana", "Jenna", "Anaya", "Carolina", "Shelby", "Sabrina", "Mikayla", "Annalise", "Octavia", "Lennon", "Blair", "Carmen", "Yaretzi", "Kennedi", "Mabel", "Zariah", "Kyla", "Christina", "Selah", "Celeste", "Eve", "Mckinley", "Milani", "Frances", "Jimena", "Kylee", "Leighton", "Katie", "Aitana", "Kayleigh", "Sierra", "Rosemary", "Jolene", "Alondra", "Elisa", "Helena", "Charleigh", "Hallie", "Lainey", "Avah", "Jazlyn", "Kamryn", "Mira", "Cheyenne", "Francesca", "Antonella", "Wren", "Chelsea", "Amber", "Emory", "Lorelei", "Nia", "Abby", "April", "Emelia", "Carter", "Aylin", "Cataleya", "Bethany", "Marlee", "Carly", "Kaylani", "Emely", "Liana", "Madelynn", "Cadence", "Matilda", "Sylvia", "Myra", "Fernanda", "Oaklyn", "Elianna", "Hattie", "Dayana", "Kendra", "Maisie", "Malaysia", "Kara", "Katelyn", "Maia", "Celine", "Cameron", "Renata", "Jayleen", "Charli",  "Holly", "Azalea", "Leona", "Alejandra", "Bristol", "Collins", "Imani", "Meadow", "Alexia", "Edith", "Kaydence", "Leslie", "Lilith", "Kora", "Aisha", "Meredith", "Danna", "Wynter", "Emberly", "Julieta", "Michaela", "Alayah", "Jemma", "Reign", "Colette", "Kaliyah", "Elliott", "Johanna", "Remy", "Sutton", "Emmy", "Virginia", "Briana", "Adelina", "Everlee", "Megan", "Angelica", "Justice", "Mariam", "Khaleesi", "Macie", "Karsyn", "Alanna", "Aleah", "Mae", "Mallory", "Esme", "Skyla", "Madilynn", "Charley", "Allyson", "Hanna", "Shiloh", "Henley", "Macy", "Maryam", "Ivanna", "Ashlynn", "Lorelai", "Amora", "Ashlyn", "Sasha", "Baylee", "Beatrice", "Itzel",  "Marie", "Jayda", "Liberty", "Rory", "Alessia", "Alaia", "Janelle", "Kalani", "Sloan", "Dorothy", "Greta", "Julie", "Zahra", "Savanna", "Annabella", "Poppy", "Amalia", "Zaylee", "Cecelia", "Coraline", "Kimber", "Emmie", "Anne", "Karina", "Kassidy", "Kynlee", "Anahi", "Jaliyah", "Jazmin", "Maren", "Monica", "Siena", "Marilyn", "Reyna", "Kyra", "Lilian", "Jamie", "Melany", "Alaya", "Ariya", "Kelly", "Rosie", "Adley", "Dream", "Jaylah", "Laurel", "Jazmine", "Mina", "Karla", "Bailee", "Aubrie", "Katalina", "Melina", "Harlee", "Elliot", "Hayley", "Elaine", "Karen", "Dallas", "Lylah", "Ivory", "Chaya", "Rosa", "Aleena", "Braelyn", "Nola", "Alma", "Leyla", "Pearl", "Addyson", "Roselyn", "Lacey", "Lennox", "Reina", "Aurelia", "Noa", "Janiyah", "Jessie", "Madisyn", "Saige", "Alia", "Tiana", "Astrid", "Cassandra", "Kyleigh", "Romina", "Stevie", "Haylee", "Zelda", "Lillie", "Aileen", "Brylee", "Eileen", "Yara", "Ensley", "Lauryn", "Giuliana", "Livia", "Anya", "Mikaela", "Lyra", "Mara", "Marina", "Kailey", "Liv", "Clementine", "Kenna", "Briar", "Emerie", "Tiffany", "Bonnie", "Cynthia", "Frida", "Tatiana", "Joelle", "Armani", "Jolie", "Nalani", "Rayna", "Yareli", "Meghan", "Rebekah", "Addilynn", "Faye", "Zariyah", "Lea", "Aliza", "Julissa", "Lilyana", "Anika", "Kairi", "Aniya", "Noemi", "Angie", "Crystal", "Bridget", "Ari", "Davina", "Amelie", "Amirah", "Annika", "Elora", "Xiomara", "Linda", "Hana", "Mercy", "Hadassah", "Madalyn", "Louisa", "Simone", "Kori", "Jillian", "Alena", "Malaya", "Miley", "Milan", "Sariyah", "Clarissa", "Nala", "Princess", "Amani", "Analia", "Estella", "Milana", "Aya", "Chana", "Tenley", "Zaria", "Penny", "Ailani", "Lara", "Aubriella", "Clare", "Rhea", "Bria", "Thalia", "Keyla", "Haisley", "Ryann", "Addisyn", "Amaia", "Chanel", "Ellen", "Harmoni", "Aliana", "Tinsley", "Landry", "Paisleigh", "Lexie", "Myah", "Rylan", "Deborah", "Emilee", "Laylah", "Novalee", "Ellis", "Emmeline", "Avalynn", "Hadlee", "Legacy", "Braylee", "Elisabeth", "Kaylie", "Ansley", "Dior", "Paula", "Belen", "Corinne", "Maleah", "Martha", "Teresa", "Salma", "Louise", "Averi", "Lilianna", "Amiya", "Royal", "Aubrielle", "Calliope", "Frankie", "Natasha", "Kamilah", "Meilani", "Raina", "Amayah", "Lailah", "Rayne", "Isabela", "Nathalie", "Miah", "Opal", "Kenia", "Azariah", "Hunter", "Tori", "Andi", "Keily", "Scarlette", "Jaelyn", "Saoirse", "Selene", "Dalary", "Lindsey", "Marianna", "Ramona", "Estelle", "Giovanna", "Holland", "Nancy", "Emmalynn", "Mylah", "Rosalee", "Sariah", "Zoie", "Blaire", "Lyanna", "Maxine", "Anais", "Dana", "Judith", "Kiera", "Jaelynn", "Noor", "Kai", "Adalee", "Oaklee", "Amaris", "Jaycee", "Belle", "Carolyn", "Della", "Karter", "Sky", "Treasure", "Vienna", "Jewel", "Rivka", "Rosalyn", "Alannah", "Ellianna", "Sunny", "Claudia", "Cara", "Hailee", "Estrella", "Harleigh", "Zhavia", "Alianna", "Brittany", "Jaylene", "Journi", "Marissa", "Mavis", "Iliana", "Jurnee", "Aislinn", "Alyson", "Elsa", "Kamiyah", "Kiana", "Lisa", "Arlette", "Kadence", "Kathleen", "Halle", "Erika", "Sylvie", "Adele", "Erica", "Veda", "Whitney", "Bexley", "Emmaline", "Guadalupe", "August", "Brynleigh", "Gwen", "Promise", "Alisson", "India", "Madalynn", "Paloma", "Patricia", "Samira", "Aliya", "Casey", "Jazlynn", "Paulina", "Dulce", "Kallie", "Perla", "Adrienne", "Alora", "Nataly", "Christine", "Kaiya", "Ariadne", "Karlee", "Barbara", "Lillianna", "Raquel", "Saniyah", "Yamileth", "Arely", "Celia", "Heavenly", "Kaylin", "Marisol", "Marleigh", "Avalyn", "Berkley", "Kataleya", "Zainab", "Dani", "Egypt", "Joyce", "Kenley", "Annabel", "Kaelyn", "Etta", "Hadleigh", "Joselyn", "Luella", "Jaylee", "Zola", "Ezra", "Queen", "Amia", "Annalee", "Bellamy", "Paola", "Tinley", "Violeta", "Jenesis", "Arden", "Don","Mike","Giana", "Ellison", "Florence", "Margo", "Naya", "Carlos","Robin", "Scout", "Waverly", "Janessa", "Jayden", "Micah", "Novah", "Zora", "Ann", "Jana", "Taliyah", "Vada", "Giavanna", "Ingrid", "Valery", "Azaria", "Emmarie", "Esperanza", "Kailyn", "Keilani", "Austyn", "Whitley", "Elina", "Kimora","Smith","Johnson","Williams","Brown","Jones","Garcia","Miller","Davis","Rodriguez","Martinez","Hernandez","Lopez","Gonzalez","Wilson","Anderson","Thomas","Taylor","Moore","Jackson","Martin","Lee","Perez","Thompson","White","Harris","Sanchez","Clark","Ramirez","Lewis","Robinson","Walker","Young","Allen","King","Wright","Scott","Torres","Nguyen","Hill","Flores","Green","Adams","Nelson","Baker","Hall","Rivera","Campbell","Mitchell","Carter","Roberts" };

//std::string differences;
//std::vector<std::string> ddw = { "d" };
std::vector<std::string> keyboard_chars = { "~","!","@","#","$","%","^","&","*","(",")","-","+","`","1","2","3","4","5","6","7","8","9","0","-","=","Q","W","E","R","T","Y","U","I","O","P","{","}","|","q","w","e","r","t","y","u","i","o","p","[","]","\\","A","S","D","F","G","H","J","K","L",":","\"","a","s","d","f","g","h","j","k","l",";","'","Z","X","C","V","B","N","M","<",">","?","z","x","c","v","b","n","m",",",".","/"};
std::vector<std::vector<int>> keyboard_cartesian = {
    { 0,0 },{ 0,1 },{ 0,2 }, { 0,3 }, { 0,4 }, { 0,5 }, { 0,6 }, { 0,7 }, { 0,8 }, { 0,9 }, { 0,10 },{0,11},{ 0,12 },{ 0,13 },
    { 1,0 },{ 1,1 },{ 1,2 }, { 1,3 }, { 1,4 }, { 1,5 }, { 1,6 }, { 1,7 }, { 1,8 }, { 1,9 }, { 1,10 },{1,11},{ 1,12 },{ 1,13 },
    { 2,0 },{ 2,1 },{ 2,2 }, { 2,3 }, { 2,4 }, { 2,5 }, { 2,6 }, { 2,7 }, { 2,8 }, { 2,9 }, { 2,10 },{2,11},{ 2,12 },{ 2,13 },
    { 3,0 },{ 3,1 },{ 3,2 }, { 3,3 }, { 3,4 }, { 3,5 }, { 3,6 }, { 3,7 }, { 3,8 }, { 3,9 }, { 3,10 },{3,11},{ 3,12 },{ 3,13 },
    { 4,0 },{ 4,1 },{ 4,2 }, { 4,3 }, { 4,4 }, { 4,5 }, { 4,6 }, { 4,7 }, { 4,8 }, { 4,9 }, { 4,10 },{4,11},
    { 5,0 },{ 5,1 },{ 5,2 }, { 5,3 }, { 5,4 }, { 5,5 }, { 5,6 }, { 5,7 }, { 5,8 }, { 5,9 }, { 5,10 },{5,11},
    { 6,0 },{ 6,1 },{ 6,2 }, { 6,3 }, { 6,4 }, { 6,5 }, { 6,6 }, { 6,7 }, { 6,8 }, { 6,9 }, { 6,10 },
    { 7,0 },{ 7,1 },{ 7,2 }, { 7,3 }, { 7,4 }, { 7,5 }, { 7,6 }, { 7,7 }, { 7,8 }, { 7,9 }, { 7,10 }
};

const int dictSize = 256;
void writeFile(std::string fName,std::string text) {
    // Create and open a text file
    std::ofstream MyFile(fName);

    // Write to the file
    MyFile << text;

    // Close the file
    MyFile.close();
}
std::vector<std::string> tokenizeString(const std::string& s, const std::string& del)
{
    static bool dict[dictSize] = { false };

    std::vector<std::string> res;
    for (unsigned int i = 0; i < del.size(); ++i) {
        dict[del[i]] = true;
    }

    std::string token("");
    for (auto& i : s) {
        if (dict[i]) {
            if (!token.empty()) {
                res.push_back(token);
                token.clear();
            }
        }
        else {
            token += i;
        }
    }
    if (!token.empty()) {
        res.push_back(token);
    }
    return res;
}
int euclidean_distance(int keyboardpos,int keyboardpos2) {
    std::vector<int> x = keyboard_cartesian[keyboardpos];
    std::vector<int> y = keyboard_cartesian[keyboardpos2];
    int dist = abs((y[1]-x[1]))+ abs((y[0] - x[0]));
    return dist;
}
unsigned int matchKeyboard_chars(std::string init, std::string replacement, int maxDist) {
    unsigned int distance = 0;
    unsigned int loop = 0;
    int firstMatch;
    int secondMatch;
    int addon = init.size() - replacement.size();
    addon = abs(addon);
    distance += addon;
    if (distance >= maxDist) {
        return distance;
    }
    for (char c : init) {
        firstMatch = 0;
        secondMatch = 0;
        if (loop < init.size() && loop < replacement.size()) {
            if (init[loop] != replacement[loop]) {
                for (unsigned int i = 0; i < keyboard_chars.size(); i++) {
                    if (keyboard_chars[i][0] == init[loop]) {
                        firstMatch = i;
                    }
                    if (keyboard_chars[i][0] == replacement[loop]) {
                        secondMatch = i;
                    }
                }
                distance += euclidean_distance(firstMatch, secondMatch);
                if (distance >= maxDist) {
                    return distance;
                }
            }
        }
        loop++;
    }
    return distance;
}
/*void replaceAll(std::string& str, const std::string& from, const std::string& to)
{
    if (from.empty())
        return;
    size_t start_pos = 0;
    while ((start_pos = str.find(from, start_pos)) != std::string::npos)
    {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}*/
void replaceAll(std::string& source, const std::string& from, const std::string& to)
{
    std::string newString;
    newString.reserve(source.length());  // avoids a few memory allocations

    std::string::size_type lastPos = 0;
    std::string::size_type findPos;

    while (std::string::npos != (findPos = source.find(from, lastPos)))
    {
        newString.append(source, lastPos, findPos - lastPos);
        newString += to;
        lastPos = findPos + from.length();
    }
    newString += source.substr(lastPos);
    source.swap(newString);
}
std::vector<std::string> split(const std::string& s, char delimiter)
{
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}
template<typename T>
typename T::size_type LevensteinDistance(const T& source, const T& target) {
    if (source.size() > target.size()) {
        return LevensteinDistance(target, source);
    }

    using TSizeType = typename T::size_type;
    const TSizeType min_size = source.size(), max_size = target.size();
    std::vector<TSizeType> lev_dist(min_size + 1);

    for (TSizeType i = 0; i <= min_size; ++i) {
        lev_dist[i] = i;
    }

    for (TSizeType j = 1; j <= max_size; ++j) {
        TSizeType previous_diagonal = lev_dist[0], previous_diagonal_save;
        ++lev_dist[0];

        for (TSizeType i = 1; i <= min_size; ++i) {
            previous_diagonal_save = lev_dist[i];
            if (source[i - 1] == target[j - 1]) {
                lev_dist[i] = previous_diagonal;
            }
            else {
                lev_dist[i] = std::min(std::min(lev_dist[i - 1], lev_dist[i]), previous_diagonal) + 1;
            }
            previous_diagonal = previous_diagonal_save;
        }
    }

    return lev_dist[min_size];
}
std::string fname(int iSecret)
{
	return fnames[iSecret];
}
std::string aname(int iSecret)
{
    return anames[iSecret];
}
std::string lname(int iSecret)
{
	return lnames[iSecret];
}
int randName() {
	int iSecret;
	std::string randName;
	srand(time(NULL));
	iSecret = rand() % fnames.size();
	randName += fname(iSecret);
	randName += " ";
	iSecret = rand() % lnames.size();
	randName += lname(iSecret);
	std::cout << randName << std::endl;
	return 0;
}
std::string fileOpen(std::string fileName) {
    std::string myText;
    std::string totalText="";
    // Read from the text file
    try
    {
        std::ifstream MyReadFile(fileName);

        // Use a while loop together with the getline() function to read the file line by line
        while (getline(MyReadFile, myText)) {
            // Output the text from the file
            totalText += myText;
            totalText += "\n";
        }
        // Close the file
        MyReadFile.close();
    }
    catch (const std::exception&)
    {

    }
    return totalText;

}
int main(int argc, const char* argv[])
{
    //int testint = 1 / 4;
    int lastSpot = 0;
    std::string text;
    std::string last;
    std::vector<std::string> namestoReplace;
    std::vector<int> distanceVect;
    if (argc> 1) {
         text = fileOpen(std::string(argv[argc-1]));
         if (text == "") {
             return -1;
         }
    }
    else {
        text = "Allison had a tremendous picnic by the lake.";
    }
    
    std::vector<std::string> pieces = tokenizeString(text," ,\n");
    std::sort(pieces.begin(), pieces.end());
    pieces.erase(std::unique(pieces.begin(), pieces.end()), pieces.end());
    for (unsigned int piece = 0; piece < pieces.size(); piece++) {
        int mindist = -1;
        for (unsigned int q = 0; q < anames.size(); q++) {
            int dist = LevensteinDistance(pieces[piece], anames[q]);
            if (q == 0) {
                mindist = dist;
                if (mindist == 0) {
                    namestoReplace.push_back(pieces[piece]);
                    distanceVect.push_back(0);
                    break;
                }
            }
            else if (dist < mindist) {
                mindist = dist;
                lastSpot = q;
                if (mindist == 0) {
                    namestoReplace.push_back(pieces[piece]);
                    distanceVect.push_back(0);
                    break;
                }
            }
            else if (q == anames.size() - 1) {
                if (matchKeyboard_chars(pieces[piece],anames[lastSpot],pieces[piece].size())<pieces[piece].size()) {
                    namestoReplace.push_back(pieces[piece]);
                    distanceVect.push_back(mindist);
                }
            }

        }
    }
    //std::sort(namestoReplace.begin(), namestoReplace.end());
    //namestoReplace.erase(std::unique(namestoReplace.begin(), namestoReplace.end()), namestoReplace.end());
    srand(time(NULL));
    std::string matching = "";
   // matching = matching + "Original Text: \n" + text + "\n";
    // << "Original Text: " << text << std::endl;
    for (unsigned int i = 0; i < namestoReplace.size(); i++) {
        std::string randName;
        int iSecret=0;
        matching = matching + "Min distance between " + namestoReplace[i] + " is " + std::to_string(distanceVect[i]) + "\n";
        //std::cout << "Min distance between " << namestoReplace[i] << " is " << std::to_string(distanceVect[i]) << std::endl;
        iSecret = rand() % anames.size();
        randName = aname(iSecret);
        replaceAll(text, namestoReplace[i], randName);
    }
    //matching = matching + "New Text: \n" + text + "\n";
    //std::cout << "New Text: " << text << std::endl;
    if (argc>1) {
        writeFile(std::string(argv[argc - 1]) + ".searched", matching);
        writeFile(std::string(argv[argc - 1]) + ".masked", text);
    }
    else {
        std::cout << matching << "\n" << text << std::endl;
    }
    return 0;
    //std::string newText = text.replace(text, randName);
}


