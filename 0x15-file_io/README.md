# File I/O

. Opening Modes in Standard I/O

. Mode	

1. r	Open for reading.	
                                   If the file does not exist, fopen() returns NULL.

2. rb	Open for reading in binary mode.
                                   If the file does not exist, fopen() returns NULL.

3. w	Open for writing:If the file exists, its contents are overwritten.

                                   If the file does not exist, it will be created.

4. wb	Open for writing in binary mode:If the file exists, its contents are overwritten.

                                   If the file does not exist, it will be created.

                            
5. a	Open for append:Data is added to the end of the file.	

                                   If the file does not exist, it will be created.

6. ab	Open for append in binary mode:Data is added to the end of the file.

                                   If the file does not exist, it will be created.

7. r+	Open for both reading and writing.

                                   If the file does not exist, fopen() returns NULL.

8. rb+	Open for both reading and writing in binary mode.	

                                   If the file does not exist, fopen() returns NULL.

9. w+	Open for both reading and writing.	

                                   If the file exists, its contents are overwritten.

                                   If the file does not exist, it will be created.

10. wb+	Open for both reading and writing in binary mode.	

                                   If the file exists, its contents are overwrite.

                                   If the file does not exist, it will be created.

11. a+	Open for both reading and appending.
                                   If the file does not exist, it will be created.


12. ab+	Open for both reading and appending in binary mode.

                                    If the file does not exist, it will be created.


