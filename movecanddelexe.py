import os
import shutil

# 脚本功能：
# 1. 遍历当前文件夹，将所有 .c 文件移动到 src 目录下
# 2. 遍历当前文件夹，删除所有 .exe 文件

# 获取当前文件夹路径
current_directory = os.getcwd()

# 创建src目录（如果不存在）
src_directory = os.path.join(current_directory, 'src')
if not os.path.exists(src_directory):
    os.makedirs(src_directory)

# 遍历当前文件夹，处理py和exe文件
for file_name in os.listdir(current_directory):
    file_path = os.path.join(current_directory, file_name)
    
    # 如果是.c文件，移动到src目录
    if file_name.endswith('.c') and os.path.isfile(file_path):
        shutil.move(file_path, os.path.join(src_directory, file_name))
    
    # 如果是.exe文件，删除它
    elif file_name.endswith('.exe') and os.path.isfile(file_path):
        os.remove(file_path)

print("操作完成：所有 .c 文件已移动到 src 目录下，所有 .exe 文件已删除。")
