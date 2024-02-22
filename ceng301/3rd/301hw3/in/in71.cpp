#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
a->printPretty();
std::cout << "Line no:" << 6 << " " << ((a->remove(374))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 9 << " " << (b->insert(190)) << std::endl;
std::cout << "Line no:" << 10 << " " << (b->insert(371)) << std::endl;
std::cout << "Line no:" << 11 << " " << (b->insert(336)) << std::endl;
std::cout << "Line no:" << 12 << " " << (b->insert(460)) << std::endl;
b->printPretty();
*a=*a;
std::cout << "Line no:" << 15 << " " << ((a->insert(190))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << ((b->insert(190))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(371)) << std::endl;
*b=*a;
std::cout << "Line no:" << 19 << " " << (b->insert(396)) << std::endl;
std::cout << "Line no:" << 20 << " " << (b->insert(275)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(231)) << std::endl;
std::cout << "Line no:" << 22 << " " << (b->insert(320)) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(11)) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->insert(375)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((b->remove(109))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(211)) << std::endl;
std::cout << "Line no:" << 27 << " " << (b->insert(360)) << std::endl;
std::cout << "Line no:" << 28 << " " << (a->insert(430)) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->remove(447))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(460)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->insert(211))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(65)) << std::endl;
std::cout << "Line no:" << 33 << " " << (a->remove(190)) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->remove(240))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->remove(11)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->remove(65)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->insert(60)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((b->remove(338))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 40 << " " << (b->insert(179)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->remove(190)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 43 << " " << (a->remove(375)) << std::endl;
std::cout << "Line no:" << 44 << " " << (b->insert(311)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->insert(218)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 47 << " " << (b->remove(320)) << std::endl;
std::cout << "Line no:" << 48 << " " << ((a->insert(430))==false) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 50 << " " << (b->insert(349)) << std::endl;
*a=*b;
std::cout << "Line no:" << 52 << " " << (b->remove(336)) << std::endl;
std::cout << "Line no:" << 53 << " " << ((b->remove(5))==false) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(275) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(275) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(275) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(275) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 62 << " " << (a->remove(460)) << std::endl;
std::cout << "Line no:" << 63 << " " << (a->insert(347)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 66 << " " << (a->insert(67)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->remove(162))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(405)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 71 << " " << (b->insert(294)) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(76)) << std::endl;
std::cout << "Line no:" << 73 << " " << (b->insert(387)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(434)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(434)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 77 << " " << (b->insert(218)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 79 << " " << ((b->remove(354))==false) << std::endl;
std::cout << "Line no:" << 80 << " " << (b->insert(104)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(349)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(183)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->remove(311)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(360)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(275)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->remove(405)) << std::endl;
std::cout << "Line no:" << 88 << " " << ((b->remove(223))==false) << std::endl;
std::cout << "Line no:" << 89 << " " << ((b->remove(437))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 91 << " " << (b->insert(101)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(17)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(387)) << std::endl;
std::cout << "Line no:" << 94 << " " << ((a->remove(124))==false) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->insert(359)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 97 << " " << ((a->remove(433))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(444)) << std::endl;
std::cout << "Line no:" << 99 << " " << ((b->remove(48))==false) << std::endl;
std::cout << "Line no:" << 100 << " " << ((b->insert(294))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->remove(275)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(336)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(496)) << std::endl;
std::cout << "Line no:" << 104 << " " << ((b->insert(179))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << ((b->insert(359))==false) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(368)) << std::endl;
std::cout << "Line no:" << 107 << " " << ((b->insert(396))==false) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(120)) << std::endl;
*a=*a;
std::cout << "Line no:" << 110 << " " << (a->insert(345)) << std::endl;
std::cout << "Line no:" << 111 << " " << (a->insert(153)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (b->insert(316)) << std::endl;
std::cout << "Line no:" << 121 << " " << ((a->insert(247))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 123 << " " << (b->insert(311)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 126 << " " << (a->remove(12)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->insert(349))==false) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 131 << " " << (a->remove(347)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 133 << " " << (b->remove(311)) << std::endl;
*a=*a;
std::cout << "Line no:" << 135 << " " << ((b->insert(135))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->insert(500)) << std::endl;
std::cout << "Line no:" << 137 << " " << ((a->remove(372))==false) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(130)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(213)) << std::endl;
std::cout << "Line no:" << 140 << " " << (b->insert(75)) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->insert(260)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 143 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(316)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((b->insert(17))==false) << std::endl;
a->printPretty();
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 149 << " " << ((b->insert(104))==false) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(213)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(369)) << std::endl;
std::cout << "Line no:" << 152 << " " << ((b->remove(51))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 154 << " " << (a->insert(462)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->remove(101)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(85)) << std::endl;
std::cout << "Line no:" << 157 << " " << (b->insert(276)) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->remove(496)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->insert(60)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 161 << " " << (a->insert(89)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->insert(236)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(476)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 166 << " " << ((b->insert(183))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->insert(474)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->remove(260)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->remove(179)) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(44) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (a->insert(133)) << std::endl;
std::cout << "Line no:" << 179 << " " << (a->insert(281)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 181 << " " << (b->insert(283)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(104)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->remove(396)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->remove(153)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(103)) << std::endl;
std::cout << "Line no:" << 186 << " " << ((a->remove(385))==false) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(440)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((b->insert(75))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(495)) << std::endl;
*a=*a;
std::cout << "Line no:" << 191 << " " << (a->insert(452)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(452)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(17)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(463)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(199)) << std::endl;
std::cout << "Line no:" << 196 << " " << ((b->remove(182))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->remove(460)) << std::endl;
std::cout << "Line no:" << 198 << " " << (a->insert(294)) << std::endl;
std::cout << "Line no:" << 199 << " " << (b->remove(34)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 201 << " " << (b->insert(5)) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->remove(89)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->insert(368))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(432)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 206 << " " << ((b->insert(135))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(444)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->insert(44))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << ((a->insert(463))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->insert(76))==false) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(463)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((a->remove(327))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(60)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((a->insert(462))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(181)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 217 << " " << ((a->remove(309))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->remove(476)) << std::endl;
std::cout << "Line no:" << 219 << " " << ((b->remove(29))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->insert(50)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((a->remove(96))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << ((a->remove(464))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 224 << " " << (b->insert(80)) << std::endl;
std::cout << "Line no:" << 225 << " " << (b->remove(120)) << std::endl;
*a=*a;
*b=*b;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(474) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(474) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(474) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(474) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 236 << " " << (b->insert(198)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
