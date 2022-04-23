# Libft
42-Cursus

:computer: Libft

### Fonksiyonlar <ctype.h> <br /> 
➡️ Karakterleri türlerine göre sınıflandırmak veya büyük ve küçük harflere çevirmek için kullanılan fonksiyonları içerir. <br /> <br />
​
ft_isalpha - alfabetik bir karakter olup olmadığını kontrol eder. <br />
ft_isdigit - rakam olup olmadığını kontrol eder. <br />
ft_isalnum - alfanümerik bir karakter olup olmadığını kontrol eder. <br />
ft_isascii - c'nin ASCII karakter kümesine uyup uymadığını kontrol eder. <br />
ft_isprint - yazdırılabilir bir karakter olup olmadığını kontrol eder. <br />
ft_toupper - küçük harfi büyük harfe çevir. <br />
ft_tolower - büyük harfi küçük harfe çevir. <br />
​
	<br />

### Fonksiyonlar <string.h> <br /> 
➡️ Karakter dizisi fonksiyonları içerir. <br /> <br />
​
ft_memset - bellekte istediğimiz kadar alanı sabit bayt ile doldurmamızı sağlar <br />
ft_strlen - bir dizenin uzunluğunu hesaplar. <br />
ft_bzero - bir bayt dizesini sıfırlar. <br />
ft_memcpy - hafıza alanını veri tasarruflu kopyalar. <br />
ft_memmove - hafıza alanının istediğimiz kadarını taşır. <br />
ft_strlcpy - 2 dizeyi de birbirine ekler fakat 2. olanın uzunluğunu return eder. <br />
ft_strlcat - 2 dizeyi de birleştirir. <br />
ft_strchr - dizedeki karakteri bulup geri kalan str'yi döndürür. <br />
ft_strrchr - dizedeki karakteri tersten bulup kalanı yazdırır. <br />
ft_strncmp - iki stringi karşılaştırıp char farkını geri döndürür. <br />
ft_memchr - bir karakter için hafızayı tarayıp adresini döndürür. <br />
ft_memcmp - hafıza alanlarını karşılaştırıp adreslerin ascii tablosundaki farkını alır. <br />
ft_strnstr - 2 stringi karşıalştırıp aradığını bulduğunda geri kalanı return eder. <br />
ft_strdup - parametre olarak iletilen dize için bir kopya oluşturur. <br />
​
	<br />

### Fonksiyonlar <stdlib.h> <br />
➡️ Sayısal dönüşüm, rastgele sayı üretme, bellek ayırma ve process kontrol fonksiyonları içerir. <br /> <br />
​
ft_atoi - string olarak verilen değeri int tipine çevirir. <br />
ft_calloc - belleği ayırır ve bayt değerlerini 0 ile doldurur. <br />
​
	<br />
### Standart olmayan fonksiyonlar <br />
​
ft_substr - bir dizgeden bir alt dizgi döndürür. <br />
ft_strjoin - iki dizeyi birleştirir. <br />
ft_strtrim - belirli karakter kümesiyle dizenin başlangıcını ve sonunu keser. <br />
ft_split - parametre olarak bir karakter kullanarak bir dizeyi böler. <br />
ft_itoa - integer'ı ascii'ye çevirir. <br />
ft_strmapi - ‘f’ fonksiyonunu ‘s’ stringinin bütün karakterlerine uygular. değiştirlen stringden yeni bir string yaratılır. <br />
ft_striteri - ‘f’ fonksiyonun stringin her karakterine uygular. eğer gerekli olursa her karakter adresi ile gönderilmelidir. <br />
ft_putchar_fd - file descriptora ‘c’ karakterinin çıktısını yazar. <br />
ft_putstr_fd - ‘s’ stringini verilen file descriptor içerisine yazar. <br />
ft_putendl_fd - ‘s’ string çıktısını sonunda new line karakteri ile birlikte verilen file descriptora yazar. <br />
ft_putnbr_fd - integer ‘n’ değerinin çıktısını verilen file descriptora yazar. <br />
​
	<br />
### Bağlantılı Liste İşlevleri <br />
​
ft_lstnew - yeni bir liste öğesi oluşturur. <br />
ft_lstadd_front - listenin başına bir eleman ekler. <br />
ft_lstsize - bir listedeki öğelerin sayısını sayar. <br />
ft_lstlast - listenin son öğesini döndürür. <br />
ft_lstadd_back - listenin sonuna bir eleman ekler. <br />
ft_lstclear - siler ve ücretsiz liste. <br />
ft_lstiter - bir listenin her elemanına bir fonksiyon uygular. <br />
ft_lstmap - bir listenin her elemanına bir fonksiyon uygular. <br />
