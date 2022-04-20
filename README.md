# Libft
42-Cursus

:computer: Libft

### Fonksiyonlar <ctype.h> <br /> 
➡️ Karakterleri türlerine göre sınıflandırmak veya büyük ve küçük harflere çevirmek için kullanılan fonksiyonları içerir. <br /> <br />
​
ft_isalpha - alfabetik bir karakter olup olmadığını kontrol eder. <br />
ft_isdigit - bir rakamı (0'dan 9'a kadar) kontrol eder. <br />
ft_isalnum - alfanümerik bir karakter olup olmadığını kontrol eder. <br />
ft_isascii - c'nin ASCII karakter kümesine uyup uymadığını kontrol eder. <br />
ft_isprint - yazdırılabilir herhangi bir karakter olup olmadığını kontrol eder. <br />
ft_toupper - karakteri büyük harfe çevir. <br />
ft_tolower - char'ı küçük harfe dönüştür. <br />
​
	<br />

### Fonksiyonlar <string.h> <br /> 
➡️ Karakter dizisi fonksiyonları içerir. <br /> <br />
​
ft_memset - belleği sabit bir bayt ile doldurun. <br />
ft_strlen - bir dizenin uzunluğunu hesaplamak. <br />
ft_bzero - bir bayt dizesini sıfırlayın. <br />
ft_memcpy - hafıza alanını kopyala. <br />
ft_memmove - hafıza alanını kopyala. <br />
ft_strlcpy - dizeyi belirli bir boyuta kopyala. <br />
ft_strlcat - dizeyi belirli bir boyuta birleştir. <br />
ft_strchr - dizedeki karakteri bulun. <br />
ft_strrchr - dizedeki karakteri bulun. <br />
ft_strncmp - iki dizeyi karşılaştırın. <br />
ft_memchr - bir karakter için hafızayı tara. <br />
ft_memcmp - hafıza alanlarını karşılaştırın. <br />
ft_strnstr - bir dizgede bir alt dizgiyi bulun. <br />
ft_strdup - parametre olarak iletilen dize için bir kopya oluşturur. <br />
​
	<br />

### Fonksiyonlar <stdlib.h> <br />
➡️ Sayısal dönüşüm, rastgele sayı üretme, bellek ayırma ve process kontrol fonksiyonları içerir. <br /> <br />
​
ft_atoi - string olarak verilen sayıyı int tipine çevirir. <br />
ft_calloc - belleği ayırır ve bayt değerlerini 0 ile doldurur. <br />
​
	<br />
### Standart olmayan fonksiyonlar <br />
​
ft_substr - bir dizgeden bir alt dizgi döndürür. <br />
ft_strjoin - iki dizeyi birleştirir. <br />
ft_strtrim - belirli karakter kümesiyle dizenin başlangıcını ve sonunu keser. <br />
ft_split - parametre olarak bir karakter kullanarak bir dizeyi böler. <br />
ft_itoa - bir sayıyı dizeye dönüştürür. <br />
ft_strmapi - bir dizgenin her karakterine bir işlev uygular. <br />
ft_striteri - bir dizgenin her karakterine bir işlev uygular. <br />
ft_putchar_fd - bir dosya tanıtıcısına bir karakter çıktısı. <br />
ft_putstr_fd - bir dosya tanıtıcısına bir dize çıktısı alın. <br />
ft_putendl_fd - dosya tanıtıcısına bir dize çıktısı alın ve ardından yeni bir satır. <br />
ft_putnbr_fd - bir dosya tanımlayıcısına bir sayı çıktısı. <br />
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
