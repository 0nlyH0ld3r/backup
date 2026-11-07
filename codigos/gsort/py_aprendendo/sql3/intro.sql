
DROP TABLE IF EXISTS users;

CREATE TABLE IF NOT EXISTS users (
id INTEGER PRIMARY KEY,
name TEXT NOT NULL,
username TEXT NOT NULL UNIQUE,
email TEXT,
age INTEGER
);


INSERT INTO users (name, username)
VALUES ('Bruno', 'Holder'), ('Isaac', 'Zak'), ('Maria E.', 'Naim');

-- UPDATE users SET email = 'newemail@gmail.com' WHERE id = 1;

-- DELETE FROM users WHERE name='Isaac';

-- SELECT * FROM users

DROP TABLE IF EXISTS posts;

CREATE TABLE IF NOT EXISTS posts (
	id INTEGER PRIMARY KEY,
	user_id INTEGER REFERENCES users(id), -- foreign key
	title TEXT NOT NULL,
	body TEXT NOT NULL
);

INSERT INTO posts (user_id, title, body)
VALUES (3, 'My first post!', 'more information about myself...');

INSERT INTO posts (user_id, title, body)
VALUES (1, 'I really like gaming', 'It ended here. Theres not much about it');

-- CREATE VIEW posts_info AS
-- 	SELECT p.title, p.body, u.username FROM posts p
-- 	JOIN users u ON p.user_id = u.id;

SELECT * FROM posts_info;
