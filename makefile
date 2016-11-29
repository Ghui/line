commit:
	git init
	git add .
	git commit -m "First Commit"
	git remote add origins https://github.com/Ghui/line.git
	git remote -v
	git push origins master
	cp  makefile ../3D
