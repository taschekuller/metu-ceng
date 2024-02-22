#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << ((a->remove(40))==false) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(82)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->remove(484))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(383)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(377)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(33)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(206))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(427)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->insert(383))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(438)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->remove(138))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(383)) << std::endl;
std::cout << "Line no:" << 19 << " " << ((a->insert(377))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->insert(377))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->remove(33)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(459)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(438)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(377))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->insert(233)) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(488))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << ((a->insert(82))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(477)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->remove(268))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(297)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(153)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 34 << " " << (b->remove(82)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(488)) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(98)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 40 << " " << ((a->insert(153))==false) << std::endl;
std::cout << "Line no:" << 41 << " " << ((a->remove(165))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->insert(477))==false) << std::endl;
std::cout << "Line no:" << 43 << " " << ((a->remove(103))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(452)) << std::endl;
*b=*b;
std::cout << "Line no:" << 46 << " " << (a->remove(377)) << std::endl;
std::cout << "Line no:" << 47 << " " << (a->insert(334)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 49 << " " << (b->remove(427)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 51 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 52 << " " << ((b->insert(297))==false) << std::endl;
std::cout << "Line no:" << 53 << " " << (a->insert(330)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(297) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(297) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(297) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(297) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << ((a->insert(347))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << ((b->insert(297))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 65 << " " << (a->remove(188)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((b->remove(236))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->insert(379)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 69 << " " << (b->remove(477)) << std::endl;
std::cout << "Line no:" << 70 << " " << (a->insert(5)) << std::endl;
std::cout << "Line no:" << 71 << " " << (a->remove(452)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(246)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->remove(246)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->insert(477))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(153)) << std::endl;
std::cout << "Line no:" << 77 << " " << ((a->insert(153))==false) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(452)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->insert(98))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(93)) << std::endl;
std::cout << "Line no:" << 81 << " " << (a->remove(5)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->remove(477)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->remove(78))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->insert(146)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(327)) << std::endl;
std::cout << "Line no:" << 87 << " " << (a->remove(133)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(451)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(377)) << std::endl;
std::cout << "Line no:" << 90 << " " << ((a->remove(132))==false) << std::endl;
std::cout << "Line no:" << 91 << " " << (b->insert(149)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(149)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(10)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->insert(217)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->remove(80))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (b->insert(365)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 99 << " " << (a->remove(12)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->insert(93))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((b->insert(347))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << ((a->remove(349))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << ((b->insert(327))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->remove(98)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->remove(297)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((b->insert(347))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << ((a->remove(332))==false) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(347)) << std::endl;
std::cout << "Line no:" << 110 << " " << (a->insert(384)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->remove(459)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(427) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(427) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(427) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(427) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 121 << " " << (a->remove(93)) << std::endl;
*b=*b;
std::cout << "Line no:" << 123 << " " << (b->remove(459)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->insert(246)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(133)) << std::endl;
std::cout << "Line no:" << 126 << " " << ((b->remove(429))==false) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((b->remove(275))==false) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->remove(379)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(3)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->insert(120)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(145)) << std::endl;
std::cout << "Line no:" << 133 << " " << ((a->insert(10))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 135 << " " << (a->remove(334)) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(146)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(48)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(145)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(466)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->insert(385)) << std::endl;
std::cout << "Line no:" << 142 << " " << ((b->remove(276))==false) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(365)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(333)) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->insert(323)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->insert(233))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(233))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(233)) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(233)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((b->insert(385))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(142)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((b->remove(46))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << ((a->remove(19))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(230)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(10)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->remove(350))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << ((b->insert(246))==false) << std::endl;
a->printPretty();
*b=*a;
std::cout << "Line no:" << 161 << " " << ((b->insert(347))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->insert(166)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(44)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 165 << " " << ((a->insert(153))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 167 << " " << ((a->remove(398))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(155)) << std::endl;
std::cout << "Line no:" << 169 << " " << (a->remove(120)) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(46)) << std::endl;
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 180 << " " << (b->insert(160)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(475)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(120)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->insert(309)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((b->insert(44))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->remove(217)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(330)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->remove(451)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->remove(475)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((b->insert(427))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->insert(472)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(118)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->insert(402)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->insert(55)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(309)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(159)) << std::endl;
std::cout << "Line no:" << 196 << " " << ((b->insert(427))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(166)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->remove(44)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(323)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(239)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((a->insert(46))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(323)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->insert(78)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((a->insert(425))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(451)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((a->remove(164))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(68)) << std::endl;
std::cout << "Line no:" << 208 << " " << (b->remove(153)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(436)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(120)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->remove(384)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(388)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->remove(439))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << ((b->remove(270))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << ((a->insert(436))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << ((b->remove(57))==false) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->remove(46)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->insert(293)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->insert(36)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((b->insert(155))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->insert(118))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << ((b->insert(293))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 224 << " " << (b->insert(235)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((a->remove(286))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(325)) << std::endl;
std::cout << "Line no:" << 228 << " " << (a->insert(372)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(384) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(384) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(384) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(384) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (a->insert(55)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
