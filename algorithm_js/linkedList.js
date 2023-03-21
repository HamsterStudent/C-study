class Node {
  constructor(data, nextNode = null) {
    this.data;
    this.nextNode;
  }
}

class LinkedList {
  //   SLL_CreateNode(data) {}
  //   SLL_DestroyNode() {}
  SLL_AppendNode(data) {
    const node = new Node(data);
    let current;

    if (!this.head) {
      this.head = node;
    } else {
      current = this.head;
      while (current.nextNode) {
        current = current.nextNode;
      }
      current.nextNode = node;
    }

    this.size++;
  }
  SLL_InsertAfter(data, index) {
    if (index == 0) {
      this.head = new Node(data);
    } else {
      const node = new Node(data);
      let current, previous;

      let count = 0;

      while (count < index) {
        previous = current;
        count++;
        current = current.nextNode;
      }
      node.next = current;
      previous.nextNode = node;

      this.size++;
    }
  }
  SLL_InsertNewHead(data) {
    const node = new Node(data);
    this.head = node;
    this.size++;
  }
  SLL_RemoveNode(index) {
    let count = 0;
    let current = this.head;
    let previous;

    if (index === 0) {
      this.head = current.nextNode;
    } else {
      while (count < index) {
        count++;
        previous = current;
        current = current.nextNode;
      }
      previous.next = current;
    }

    this.size--;
  }
  SLL_GetNodeAt() {}
  SLL_NodeCount() {}
}

const linkedList = new LinkedList();

linkedList.SLL_AppendNode(100);
linkedList.SLL_AppendNode(200);
linkedList.SLL_AppendNode(300);
linkedList.SLL_AppendNode(400);
linkedList.SLL_InsertAfter(500, 3);

// linkedList.SLL_RemoveNode(2);

//linkedList.clearList();

console.log(linkedList);
