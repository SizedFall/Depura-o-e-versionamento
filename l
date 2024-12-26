[33mcommit e4b76e33f614b0284994f023e27954d2ac9befa3[m[33m ([m[1;36mHEAD[m[33m -> [m[1;32mTransform_temp[m[33m, [m[1;31morigin/main[m[33m, [m[1;31morigin/HEAD[m[33m, [m[1;32mmain[m[33m)[m
Merge: abad51b 336efbd
Author: Caio Guilherme <131017601+SizedFall@users.noreply.github.com>
Date:   Sun Dec 22 15:14:35 2024 -0300

    Merge pull request #7 from SizedFall/mesclando-arquivos-20241222
    
    Mesclando arquivos de código

[33mcommit 336efbd42782398e1bf16406779378774adcfc02[m[33m ([m[1;31morigin/mesclando-arquivos-20241222[m[33m)[m
Merge: 60e49eb abad51b
Author: yohannd1 <mitonanan12@gmail.com>
Date:   Sun Dec 22 01:57:17 2024 -0300

    Merge branch 'main' into mesclando-arquivos-20241222

[33mcommit 60e49eb88aa8aaa98090f4b498fe0128ad3628cd[m
Author: yohannd1 <mitonanan12@gmail.com>
Date:   Sun Dec 22 01:53:01 2024 -0300

    fazendo a opção de conversão de unidades de comprimento funcionar no
    menu

[33mcommit 6c033fe7ba93f26d8d76d5c7f11b72324fdd8bcb[m
Author: yohannd1 <mitonanan12@gmail.com>
Date:   Sun Dec 22 01:52:09 2024 -0300

    movendo interface principal para main.c

[33mcommit abad51bc08714210a30614e3510a4d97e737a1bd[m
Merge: 4371186 3267582
Author: Yohanan <23298480+yohannd1@users.noreply.github.com>
Date:   Sun Dec 22 01:48:27 2024 -0300

    Merge pull request #6 from SizedFall/feature/conversaoBytes
    
    Conversao bytes

[33mcommit 32675828b7a09f8f4400b0624c46059081d98017[m[33m ([m[1;31morigin/feature/conversaoBytes[m[33m)[m
Merge: 7c9c089 4371186
Author: yohannd1 <mitonanan12@gmail.com>
Date:   Sun Dec 22 01:48:10 2024 -0300

    Merge branch 'main' into feature/conversaoBytes

[33mcommit 4cb0ad26250e235d5cca3dd63dc30b3c42c6fc72[m
Author: yohannd1 <mitonanan12@gmail.com>
Date:   Sun Dec 22 01:38:48 2024 -0300

    movendo conversão de unidades de massa para main.c

[33mcommit a586e3d3b8e6961c8aa1417be27306e9e4799d46[m
Author: yohannd1 <mitonanan12@gmail.com>
Date:   Sun Dec 22 01:31:28 2024 -0300

    movendo conversão de unidades de energia para main.c

[33mcommit b398c081ad7f2f913cb4335ba7566ff9e6676607[m
Author: yohannd1 <mitonanan12@gmail.com>
Date:   Sun Dec 22 01:28:51 2024 -0300

    movendo conversão de unidades de comprimento para main.c

[33mcommit 7c9c08971d6568d889067a492b72e199d72eb7ef[m
Author: VitorPereiraFontes <vitor.fontes002@gmail.com>
Date:   Sat Dec 21 20:12:08 2024 -0300

    implementando a função 'conversaoDeBytes'
    
    Definindo um tipo customizado de ponteiro, que se adequa ao tipo das funções de conversão.

[33mcommit 1fa4131a7e955288301cd5b2a1404fb4ecbfec2f[m
Author: VitorPereiraFontes <vitor.fontes002@gmail.com>
Date:   Sat Dec 21 20:09:06 2024 -0300

    Adicionando a definição da função 'conversaoDeBytes'

[33mcommit 43711867a77a2956add264a6da1b270681ce9dda[m
Author: Caiquevianadev <caiquevianab12@gmail.com>
Date:   Sat Dec 21 17:30:42 2024 -0300

    Adicionando código de interface de usuário

[33mcommit 7f9e372c46a04aa7560243aac62260791d663961[m
Author: Caíque Viana <126989214+caiquevianadev@users.noreply.github.com>
Date:   Sat Dec 21 16:17:51 2024 -0300

    Renomeando o arquivo conversaoMassa para conversaoMassa.c
    
    O arquivo estava sem a extensão .c no final.

[33mcommit 17ed36697aba90d9ba105c6f34a292e5eed8e9c5[m
Author: VitorPereiraFontes <vitor.fontes002@gmail.com>
Date:   Fri Dec 20 13:12:20 2024 -0300

    Adicionando funções de conversão de terabytes
    
    Adicionando as seguintes funções:
    
    terabytesParaBytes
    terabytesParaKilobytes
    terabytesParaMegabytes
    terabytesParaGigabytes

[33mcommit 0db43b6a5282570b33a9ecf064944b11b25bd7e3[m
Author: VitorPereiraFontes <vitor.fontes002@gmail.com>
Date:   Fri Dec 20 12:54:03 2024 -0300

    Adicionando funções de conversão de gigabytes
    
    Adicionando as seguintes funções:
    
    gigabytesParaBytes
    gigabytesParaKilobytes
    gigabytesParaMegabytes
    gigabytesParaTerabytes

[33mcommit 881a53e2d444dd89e0a2599964713de759550538[m
Author: VitorPereiraFontes <vitor.fontes002@gmail.com>
Date:   Fri Dec 20 12:51:46 2024 -0300

    Adicionando funções de conversão de megabytes
    
    Adicionando as seguintes funções:
    
    megabytesParaBytes
    megabytesParaKilobytes
    megabytesParaGigabytes
    megabytesParaTerabytes

[33mcommit 3ba027ec94eb2f2ba10c560ac29eca0d623304cc[m
Author: VitorPereiraFontes <vitor.fontes002@gmail.com>
Date:   Fri Dec 20 12:36:24 2024 -0300

    Adicionando funções de conversão de kilobytes
    
    Adicionando as seguintes funções:
    
    kilobytesParaBytes
    kilobytesParaMegabytes
    kilobytesParaGigabytes
    kilobytesParaTerabytes

[33mcommit d1c63b6db0b955e451f047d55fb184338367b4ba[m
Author: VitorPereiraFontes <vitor.fontes002@gmail.com>
Date:   Fri Dec 20 12:33:42 2024 -0300

    Adicionando funções de conversão de bytes
    
    Adicionando as seguintes funções:
    
    bytesParaKilobytes
    bytesParaMegabytes
    bytesParaGigabytes
    bytesParaTerabytes

[33mcommit a745fa4606e45819930b504ea82a0bef3b7b673b[m
Merge: 1cced28 91c2b74
Author: allanyvictoria <allanyvictoriasantos13@hotmail.com>
Date:   Fri Dec 20 10:39:20 2024 -0300

    Merge pull request #5 from SizedFall/conversaowatts
    
    Add files via upload

[33mcommit 91c2b74a7a8d77114a03f2355a72e899fdd50d65[m[33m ([m[1;31morigin/conversaowatts[m[33m)[m
Author: allanyvictoria <allanyvictoriasantos13@hotmail.com>
Date:   Fri Dec 20 10:32:29 2024 -0300

    Add files via upload

[33mcommit 1cced28472dc2a62ef0091d17b430a859a3aca4c[m
Merge: 910f4dd 08d4971
Author: Caio Guilherme <131017601+SizedFall@users.noreply.github.com>
Date:   Fri Dec 20 00:23:21 2024 -0300

    Merge pull request #4 from SizedFall/yohanan
    
    menu de conversão de tempo

[33mcommit 7c511e276005a15d6f6d12e49c9986a7ccfac90b[m
Author: VitorPereiraFontes <vitor.fontes002@gmail.com>
Date:   Thu Dec 19 20:40:53 2024 -0300

    Adicionando a função 'removerDasOpcoesValidasPorIndex'
    
    Modificando a definição da função 'removerDasOpcoesPorIndex'.

[33mcommit 1ec155760ff3eabb7af1fa7526e3fe2124db9cfc[m
Author: VitorPereiraFontes <vitor.fontes002@gmail.com>
Date:   Thu Dec 19 20:29:51 2024 -0300

    Adicionando a função 'obterInputDoUsuario'

[33mcommit b575794f5a58cb0379241f6da4bfb0983d5056c1[m
Author: VitorPereiraFontes <vitor.fontes002@gmail.com>
Date:   Thu Dec 19 20:22:38 2024 -0300

    Adicionando a função 'opcaoValida'

[33mcommit 631dedc1c23e8d91fff8a7fb8d5e8486015052b2[m
Author: VitorPereiraFontes <vitor.fontes002@gmail.com>
Date:   Thu Dec 19 20:16:07 2024 -0300

    Adicionando a função 'imprimirOpcoes'
    
    Modificando a definição da função 'imprimirOpcoes'.

[33mcommit 051dfbe97fd787a7c6b27fef97b81651c41c2b1d[m
Author: VitorPereiraFontes <vitor.fontes002@gmail.com>
Date:   Thu Dec 19 20:04:23 2024 -0300

    Adicionando definição de funçoes
    
    Adicionando as definições das funções utilizadas na conversão de bytes.

[33mcommit 08d497106a0f40ce1711a8fb2ffb4c809834bb3c[m[33m ([m[1;31morigin/yohanan[m[33m)[m
Author: yohannd1 <mitonanan12@gmail.com>
Date:   Thu Dec 19 17:05:49 2024 -0300

    adicionando descrição de uso para o código de conversão de tempo, e
    removendo lista de afazeres temporária

[33mcommit 6d3ccd532f52c66bd63c9d2bd0110e6fdced662d[m
Author: yohannd1 <mitonanan12@gmail.com>
Date:   Thu Dec 19 17:04:18 2024 -0300

    adicionando instruções de compilação no README

[33mcommit 5e7f706d8b431c59a76dae29f96ff399a270489f[m
Author: yohannd1 <mitonanan12@gmail.com>
Date:   Thu Dec 19 17:01:44 2024 -0300

    menu de conversão de tempo

[33mcommit 910f4dd15f10d8cc657a2e40b34864b53ff58827[m
Author: ssjuia <134456151+ssjuia@users.noreply.github.com>
Date:   Thu Dec 19 16:56:15 2024 -0300

    Create conversaoMassa

[33mcommit 80f1a30e9408a9fc31d26dab1493ba2fe84acc5e[m
Merge: ac892dd 7577881
Author: Caio Guilherme <131017601+SizedFall@users.noreply.github.com>
Date:   Thu Dec 19 14:43:25 2024 -0300

    Merge pull request #3 from SizedFall/configuracao
    
    Merge da branch configuração com a branch main

