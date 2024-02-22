#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(134)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(373)) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->remove(499))==false) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(134)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(373)) << std::endl;
std::cout << "Line no:" << 10 << " " << ((a->remove(265))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 12 << " " << (a->insert(202)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(202)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 15 << " " << (a->insert(475)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(475)) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(73)) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->insert(73))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(73))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(112)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->remove(480))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(73)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(112)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((a->remove(98))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->remove(209)) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->insert(295)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->remove(295)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(64)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->insert(13))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 34 << " " << (b->insert(128)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(31)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->remove(374))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << ((b->insert(31))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->remove(13)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(426)) << std::endl;
std::cout << "Line no:" << 40 << " " << ((b->remove(152))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->remove(426)) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->insert(303)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->insert(64))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(196)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(471)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 47 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 48 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 49 << " " << a->getFloor(64) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getCeiling(64) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getNext(64) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->get(64) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 55 << " " << ((a->remove(5))==false) << std::endl;
std::cout << "Line no:" << 56 << " " << (a->remove(64)) << std::endl;
std::cout << "Line no:" << 57 << " " << ((a->insert(303))==false) << std::endl;
std::cout << "Line no:" << 58 << " " << (b->insert(54)) << std::endl;
std::cout << "Line no:" << 59 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 60 << " " << (b->remove(196)) << std::endl;
std::cout << "Line no:" << 61 << " " << (a->insert(264)) << std::endl;
std::cout << "Line no:" << 62 << " " << (b->remove(54)) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(2)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(264)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(216)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(445)) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(218)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 70 << " " << ((b->insert(218))==false) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(437)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(332)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(431)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->remove(225))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(216)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 77 << " " << (b->insert(480)) << std::endl;
std::cout << "Line no:" << 78 << " " << (a->insert(446)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->remove(55))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->remove(446)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->insert(190)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((a->remove(278))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 85 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->remove(32))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << ((b->insert(2))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(218)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(480)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->remove(168)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->remove(318))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(76)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(269)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 95 << " " << (a->remove(303)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((a->remove(154))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->insert(463)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 99 << " " << (b->remove(80)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->remove(217)) << std::endl;
std::cout << "Line no:" << 101 << " " << ((b->insert(332))==false) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(190)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(128)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(463)) << std::endl;
try{std::cout <<"Line no:" << 105 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getFloor(358) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getCeiling(358) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getNext(358) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->get(358) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 113 << " " << ((a->remove(148))==false) << std::endl;
std::cout << "Line no:" << 114 << " " << (a->insert(356)) << std::endl;
std::cout << "Line no:" << 115 << " " << (b->remove(437)) << std::endl;
std::cout << "Line no:" << 116 << " " << (b->remove(332)) << std::endl;
std::cout << "Line no:" << 117 << " " << (b->remove(31)) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->insert(347)) << std::endl;
std::cout << "Line no:" << 119 << " " << ((b->insert(2))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 121 << " " << (b->insert(284)) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(300)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((a->remove(326))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(342)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(445)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(342)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(431)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->remove(358)) << std::endl;
std::cout << "Line no:" << 129 << " " << (a->remove(76)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((b->remove(479))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 132 << " " << ((b->remove(354))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 134 << " " << ((a->insert(356))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << ((a->insert(300))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->insert(356))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->insert(356))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->remove(300)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->remove(347)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->remove(269)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(386)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 143 << " " << ((a->insert(386))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << ((a->insert(471))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(245)) << std::endl;
*b=*b;
std::cout << "Line no:" << 147 << " " << (a->insert(372)) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->remove(2)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(471)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->remove(356)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(315)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((a->insert(372))==false) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->insert(68)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(306)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((b->insert(284))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(353)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->insert(372))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->insert(284))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((a->insert(372))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << ((b->insert(315))==false) << std::endl;
b->printPretty();
try{std::cout <<"Line no:" << 163 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->getFloor(372) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getCeiling(372) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getNext(372) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->get(372) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 172 << " " << (b->insert(163)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 174 << " " << (a->remove(372)) << std::endl;
std::cout << "Line no:" << 175 << " " << ((a->insert(353))==false) << std::endl;
std::cout << "Line no:" << 176 << " " << (a->remove(306)) << std::endl;
*a=*b;
std::cout << "Line no:" << 178 << " " << ((a->remove(14))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->remove(315)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(62)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->remove(281))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->insert(282)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(265)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(358)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(271)) << std::endl;
*a=*a;
std::cout << "Line no:" << 187 << " " << (a->remove(271)) << std::endl;
*a=*a;
std::cout << "Line no:" << 189 << " " << ((b->insert(245))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->insert(8)) << std::endl;
std::cout << "Line no:" << 191 << " " << (a->insert(120)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(120)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(163)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(8)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->insert(394)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(315)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((a->insert(326))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->insert(479)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(423)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->remove(32))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 203 << " " << ((a->insert(245))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (a->insert(257)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(257)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((a->remove(235))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(326)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((b->insert(479))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(245)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->remove(326)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->insert(167)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(62)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(405)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((b->remove(450))==false) << std::endl;
a->printPretty();
*a=*b;
std::cout << "Line no:" << 217 << " " << (a->insert(442)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(85)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(490)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(427)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(185)) << std::endl;
try{std::cout <<"Line no:" << 222 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getFloor(163) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getCeiling(163) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getNext(163) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->get(163) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 230 << " " << ((b->remove(399))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
