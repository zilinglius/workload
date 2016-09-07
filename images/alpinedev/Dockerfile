FROM alpine
RUN apk add --no-cach g++ openssh git coreutils tzdata && cp /usr/share/zoneinfo/Asia/Shanghai /etc/localtime && echo "Asia/Shanghai" >> /etc/timezone
ADD key /
RUN chmod 600 /key && echo "IdentityFile /key" >> /etc/ssh/ssh_config && echo "StrictHostKeyChecking no" >> /etc/ssh/ssh_config && git config --global user.name zilinglius && git config --global user.email magstiff@qq.com
CMD git clone git@github.com:zilinglius/workload.git && cd workload && ./build.sh
