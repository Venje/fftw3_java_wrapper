static {
        // Узнаём путь откуда было запущено приложение
        String pathToApp = new File(".").getAbsolutePath().replace(".", "") + "nativeLibs/";

        // Подгружаем библиотеку соответствующую ОС
        if (System.getProperty("os.name").contains("Windows")) {
            pathToApp += "win/";

            if (System.getProperty("os.arch").contains("64")) {
                pathToApp += "x64/";
            } else {
                pathToApp += "x32/";
            }

            System.load(pathToApp + "fftwlib.dll");
        } else {
            System.load(pathToApp + "linux/libfftw.so");
        }
    }