#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(396)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(373)) << std::endl;
std::cout << "Line no:" << 7 << " " << ((a->insert(396))==false) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->remove(373)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 10 << " " << ((a->remove(38))==false) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(366)) << std::endl;
a->printPretty();
a->printPretty();
std::cout << "Line no:" << 14 << " " << (a->remove(366)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->insert(349)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(297)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*a;
std::cout << "Line no:" << 19 << " " << ((a->insert(349))==false) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(396)) << std::endl;
std::cout << "Line no:" << 21 << " " << (b->insert(424)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(336)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(83)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 25 << " " << (a->insert(117)) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->insert(135)) << std::endl;
std::cout << "Line no:" << 27 << " " << ((b->insert(135))==false) << std::endl;
std::cout << "Line no:" << 28 << " " << ((a->insert(83))==false) << std::endl;
std::cout << "Line no:" << 29 << " " << ((a->insert(336))==false) << std::endl;
std::cout << "Line no:" << 30 << " " << ((b->remove(296))==false) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->remove(48))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << ((b->insert(424))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << ((b->insert(424))==false) << std::endl;
std::cout << "Line no:" << 34 << " " << ((a->remove(10))==false) << std::endl;
std::cout << "Line no:" << 35 << " " << ((b->remove(226))==false) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->remove(28))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << ((b->remove(116))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(293)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(83)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 41 << " " << (a->remove(336)) << std::endl;
std::cout << "Line no:" << 42 << " " << ((a->remove(133))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 44 << " " << ((b->remove(73))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->insert(394)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 47 << " " << (a->remove(293)) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->remove(349)) << std::endl;
std::cout << "Line no:" << 49 << " " << ((b->remove(29))==false) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(100)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(4)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 53 << " " << (b->remove(135)) << std::endl;
std::cout << "Line no:" << 54 << " " << (b->insert(85)) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(4) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(4) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(4) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(4) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << (b->remove(85)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->remove(117)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(425)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->insert(100))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << ((b->remove(22))==false) << std::endl;
std::cout << "Line no:" << 69 << " " << (a->insert(288)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 71 << " " << ((b->insert(424))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (a->insert(415)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(46)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((a->remove(202))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(394)) << std::endl;
std::cout << "Line no:" << 76 << " " << ((a->remove(122))==false) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->insert(54)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(424)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(415)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(286)) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->insert(336)) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(74)) << std::endl;
std::cout << "Line no:" << 83 << " " << (b->insert(131)) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(336))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (b->remove(131)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(126)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(372)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(372)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(288)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(367)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 92 << " " << (b->remove(336)) << std::endl;
std::cout << "Line no:" << 93 << " " << ((a->remove(124))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 95 << " " << (a->remove(54)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 97 << " " << (b->remove(46)) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->insert(84)) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 101 << " " << (b->insert(26)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->insert(67)) << std::endl;
std::cout << "Line no:" << 103 << " " << (b->remove(54)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(37)) << std::endl;
std::cout << "Line no:" << 105 << " " << (a->remove(286)) << std::endl;
std::cout << "Line no:" << 106 << " " << ((a->remove(291))==false) << std::endl;
std::cout << "Line no:" << 107 << " " << (b->insert(367)) << std::endl;
std::cout << "Line no:" << 108 << " " << (a->insert(21)) << std::endl;
std::cout << "Line no:" << 109 << " " << ((a->insert(100))==false) << std::endl;
std::cout << "Line no:" << 110 << " " << ((b->insert(286))==false) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->remove(367)) << std::endl;
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(74) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(74) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(74) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(74) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (a->remove(46)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->remove(84)) << std::endl;
std::cout << "Line no:" << 122 << " " << ((a->remove(205))==false) << std::endl;
std::cout << "Line no:" << 123 << " " << (b->remove(26)) << std::endl;
std::cout << "Line no:" << 124 << " " << (b->remove(74)) << std::endl;
std::cout << "Line no:" << 125 << " " << (b->insert(183)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->remove(367)) << std::endl;
std::cout << "Line no:" << 127 << " " << (a->remove(297)) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(183)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 130 << " " << (b->remove(37)) << std::endl;
std::cout << "Line no:" << 131 << " " << ((a->insert(74))==false) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->remove(4)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(161)) << std::endl;
std::cout << "Line no:" << 134 << " " << ((b->insert(297))==false) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->insert(369)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((b->remove(390))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->remove(367)) << std::endl;
std::cout << "Line no:" << 138 << " " << ((a->remove(157))==false) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(484)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((b->insert(369))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->remove(340))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 143 << " " << ((a->insert(21))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (b->remove(286)) << std::endl;
std::cout << "Line no:" << 145 << " " << ((a->insert(67))==false) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(129)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 148 << " " << (b->insert(6)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(255)) << std::endl;
std::cout << "Line no:" << 150 << " " << (b->remove(369)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(394)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(345)) << std::endl;
std::cout << "Line no:" << 153 << " " << (a->remove(74)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(100)) << std::endl;
std::cout << "Line no:" << 155 << " " << (a->remove(4)) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->remove(345)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->remove(294))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(83)) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(129)) << std::endl;
std::cout << "Line no:" << 160 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 161 << " " << (b->insert(362)) << std::endl;
std::cout << "Line no:" << 162 << " " << (a->remove(21)) << std::endl;
std::cout << "Line no:" << 163 << " " << ((b->remove(150))==false) << std::endl;
std::cout << "Line no:" << 164 << " " << ((a->remove(82))==false) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(92)) << std::endl;
std::cout << "Line no:" << 166 << " " << ((b->insert(362))==false) << std::endl;
std::cout << "Line no:" << 167 << " " << (a->remove(255)) << std::endl;
std::cout << "Line no:" << 168 << " " << (a->remove(100)) << std::endl;
std::cout << "Line no:" << 169 << " " << ((b->remove(473))==false) << std::endl;
try{std::cout <<"Line no:" << 170 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getFloor(15) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getCeiling(15) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getNext(15) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->get(15) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 178 << " " << (a->remove(15)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 180 << " " << (b->remove(362)) << std::endl;
std::cout << "Line no:" << 181 << " " << ((b->insert(83))==false) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->remove(161)) << std::endl;
std::cout << "Line no:" << 183 << " " << (a->remove(92)) << std::endl;
std::cout << "Line no:" << 184 << " " << (b->insert(326)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(295)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(218)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->insert(287)) << std::endl;
std::cout << "Line no:" << 188 << " " << (a->insert(112)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(270)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((a->insert(112))==false) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(70)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 193 << " " << (a->remove(287)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->remove(295)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->insert(438)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(83)) << std::endl;
std::cout << "Line no:" << 197 << " " << ((b->insert(326))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 199 << " " << (b->remove(70)) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->insert(347)) << std::endl;
std::cout << "Line no:" << 201 << " " << (a->insert(316)) << std::endl;
std::cout << "Line no:" << 202 << " " << ((a->insert(112))==false) << std::endl;
std::cout << "Line no:" << 203 << " " << (a->insert(8)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(99)) << std::endl;
std::cout << "Line no:" << 205 << " " << ((b->insert(484))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->insert(258)) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->insert(86)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(79)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((b->remove(271))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << ((a->insert(218))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 212 << " " << (b->remove(297)) << std::endl;
std::cout << "Line no:" << 213 << " " << ((b->remove(110))==false) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(160)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->insert(368)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(79)) << std::endl;
std::cout << "Line no:" << 217 << " " << ((a->remove(232))==false) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(307)) << std::endl;
std::cout << "Line no:" << 219 << " " << (a->remove(8)) << std::endl;
std::cout << "Line no:" << 220 << " " << (b->remove(99)) << std::endl;
std::cout << "Line no:" << 221 << " " << ((b->insert(438))==false) << std::endl;
std::cout << "Line no:" << 222 << " " << (b->insert(76)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(144)) << std::endl;
std::cout << "Line no:" << 224 << " " << ((b->remove(344))==false) << std::endl;
std::cout << "Line no:" << 225 << " " << ((a->insert(258))==false) << std::endl;
std::cout << "Line no:" << 226 << " " << (b->remove(86)) << std::endl;
*b=*a;
try{std::cout <<"Line no:" << 228 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getFloor(316) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getCeiling(316) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getNext(316) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->get(316) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
