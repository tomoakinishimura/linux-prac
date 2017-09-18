# Linux System Pogramming Practice

## Linux System Call Practice

### Simple HTTP Server

- http.c:no connect sock
- http2.c:connetct sock, and replay html file

### How to user Simple HTTP Server

```shell
gcc -o httpd hello2.c
./httpd --help  # help参照
./httpd --port=3000 . # docment rootを指定する。httpd実行ファイルの相対パス。
```
