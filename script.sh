for i in `ls -ltr|grep ^d|awk -F' ' '{print $9}'`
do
   cd $i
   rm -rf *.dSYM
   for i in `ls -ltr|grep -v total| awk -F' ' '{print $9}'`;do file $i;done|grep executable|cut -d':' -f1 > exec_cplusplus.txt
   for i in `cat exec_cplusplus.txt`;do rm -rf $i;done
   rm -rf exec_cplusplus.txt
   cd ..
done