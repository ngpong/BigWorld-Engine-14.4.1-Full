FROM centos:7.9.2009

RUN sed -i "s/mirror.centos.org/vault.centos.org/g" /etc/yum.repos.d/*.repo && \
  sed -i "s/^#.*baseurl=http/baseurl=http/g" /etc/yum.repos.d/*.repo && \
  sed -i "s/^mirrorlist=http/#mirrorlist=http/g" /etc/yum.repos.d/*.repo && \
  yum clean all && \
  yum -y makecache && \
  yum -y update

RUN yum -y groupinstall "Development Tools" && \
  yum install -y epel-release && \
  yum install -y epel-release && \
  yum install -y redhat-lsb-core && \
  yum install -y vim wget bzip2 mc which dos2unix && \
  yum install -y python2 python2-pip && \
  pip install --upgrade "pip < 21.0" && pip install scons && \
  yum install -y python3 python3-pip && \
  pip3 install --upgrade pip && python3 -m pip install compiledb && echo -e "export LC_ALL=en_US.utf-8\nexport LANG=en_US.utf-8"  >> ~/.bashrc && \
  yum install -y mariadb-devel python2-devel sqlite-devel readline-devel gdbm-devel bzip2-devel ncurses-devel binutils-devel 

WORKDIR /src
