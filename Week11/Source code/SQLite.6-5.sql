CREATE TABLE Orders(
  ProductID int NOT NULL UNIQUE AUTOINCREMENT,
  Category varchar(255),
  Price int,
  Description varchar(255),
  Color varchar(255),
  weight int

);