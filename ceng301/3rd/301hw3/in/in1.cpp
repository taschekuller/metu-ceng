#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(433))==false) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(73)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->insert(253)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(232)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(253)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(232)) << std::endl;
std::cout << "Line no:" << 11 << " " << ((a->insert(73))==false) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(301)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->remove(73)) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 16 << " " << ((a->remove(136))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->remove(301)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(79)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(438)) << std::endl;
*b=*b;
std::cout << "Line no:" << 21 << " " << (a->insert(298)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(298)) << std::endl;
std::cout << "Line no:" << 23 << " " << (b->insert(89)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((b->insert(89))==false) << std::endl;
std::cout << "Line no:" << 25 << " " << ((b->remove(365))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << (b->remove(89)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 28 << " " << (b->insert(267)) << std::endl;
*a=*b;
std::cout << "Line no:" << 30 << " " << (b->remove(267)) << std::endl;
std::cout << "Line no:" << 31 << " " << (b->insert(216)) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(454)) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->remove(216)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 35 << " " << (a->remove(454)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 37 << " " << (a->insert(128)) << std::endl;
std::cout << "Line no:" << 38 << " " << (a->insert(333)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 40 << " " << (b->insert(308)) << std::endl;
std::cout << "Line no:" << 41 << " " << (a->insert(414)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->remove(308)) << std::endl;
std::cout << "Line no:" << 43 << " " << (a->remove(128)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 45 << " " << ((a->insert(414))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(380)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((b->remove(138))==false) << std::endl;
std::cout << "Line no:" << 48 << " " << (a->insert(169)) << std::endl;
try{std::cout <<"Line no:" << 49 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 50 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 51 << " " << a->getFloor(169) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 52 << " " << a->getCeiling(169) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 53 << " " << a->getNext(169) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 54 << " " << a->get(169) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 57 << " " << (a->insert(474)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 59 << " " << ((a->insert(169))==false) << std::endl;
std::cout << "Line no:" << 60 << " " << ((a->remove(401))==false) << std::endl;
std::cout << "Line no:" << 61 << " " << (b->insert(229)) << std::endl;
std::cout << "Line no:" << 62 << " " << ((a->remove(325))==false) << std::endl;
std::cout << "Line no:" << 63 << " " << (b->insert(279)) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(342)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->remove(279)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->insert(351)) << std::endl;
std::cout << "Line no:" << 67 << " " << ((a->insert(333))==false) << std::endl;
std::cout << "Line no:" << 68 << " " << (a->insert(72)) << std::endl;
std::cout << "Line no:" << 69 << " " << (b->insert(42)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 71 << " " << (a->insert(13)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(40)) << std::endl;
std::cout << "Line no:" << 73 << " " << ((b->remove(460))==false) << std::endl;
std::cout << "Line no:" << 74 << " " << (b->insert(18)) << std::endl;
std::cout << "Line no:" << 75 << " " << (a->remove(380)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 77 << " " << (b->remove(40)) << std::endl;
std::cout << "Line no:" << 78 << " " << (b->remove(229)) << std::endl;
std::cout << "Line no:" << 79 << " " << (a->remove(13)) << std::endl;
std::cout << "Line no:" << 80 << " " << (a->insert(453)) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->insert(414))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (a->insert(152)) << std::endl;
*a=*b;
std::cout << "Line no:" << 84 << " " << (b->insert(41)) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->remove(351)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->remove(42)) << std::endl;
std::cout << "Line no:" << 87 << " " << ((a->insert(18))==false) << std::endl;
std::cout << "Line no:" << 88 << " " << (a->insert(487)) << std::endl;
std::cout << "Line no:" << 89 << " " << (b->insert(343)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 91 << " " << (a->insert(273)) << std::endl;
std::cout << "Line no:" << 92 << " " << (a->insert(317)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->remove(18)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 95 << " " << ((a->insert(487))==false) << std::endl;
*a=*b;
a->printPretty();
std::cout << "Line no:" << 98 << " " << ((a->insert(351))==false) << std::endl;
std::cout << "Line no:" << 99 << " " << (b->remove(18)) << std::endl;
std::cout << "Line no:" << 100 << " " << ((a->remove(496))==false) << std::endl;
std::cout << "Line no:" << 101 << " " << (a->insert(118)) << std::endl;
std::cout << "Line no:" << 102 << " " << (a->remove(343)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->insert(205)) << std::endl;
std::cout << "Line no:" << 104 << " " << (a->remove(205)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->remove(41)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->remove(351)) << std::endl;
try{std::cout <<"Line no:" << 107 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 108 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 109 << " " << a->getFloor(41) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 110 << " " << a->getCeiling(41) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 111 << " " << a->getNext(41) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 112 << " " << a->get(41) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 115 << " " << (a->insert(171)) << std::endl;
std::cout << "Line no:" << 116 << " " << ((b->insert(343))==false) << std::endl;
std::cout << "Line no:" << 117 << " " << (a->insert(152)) << std::endl;
std::cout << "Line no:" << 118 << " " << (b->remove(351)) << std::endl;
std::cout << "Line no:" << 119 << " " << (a->remove(118)) << std::endl;
std::cout << "Line no:" << 120 << " " << ((a->insert(171))==false) << std::endl;
std::cout << "Line no:" << 121 << " " << ((b->remove(39))==false) << std::endl;
std::cout << "Line no:" << 122 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 123 << " " << (a->remove(41)) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->insert(462)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(209)) << std::endl;
std::cout << "Line no:" << 126 << " " << (b->insert(269)) << std::endl;
std::cout << "Line no:" << 127 << " " << ((a->insert(152))==false) << std::endl;
std::cout << "Line no:" << 128 << " " << (b->remove(269)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 130 << " " << (b->remove(343)) << std::endl;
std::cout << "Line no:" << 131 << " " << (a->remove(152)) << std::endl;
std::cout << "Line no:" << 132 << " " << (b->insert(404)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->remove(404)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(47)) << std::endl;
std::cout << "Line no:" << 135 << " " << (a->insert(500)) << std::endl;
std::cout << "Line no:" << 136 << " " << ((a->remove(291))==false) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(185)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 140 << " " << (a->insert(191)) << std::endl;
std::cout << "Line no:" << 141 << " " << ((a->insert(500))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (a->insert(313)) << std::endl;
std::cout << "Line no:" << 143 << " " << (b->insert(186)) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(491)) << std::endl;
std::cout << "Line no:" << 145 << " " << (b->remove(186)) << std::endl;
std::cout << "Line no:" << 146 << " " << (b->insert(45)) << std::endl;
std::cout << "Line no:" << 147 << " " << ((a->remove(416))==false) << std::endl;
std::cout << "Line no:" << 148 << " " << (b->insert(417)) << std::endl;
std::cout << "Line no:" << 149 << " " << (a->remove(47)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 151 << " " << ((b->insert(45))==false) << std::endl;
std::cout << "Line no:" << 152 << " " << (a->insert(87)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(340)) << std::endl;
std::cout << "Line no:" << 154 << " " << (a->insert(296)) << std::endl;
std::cout << "Line no:" << 155 << " " << (b->insert(391)) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->remove(191)) << std::endl;
std::cout << "Line no:" << 157 << " " << (a->insert(333)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(294)) << std::endl;
std::cout << "Line no:" << 159 << " " << (a->insert(238)) << std::endl;
std::cout << "Line no:" << 160 << " " << ((b->insert(417))==false) << std::endl;
*b=*a;
std::cout << "Line no:" << 162 << " " << (a->remove(491)) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(264)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->insert(94)) << std::endl;
try{std::cout <<"Line no:" << 165 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 166 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 167 << " " << a->getFloor(313) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 168 << " " << a->getCeiling(313) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 169 << " " << a->getNext(313) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 170 << " " << a->get(313) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 171 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 173 << " " << (a->insert(306)) << std::endl;
std::cout << "Line no:" << 174 << " " << ((b->insert(238))==false) << std::endl;
std::cout << "Line no:" << 175 << " " << (b->insert(237)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 177 << " " << (b->remove(296)) << std::endl;
std::cout << "Line no:" << 178 << " " << (a->insert(456)) << std::endl;
a->printPretty();
*b=*b;
std::cout << "Line no:" << 181 << " " << (a->insert(271)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 183 << " " << (a->remove(87)) << std::endl;
std::cout << "Line no:" << 184 << " " << (a->insert(14)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->remove(306)) << std::endl;
*a=*b;
std::cout << "Line no:" << 187 << " " << (b->insert(353)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 189 << " " << (b->insert(483)) << std::endl;
std::cout << "Line no:" << 190 << " " << ((b->insert(333))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 192 << " " << ((b->insert(313))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->insert(377)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(68)) << std::endl;
std::cout << "Line no:" << 195 << " " << (b->remove(87)) << std::endl;
std::cout << "Line no:" << 196 << " " << (a->remove(462)) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->remove(377)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(283)) << std::endl;
std::cout << "Line no:" << 199 << " " << ((a->insert(500))==false) << std::endl;
std::cout << "Line no:" << 200 << " " << (b->remove(264)) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->remove(82))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (b->insert(83)) << std::endl;
std::cout << "Line no:" << 203 << " " << ((a->insert(87))==false) << std::endl;
std::cout << "Line no:" << 204 << " " << ((b->insert(18))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << (b->remove(491)) << std::endl;
std::cout << "Line no:" << 206 << " " << ((b->insert(238))==false) << std::endl;
std::cout << "Line no:" << 207 << " " << (b->remove(333)) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->remove(18)) << std::endl;
std::cout << "Line no:" << 209 << " " << (a->insert(174)) << std::endl;
*b=*b;
std::cout << "Line no:" << 211 << " " << (b->insert(278)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->remove(491)) << std::endl;
std::cout << "Line no:" << 213 << " " << (a->insert(446)) << std::endl;
std::cout << "Line no:" << 214 << " " << (a->insert(356)) << std::endl;
std::cout << "Line no:" << 215 << " " << (a->remove(500)) << std::endl;
std::cout << "Line no:" << 216 << " " << (b->insert(429)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(464)) << std::endl;
std::cout << "Line no:" << 218 << " " << (b->remove(278)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->insert(367)) << std::endl;
b->printPretty();
*a=*b;
std::cout << "Line no:" << 222 << " " << ((b->insert(367))==false) << std::endl;
try{std::cout <<"Line no:" << 223 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 224 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 225 << " " << a->getFloor(483) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 226 << " " << a->getCeiling(483) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 227 << " " << a->getNext(483) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 228 << " " << a->get(483) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 229 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 231 << " " << ((b->insert(171))==false) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
b->printPretty();
return 0;
}
