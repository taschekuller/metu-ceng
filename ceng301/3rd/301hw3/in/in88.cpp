#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(351)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(444)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(451)) << std::endl;
std::cout << "Line no:" << 9 << " " << ((a->insert(444))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->insert(422)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(451))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(110)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(207))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->remove(422)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->insert(444))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->remove(15))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(424)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->remove(444)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(351)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->insert(424))==false) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(451))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->remove(451)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->remove(263))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 26 << " " << (a->insert(203)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 28 << " " << (a->remove(203)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(256)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->insert(401)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(224)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 34 << " " << (a->remove(401)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->remove(424)) << std::endl;
std::cout << "Line no:" << 36 << " " << (a->insert(485)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 39 << " " << (a->remove(224)) << std::endl;
std::cout << "Line no:" << 40 << " " << (a->remove(485)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(278)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->remove(180)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 44 << " " << (b->insert(482)) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(256)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(328)) << std::endl;
std::cout << "Line no:" << 47 << " " << (b->insert(367)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(328)) << std::endl;
std::cout << "Line no:" << 49 << " " << (a->insert(393)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(66)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(40)) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->insert(429)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 54 << " " << ((a->insert(278))==false) << std::endl;
std::cout << "Line no:" << 55 << " " << (b->insert(440)) << std::endl;
try{std::cout <<"Line no:" << 56 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getFloor(40) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getCeiling(40) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getNext(40) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->get(40) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 63 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 65 << " " << (a->insert(295)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 67 << " " << ((b->insert(440))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(129)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(100)) << std::endl;
std::cout << "Line no:" << 70 << " " << (b->insert(393)) << std::endl;
std::cout << "Line no:" << 71 << " " << (b->insert(257)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(50)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 75 << " " << (a->remove(278)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(190)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 78 << " " << (b->insert(87)) << std::endl;
std::cout << "Line no:" << 79 << " " << ((b->insert(50))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 81 << " " << (a->insert(226)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(180)) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(156)) << std::endl;
a->printPretty();
*b=*a;
std::cout << "Line no:" << 86 << " " << ((a->insert(66))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(60)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->remove(295)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->remove(440)) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(373)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(129)) << std::endl;
std::cout << "Line no:" << 92 << " " << ((b->remove(155))==false) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->insert(373)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(338)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(367)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->remove(485))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(156)) << std::endl;
std::cout << "Line no:" << 98 << " " << ((b->insert(180))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(44)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(316)) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(360)) << std::endl;
std::cout << "Line no:" << 102 << " " << ((a->insert(100))==false) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(241)) << std::endl;
std::cout << "Line no:" << 104 << " " << ((a->insert(66))==false) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->remove(393)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 107 << " " << (a->remove(87)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(161)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(17)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->remove(257)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 112 << " " << (a->remove(241)) << std::endl;
std::cout << "Line no:" << 113 << " " << (a->remove(40)) << std::endl;
try{std::cout <<"Line no:" << 114 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getFloor(429) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getCeiling(429) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getNext(429) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->get(429) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 121 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 122 << " " << (b->insert(432)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->remove(421))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(315)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((b->remove(106))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(232)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->insert(322)) << std::endl;
std::cout << "Line no:" << 128 << " " << (a->insert(469)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(108)) << std::endl;
std::cout << "Line no:" << 130 << " " << ((a->remove(288))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 132 << " " << ((a->remove(394))==false) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->remove(429)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(12)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((b->remove(151))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(228)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->insert(177)) << std::endl;
std::cout << "Line no:" << 139 << " " << ((a->insert(469))==false) << std::endl;
std::cout << "Line no:" << 140 << " " << (a->remove(469)) << std::endl;
std::cout << "Line no:" << 141 << " " << (b->remove(50)) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->remove(180)) << std::endl;
std::cout << "Line no:" << 143 << " " << (a->insert(24)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->remove(316)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->insert(112)) << std::endl;
std::cout << "Line no:" << 146 << " " << ((b->remove(234))==false) << std::endl;
std::cout << "Line no:" << 147 << " " << ((b->insert(226))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << ((b->remove(378))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 150 << " " << ((a->remove(31))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 152 << " " << (b->remove(17)) << std::endl;
std::cout << "Line no:" << 153 << " " << ((a->insert(180))==false) << std::endl;
std::cout << "Line no:" << 154 << " " << ((b->insert(226))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->remove(429)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(218)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->remove(440)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->remove(226)) << std::endl;
std::cout << "Line no:" << 159 << " " << ((b->remove(120))==false) << std::endl;
std::cout << "Line no:" << 160 << " " << (b->insert(318)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(304)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(393)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->insert(381)) << std::endl;
std::cout << "Line no:" << 164 << " " << ((b->insert(60))==false) << std::endl;
a->printPretty();
*b=*a;
std::cout << "Line no:" << 167 << " " << (a->remove(338)) << std::endl;
std::cout << "Line no:" << 168 << " " << (b->insert(36)) << std::endl;
std::cout << "Line no:" << 169 << " " << (b->insert(94)) << std::endl;
std::cout << "Line no:" << 170 << " " << (b->insert(46)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(190) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(190) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(190) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(190) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << (b->insert(351)) << std::endl;
std::cout << "Line no:" << 181 << " " << (b->insert(17)) << std::endl;
*a=*b;
std::cout << "Line no:" << 183 << " " << (b->insert(220)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->remove(190)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(236)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->remove(44)) << std::endl;
std::cout << "Line no:" << 187 << " " << (b->insert(215)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 189 << " " << ((a->remove(465))==false) << std::endl;
std::cout << "Line no:" << 190 << " " << ((b->insert(268))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << ((a->insert(224))==false) << std::endl;
std::cout << "Line no:" << 192 << " " << ((a->insert(360))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(100)) << std::endl;
std::cout << "Line no:" << 194 << " " << ((b->remove(1))==false) << std::endl;
b->printPretty();
b->printPretty();
*b=*b;
std::cout << "Line no:" << 198 << " " << (a->insert(460)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(233)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(26)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->remove(17)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((b->insert(12))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(488)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(83)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(351)) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->insert(148)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->remove(34))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (b->remove(83)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(363)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->remove(220)) << std::endl;
std::cout << "Line no:" << 212 << " " << (b->remove(12)) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(180)) << std::endl;
std::cout << "Line no:" << 214 << " " << (b->remove(24)) << std::endl;
std::cout << "Line no:" << 215 << " " << ((b->remove(38))==false) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(431)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->remove(381)) << std::endl;
std::cout << "Line no:" << 218 << " " << ((b->insert(360))==false) << std::endl;
std::cout << "Line no:" << 219 << " " << ((a->remove(203))==false) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->insert(248)) << std::endl;
*b=*a;
std::cout << "Line no:" << 222 << " " << (b->insert(79)) << std::endl;
std::cout << "Line no:" << 223 << " " << (b->insert(261)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(492)) << std::endl;
std::cout << "Line no:" << 225 << " " << ((b->insert(482))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->remove(315)) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->remove(338)) << std::endl;
std::cout << "Line no:" << 229 << " " << ((a->remove(146))==false) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(360) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(360) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(360) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(360) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (a->insert(115)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
