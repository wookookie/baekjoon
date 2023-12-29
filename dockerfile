FROM ubuntu:latest
ENV LANG C.UTF-8
WORKDIR /baekjoon
RUN apt update && apt upgrade
RUN apt install -y build-essential cmake gdb git
