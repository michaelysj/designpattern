designpattern
Factory Method: 
定义一个用于创建对象的接口，让子类决定实例化哪一个类。Factory Method使得一个类的实例化延迟（目的：解耦，手段：虚函数）到子类
用于隔离类对象的使用者和具体类型之间的耦合关系。面对一个经常变化的具体类型，紧耦合关系(new)会导致软件的脆弱。
解决“单个对象”的需求变化。缺点在于要求创建方法/参数相同。
Hello World!
BinarySplitter.split
TextSplitter.split