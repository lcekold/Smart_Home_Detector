# Smart_Home_Detector
使用QT自制智能家居系统助手，使用多线程进行制作，避免了UI的卡顿

# 项目演示

![](https://cdn.jsdelivr.net/gh/lcekold/blogimage@main/Network/zhinengjiajuxitong.png)

# 代码解释

1. 使用多线程处理串口操作，避免影响UI界面的显示

2. 定时触发串口读取与发送，避免串口数据的不完整接收和发送，导致数据不连续

3. 将接收到的数据进行分割，然后从中提取出温度、湿度和光照度的数据，进行显示

4. 利用继承的方式简化UI操作，创建多个UI文件，同时使用信号与槽的方式让各个类之间实现数据传送和功能执行