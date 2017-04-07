#gnome-terminal -x sh -c "./server -P 2222; bash"
#gnome-terminal -x sh -c "./client -D 127.0.0.1 -P 2222 -u 42; bash"
#these commends only run after make
gnome-terminal -x sh -c "echo 'server started on port 2222'; ./server -P 2222; bash"
gnome-terminal -x sh -c "echo 'client connecting to server on port 222'; ./client -D 127.0.0.1 -P 2222 -u 42; bash"


