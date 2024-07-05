#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(463))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*a;
std::cout << "Line no:" << 8 << " " << (a->insert(38)) << std::endl;
std::cout << "Line no:" << 9 << " " << (b->remove(38)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 11 << " " << (b->insert(172)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->remove(172)) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->remove(59))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(204)) << std::endl;
std::cout << "Line no:" << 15 << " " << ((b->insert(204))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->remove(204)) << std::endl;
a->printPretty();
*a=*a;
std::cout << "Line no:" << 19 << " " << (b->insert(3)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->insert(238)) << std::endl;
std::cout << "Line no:" << 21 << " " << ((a->insert(238))==false) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 23 << " " << ((b->remove(423))==false) << std::endl;
std::cout << "Line no:" << 24 << " " << (a->remove(238)) << std::endl;
std::cout << "Line no:" << 25 << " " << ((b->insert(3))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << ((b->remove(44))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(247)) << std::endl;
*a=*b;
std::cout << "Line no:" << 29 << " " << (a->insert(183)) << std::endl;
std::cout << "Line no:" << 30 << " " << (b->remove(3)) << std::endl;
std::cout << "Line no:" << 31 << " " << (a->insert(397)) << std::endl;
std::cout << "Line no:" << 32 << " " << (b->insert(436)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 34 << " " << (b->remove(436)) << std::endl;
std::cout << "Line no:" << 35 << " " << (a->remove(183)) << std::endl;
std::cout << "Line no:" << 36 << " " << ((a->insert(3))==false) << std::endl;
std::cout << "Line no:" << 37 << " " << (b->insert(260)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(42)) << std::endl;
std::cout << "Line no:" << 39 << " " << (b->insert(39)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->insert(137)) << std::endl;
std::cout << "Line no:" << 41 << " " << ((b->insert(260))==false) << std::endl;
std::cout << "Line no:" << 42 << " " << (a->remove(3)) << std::endl;
std::cout << "Line no:" << 43 << " " << ((b->insert(137))==false) << std::endl;
std::cout << "Line no:" << 44 << " " << (a->insert(30)) << std::endl;
std::cout << "Line no:" << 45 << " " << (b->remove(260)) << std::endl;
try{std::cout <<"Line no:" << 46 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 47 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 48 << " " << a->getFloor(397) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 49 << " " << a->getCeiling(397) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getNext(397) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->get(397) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
b->printPretty();
std::cout << "Line no:" << 55 << " " << ((b->remove(480))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 57 << " " << (b->insert(369)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 59 << " " << (a->insert(270)) << std::endl;
std::cout << "Line no:" << 60 << " " << (b->remove(369)) << std::endl;
*b=*a;
std::cout << "Line no:" << 62 << " " << (a->insert(351)) << std::endl;
std::cout << "Line no:" << 63 << " " << ((a->insert(42))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 65 << " " << (a->insert(54)) << std::endl;
std::cout << "Line no:" << 66 << " " << ((b->remove(118))==false) << std::endl;
std::cout << "Line no:" << 67 << " " << ((b->insert(270))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (b->insert(464)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 70 << " " << (b->remove(42)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((a->insert(42))==false) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(130)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->remove(42)) << std::endl;
std::cout << "Line no:" << 74 << " " << (a->insert(316)) << std::endl;
std::cout << "Line no:" << 75 << " " << ((a->insert(54))==false) << std::endl;
std::cout << "Line no:" << 76 << " " << (b->remove(270)) << std::endl;
std::cout << "Line no:" << 77 << " " << (a->remove(30)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(30)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(316)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->remove(219))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->insert(270))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->remove(377))==false) << std::endl;
std::cout << "Line no:" << 83 << " " << (a->insert(245)) << std::endl;
std::cout << "Line no:" << 84 << " " << (b->insert(321)) << std::endl;
b->printPretty();
*a=*a;
std::cout << "Line no:" << 87 << " " << (b->insert(71)) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(452)) << std::endl;
std::cout << "Line no:" << 89 << " " << (a->remove(397)) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->remove(245)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((a->insert(270))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->remove(71)) << std::endl;
std::cout << "Line no:" << 93 << " " << (b->remove(397)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(433)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 96 << " " << ((a->remove(470))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << ((a->insert(452))==false) << std::endl;
std::cout << "Line no:" << 98 << " " << (b->remove(130)) << std::endl;
std::cout << "Line no:" << 99 << " " << (a->insert(1)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(52)) << std::endl;
*a=*b;
std::cout << "Line no:" << 102 << " " << (a->remove(321)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(145)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->insert(243)) << std::endl;
try{std::cout <<"Line no:" << 105 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 106 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 107 << " " << a->getFloor(145) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getCeiling(145) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getNext(145) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->get(145) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 113 << " " << (a->insert(21)) << std::endl;
std::cout << "Line no:" << 114 << " " << (b->remove(321)) << std::endl;
std::cout << "Line no:" << 115 << " " << (b->remove(464)) << std::endl;
std::cout << "Line no:" << 116 << " " << (a->insert(140)) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->insert(174)) << std::endl;
std::cout << "Line no:" << 118 << " " << (a->remove(21)) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->insert(184)) << std::endl;
std::cout << "Line no:" << 120 << " " << ((a->insert(145))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << (a->remove(184)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(480)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(174)) << std::endl;
std::cout << "Line no:" << 124 << " " << ((b->remove(52))==false) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 127 << " " << ((a->remove(403))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 129 << " " << (b->insert(257)) << std::endl;
std::cout << "Line no:" << 130 << " " << (a->remove(464)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->remove(257)) << std::endl;
std::cout << "Line no:" << 132 << " " << (a->remove(140)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->insert(461)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(312)) << std::endl;
std::cout << "Line no:" << 135 << " " << (b->remove(480)) << std::endl;
*a=*b;
std::cout << "Line no:" << 137 << " " << (a->remove(461)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(461)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->insert(304)) << std::endl;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 142 << " " << (b->insert(439)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->remove(439)) << std::endl;
*b=*b;
std::cout << "Line no:" << 145 << " " << (b->insert(34)) << std::endl;
std::cout << "Line no:" << 146 << " " << (a->insert(268)) << std::endl;
std::cout << "Line no:" << 147 << " " << (b->insert(259)) << std::endl;
std::cout << "Line no:" << 148 << " " << ((b->insert(259))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->insert(480)) << std::endl;
std::cout << "Line no:" << 150 << " " << (a->insert(449)) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->insert(364)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(190)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->remove(34)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->insert(161)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((b->insert(259))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (b->insert(321)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((b->insert(259))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << ((a->remove(365))==false) << std::endl;
std::cout << "Line no:" << 159 << " " << (b->remove(364)) << std::endl;
try{std::cout <<"Line no:" << 160 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 161 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 162 << " " << a->getFloor(304) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 163 << " " << a->getCeiling(304) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 164 << " " << a->getNext(304) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 165 << " " << a->get(304) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 168 << " " << ((b->insert(190))==false) << std::endl;
std::cout << "Line no:" << 169 << " " << ((a->insert(304))==false) << std::endl;
std::cout << "Line no:" << 170 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 171 << " " << (a->insert(101)) << std::endl;
std::cout << "Line no:" << 172 << " " << ((b->insert(321))==false) << std::endl;
std::cout << "Line no:" << 173 << " " << (b->insert(246)) << std::endl;
std::cout << "Line no:" << 174 << " " << ((a->insert(101))==false) << std::endl;
std::cout << "Line no:" << 175 << " " << ((a->insert(268))==false) << std::endl;
std::cout << "Line no:" << 176 << " " << (b->remove(161)) << std::endl;
std::cout << "Line no:" << 177 << " " << (b->remove(259)) << std::endl;
std::cout << "Line no:" << 178 << " " << ((a->insert(304))==false) << std::endl;
std::cout << "Line no:" << 179 << " " << ((a->insert(268))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 181 << " " << (a->insert(429)) << std::endl;
std::cout << "Line no:" << 182 << " " << (a->remove(449)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(319)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(287)) << std::endl;
std::cout << "Line no:" << 185 << " " << (b->insert(153)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 187 << " " << (a->remove(268)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 189 << " " << (a->remove(261)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(304)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(399)) << std::endl;
std::cout << "Line no:" << 192 << " " << (a->remove(287)) << std::endl;
std::cout << "Line no:" << 193 << " " << (b->remove(190)) << std::endl;
std::cout << "Line no:" << 194 << " " << (a->insert(146)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->insert(161)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(319)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(110)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->insert(246))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(425)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((b->insert(153))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << (b->insert(83)) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->remove(246)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((b->remove(364))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->remove(399)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->insert(26)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->insert(292)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(480)) << std::endl;
std::cout << "Line no:" << 208 << " " << ((a->insert(161))==false) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->remove(26)) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->remove(429)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(150)) << std::endl;
std::cout << "Line no:" << 212 << " " << ((b->insert(321))==false) << std::endl;
std::cout << "Line no:" << 213 << " " << (b->remove(150)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->remove(146)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(101)) << std::endl;
*b=*b;
std::cout << "Line no:" << 217 << " " << ((a->insert(110))==false) << std::endl;
try{std::cout <<"Line no:" << 218 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 219 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 220 << " " << a->getFloor(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 221 << " " << a->getCeiling(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 222 << " " << a->getNext(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 223 << " " << a->get(425) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 226 << " " << (a->remove(110)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
