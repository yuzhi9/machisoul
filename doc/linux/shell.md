# Shell

shell 解释器一般有/bin/bash 和 /bin/sh，sh是bash的软连接，但sh遵循POSIX规范，当某行代码出错时，不会继续往下解释，而bash就算出错，也会继续往下解释。

## if

```
#[if] struct
if [ 'condition' ]; then #condition left and right must haave space.
	'execution'
else [ 'condition' ]; then
	'or execution'
fi

#condition Commonly used
-e 'file_path'
! -e 'file_path'
-d 'path'

```

