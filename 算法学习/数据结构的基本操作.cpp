//���������ܣ����͵����Ե����ṹ��
void traverse(int[] arr) {
    for (int i = 0; i < arr.length; i++) {
        // �������� arr[i]
    }
}

//���������ܣ���ߵ����͵ݹ�ṹ��
/* �����ĵ�����ڵ� */
class ListNode {
    int val;
    ListNode next;
}

void traverse(ListNode head) {
    for (ListNode p = head; p != null; p = p.next) {
        // �������� p.val
    }
}

void traverse(ListNode head) {
    // �ݹ���� head.val
    traverse(head.next)
}

//������������ܣ����͵ķ����Եݹ�����ṹ��
/* �����Ķ������ڵ� */
class TreeNode {
    int val;
    TreeNode left, right;
}

void traverse(TreeNode root) {
    traverse(root.left)
    traverse(root.right)
}

//��������ܿ�����չΪ N �����ı�����ܣ�
/* ������ N �����ڵ� */
class TreeNode {
    int val;
    TreeNode[] children;
}

void traverse(TreeNode root) {
    for (TreeNode child : root.children)
        traverse(child)
}

//