一、VisualTree简介
==================

我为了方便调试二叉树而写的一个小程序，可以在终端中以图形化的形式输出一个二叉树。<br>
![image](pictures/tree.png)

二、使用方法
============
1、将头文件拷贝到工程目录下; <br>
2、include VisualTree.h InfoH.h; <br>
3、使树节点继承class Info; <br>
3、实例化一个VisualTree对象; <br>
4、调用VisualTree::draw()输出二叉树. <br>

三、使用要求
============
1、二叉树节点所包含的数据类型为int/char/char*; <br>
2、节点的父结点指针和左右孩子指针的访问权限为public; <br>

四、Constructor
===========================
		/*
		 * 构造函数
		 * @params p : 树结点中父指针的偏移量（Pointer to Data Member类型）
		 *         lc: 树结点中左孩子指针偏移量（类型同上）
		 *         rc: 树结点中右孩子指针偏移量（类型同上）
		 *         value: 树结点中数据量的偏移量（类型同上）
		 */
		 template<class TreeNode, class ValueType>
		 VisualTree::VisualTree(TreeNode *TreeNode::*p, TreeNode *TreeNode::*lc,
								TreeNode *TreeNode::*rc, ValueType TreeNode::*value)
		 {
			 // ...
		 }  

