#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(143)) << std::endl;
std::cout << "Line no:" << 6 << " " << ((a->insert(143))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(11)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(11)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(143)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(161)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(264)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->remove(357))==false) << std::endl;
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 16 << " " << (b->insert(297)) << std::endl;
std::cout << "Line no:" << 17 << " " << (b->remove(297)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(237)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(237)) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(129)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 22 << " " << (b->insert(162)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((b->insert(129))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(162)) << std::endl;
*a=*a;
std::cout << "Line no:" << 26 << " " << (a->remove(129)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(71)) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(71))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->remove(311))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->insert(331)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->remove(129)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->remove(71)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 34 << " " << (b->insert(374)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 36 << " " << (a->insert(128)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((b->insert(374))==false) << std::endl;
*a=*a;
a->printPretty();
*a=*a;
std::cout << "Line no:" << 41 << " " << (b->insert(65)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 43 << " " << (b->remove(65)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->insert(128))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << ((a->remove(389))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << ((b->insert(374))==false) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(273)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(128)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->remove(331)) << std::endl;
*a=*a;
*a=*a;
std::cout << "Line no:" << 52 << " " << (b->remove(374)) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->remove(273)) << std::endl;
std::cout << "Line no:" << 54 << " " << (b->insert(267)) << std::endl;
std::cout << "Line no:" << 55 << " " << (b->remove(267)) << std::endl;
std::cout << "Line no:" << 56 << " " << ((a->remove(239))==false) << std::endl;
std::cout << "Line no:" << 57 << " " << (a->insert(329)) << std::endl;
std::cout << "Line no:" << 58 << " " << ((a->insert(329))==false) << std::endl;
std::cout << "Line no:" << 59 << " " << ((a->insert(329))==false) << std::endl;
std::cout << "Line no:" << 60 << " " << (a->remove(329)) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->insert(72)) << std::endl;
*a=*b;
std::cout << "Line no:" << 63 << " " << (a->remove(72)) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(154)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(451)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(62)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 68 << " " << ((a->insert(62))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->remove(62)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(349)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->remove(451)) << std::endl;
std::cout << "Line no:" << 72 << " " << ((a->remove(494))==false) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->remove(72)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(154)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 76 << " " << (b->insert(177)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(366)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 79 << " " << ((b->insert(177))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(467)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(482)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(366)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(144)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(482))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(177)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((a->remove(480))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(342)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->insert(383)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((b->insert(349))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(122)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(349))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(314)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(122)) << std::endl;
std::cout << "Line no:" << 94 << " " << ((a->remove(423))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << ((b->insert(482))==false) << std::endl;
std::cout << "Line no:" << 96 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(123)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((a->remove(385))==false) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 100 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 101 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 102 << " " << a->getFloor(144) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 103 << " " << a->getCeiling(144) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 104 << " " << a->getNext(144) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 105 << " " << a->get(144) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 108 << " " << (b->insert(412)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((b->remove(224))==false) << std::endl;
std::cout << "Line no:" << 110 << " " << ((b->remove(398))==false) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->remove(144)) << std::endl;
std::cout << "Line no:" << 112 << " " << (a->insert(41)) << std::endl;
std::cout << "Line no:" << 113 << " " << (a->insert(220)) << std::endl;
*a=*a;
std::cout << "Line no:" << 115 << " " << (a->remove(220)) << std::endl;
std::cout << "Line no:" << 116 << " " << ((a->insert(180))==false) << std::endl;
std::cout << "Line no:" << 117 << " " << (b->insert(192)) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->insert(326)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 120 << " " << (b->insert(379)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(22)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->remove(180)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((a->insert(41))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(416)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->insert(379))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(144)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((a->remove(446))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->remove(148))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(464)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->insert(467))==false) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(144)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 134 << " " << ((b->insert(416))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->remove(314)) << std::endl;
*a=*b;
std::cout << "Line no:" << 137 << " " << (b->remove(349)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(426)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 140 << " " << (b->remove(426)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->insert(342))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(268)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(383)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(370)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((a->insert(192))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(22))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << ((a->insert(464))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(123)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(326)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(192)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 153 << " " << (b->insert(483)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(470)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->insert(293)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(278)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->remove(416)) << std::endl;
try{std::cout <<"Line no:" << 158 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 159 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 160 << " " << a->getFloor(370) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 161 << " " << a->getCeiling(370) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 162 << " " << a->getNext(370) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 163 << " " << a->get(370) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 166 << " " << ((a->remove(301))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (b->remove(22)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(451)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->remove(268)) << std::endl;
std::cout << "Line no:" << 171 << " " << (a->insert(254)) << std::endl;
std::cout << "Line no:" << 172 << " " << (b->insert(492)) << std::endl;
std::cout << "Line no:" << 173 << " " << ((a->remove(322))==false) << std::endl;
std::cout << "Line no:" << 174 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 175 << " " << (a->insert(95)) << std::endl;
std::cout << "Line no:" << 176 << " " << (a->remove(467)) << std::endl;
std::cout << "Line no:" << 177 << " " << (a->insert(72)) << std::endl;
std::cout << "Line no:" << 178 << " " << ((a->insert(192))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (b->remove(467)) << std::endl;
std::cout << "Line no:" << 180 << " " << ((a->remove(228))==false) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->remove(293)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(231)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 184 << " " << (a->remove(349)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(111)) << std::endl;
std::cout << "Line no:" << 186 << " " << (b->insert(363)) << std::endl;
*a=*b;
b->printPretty();
std::cout << "Line no:" << 189 << " " << (a->remove(464)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(342)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(86)) << std::endl;
std::cout << "Line no:" << 192 << " " << (b->remove(464)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(123)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 195 << " " << (a->insert(373)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->insert(129)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((b->remove(496))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 199 << " " << (b->remove(483)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(342)) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(278)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(412)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((a->insert(412))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(313)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(379)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->insert(4)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((a->remove(430))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << ((b->insert(40))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 212 << " " << ((a->remove(202))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(492)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 215 << " " << ((a->insert(111))==false) << std::endl;
try{std::cout <<"Line no:" << 216 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 217 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 218 << " " << a->getFloor(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 219 << " " << a->getCeiling(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 220 << " " << a->getNext(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 221 << " " << a->get(482) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 224 << " " << ((a->remove(410))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
