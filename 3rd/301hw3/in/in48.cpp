#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << (a->insert(52)) << std::endl;
std::cout << "Line no:" << 6 << " " << (a->insert(77)) << std::endl;
std::cout << "Line no:" << 7 << " " << (a->remove(77)) << std::endl;
std::cout << "Line no:" << 8 << " " << (a->insert(88)) << std::endl;
std::cout << "Line no:" << 9 << " " << (a->remove(52)) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(88)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(158)) << std::endl;
std::cout << "Line no:" << 12 << " " << (a->insert(48)) << std::endl;
std::cout << "Line no:" << 13 << " " << (a->insert(6)) << std::endl;
std::cout << "Line no:" << 14 << " " << ((a->remove(46))==false) << std::endl;
std::cout << "Line no:" << 15 << " " << ((a->insert(48))==false) << std::endl;
std::cout << "Line no:" << 16 << " " << ((a->insert(6))==false) << std::endl;
std::cout << "Line no:" << 17 << " " << (a->insert(267)) << std::endl;
std::cout << "Line no:" << 18 << " " << (a->insert(115)) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->remove(115)) << std::endl;
std::cout << "Line no:" << 20 << " " << (a->remove(6)) << std::endl;
std::cout << "Line no:" << 21 << " " << (a->insert(106)) << std::endl;
std::cout << "Line no:" << 22 << " " << (a->remove(106)) << std::endl;
std::cout << "Line no:" << 23 << " " << (a->insert(105)) << std::endl;
std::cout << "Line no:" << 24 << " " << ((a->insert(48))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 26 << " " << (a->insert(177)) << std::endl;
a->printPretty();
a->printPretty();
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*b=*b;
std::cout << "Line no:" << 31 << " " << ((a->insert(177))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << (a->insert(238)) << std::endl;
std::cout << "Line no:" << 33 << " " << (b->insert(329)) << std::endl;
std::cout << "Line no:" << 34 << " " << (b->insert(218)) << std::endl;
std::cout << "Line no:" << 35 << " " << (b->insert(116)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->remove(238)) << std::endl;
std::cout << "Line no:" << 37 << " " << ((a->insert(48))==false) << std::endl;
std::cout << "Line no:" << 38 << " " << (b->remove(177)) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->remove(158)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 41 << " " << (b->insert(199)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 43 << " " << (a->insert(183)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((b->insert(105))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << ((b->insert(116))==false) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->insert(292)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 48 << " " << (a->remove(183)) << std::endl;
std::cout << "Line no:" << 49 << " " << (b->insert(94)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 51 << " " << (b->insert(442)) << std::endl;
std::cout << "Line no:" << 52 << " " << (b->remove(329)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 54 << " " << ((a->insert(442))==false) << std::endl;
try{std::cout <<"Line no:" << 55 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getFloor(116) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getCeiling(116) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->getNext(116) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->get(116) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 62 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 63 << " " << ((a->insert(105))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (b->insert(374)) << std::endl;
std::cout << "Line no:" << 65 << " " << (b->insert(256)) << std::endl;
std::cout << "Line no:" << 66 << " " << (b->remove(256)) << std::endl;
std::cout << "Line no:" << 67 << " " << (a->insert(18)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 69 << " " << ((b->remove(322))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 71 << " " << (b->insert(443)) << std::endl;
std::cout << "Line no:" << 72 << " " << (b->insert(63)) << std::endl;
std::cout << "Line no:" << 73 << " " << (a->insert(261)) << std::endl;
std::cout << "Line no:" << 74 << " " << ((b->remove(407))==false) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(374)) << std::endl;
std::cout << "Line no:" << 76 << " " << (a->insert(116)) << std::endl;
*b=*b;
std::cout << "Line no:" << 78 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 79 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 80 << " " << ((b->insert(94))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << ((a->insert(348))==false) << std::endl;
std::cout << "Line no:" << 82 << " " << (b->insert(101)) << std::endl;
std::cout << "Line no:" << 83 << " " << ((b->insert(94))==false) << std::endl;
std::cout << "Line no:" << 84 << " " << ((b->insert(143))==false) << std::endl;
std::cout << "Line no:" << 85 << " " << (a->insert(218)) << std::endl;
std::cout << "Line no:" << 86 << " " << (b->insert(231)) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(463)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(143)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((b->insert(261))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (a->insert(235)) << std::endl;
std::cout << "Line no:" << 91 << " " << (a->remove(261)) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(180)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(188)) << std::endl;
std::cout << "Line no:" << 94 << " " << (b->remove(463)) << std::endl;
std::cout << "Line no:" << 95 << " " << (a->remove(94)) << std::endl;
std::cout << "Line no:" << 96 << " " << ((b->insert(199))==false) << std::endl;
std::cout << "Line no:" << 97 << " " << (a->remove(48)) << std::endl;
std::cout << "Line no:" << 98 << " " << (a->remove(443)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 100 << " " << (a->insert(260)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 102 << " " << (a->remove(218)) << std::endl;
std::cout << "Line no:" << 103 << " " << (a->remove(15)) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(162)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(476)) << std::endl;
std::cout << "Line no:" << 106 << " " << (a->insert(346)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->remove(235)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->insert(366)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->insert(427)) << std::endl;
std::cout << "Line no:" << 110 << " " << (b->remove(476)) << std::endl;
std::cout << "Line no:" << 111 << " " << (b->insert(202)) << std::endl;
std::cout << "Line no:" << 112 << " " << (b->remove(261)) << std::endl;
try{std::cout <<"Line no:" << 113 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getFloor(292) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getCeiling(292) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->getNext(292) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->get(292) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 120 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 121 << " " << (a->insert(378)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(382)) << std::endl;
std::cout << "Line no:" << 123 << " " << ((b->insert(63))==false) << std::endl;
std::cout << "Line no:" << 124 << " " << (a->remove(63)) << std::endl;
std::cout << "Line no:" << 125 << " " << ((a->remove(455))==false) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->remove(292)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 128 << " " << (a->insert(243)) << std::endl;
std::cout << "Line no:" << 129 << " " << (b->insert(41)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 132 << " " << (b->insert(175)) << std::endl;
std::cout << "Line no:" << 133 << " " << (b->remove(427)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->insert(355)) << std::endl;
std::cout << "Line no:" << 135 << " " << ((b->insert(199))==false) << std::endl;
std::cout << "Line no:" << 136 << " " << (b->remove(443)) << std::endl;
std::cout << "Line no:" << 137 << " " << (b->insert(291)) << std::endl;
std::cout << "Line no:" << 138 << " " << (b->remove(291)) << std::endl;
std::cout << "Line no:" << 139 << " " << (b->insert(124)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((a->insert(188))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << (a->remove(116)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 143 << " " << (b->remove(101)) << std::endl;
std::cout << "Line no:" << 144 << " " << ((a->remove(313))==false) << std::endl;
std::cout << "Line no:" << 145 << " " << (a->remove(105)) << std::endl;
*a=*a;
std::cout << "Line no:" << 147 << " " << (b->insert(96)) << std::endl;
std::cout << "Line no:" << 148 << " " << (a->remove(267)) << std::endl;
std::cout << "Line no:" << 149 << " " << ((a->remove(115))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 151 << " " << (b->insert(93)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->insert(39)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(399)) << std::endl;
std::cout << "Line no:" << 154 << " " << (b->remove(48)) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->remove(335))==false) << std::endl;
std::cout << "Line no:" << 156 << " " << (a->insert(168)) << std::endl;
std::cout << "Line no:" << 157 << " " << ((a->insert(199))==false) << std::endl;
std::cout << "Line no:" << 158 << " " << (a->insert(55)) << std::endl;
*b=*b;
std::cout << "Line no:" << 160 << " " << ((b->insert(96))==false) << std::endl;
std::cout << "Line no:" << 161 << " " << ((b->insert(199))==false) << std::endl;
std::cout << "Line no:" << 162 << " " << (b->remove(175)) << std::endl;
std::cout << "Line no:" << 163 << " " << (a->remove(260)) << std::endl;
std::cout << "Line no:" << 164 << " " << (a->remove(199)) << std::endl;
std::cout << "Line no:" << 165 << " " << (a->insert(279)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 167 << " " << ((b->insert(199))==false) << std::endl;
std::cout << "Line no:" << 168 << " " << ((b->insert(105))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 171 << " " << (b->remove(218)) << std::endl;
try{std::cout <<"Line no:" << 172 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getFloor(168) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getCeiling(168) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->getNext(168) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->get(168) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 179 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 180 << " " << (b->insert(157)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(161)) << std::endl;
std::cout << "Line no:" << 182 << " " << ((a->remove(97))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 184 << " " << (b->insert(269)) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(313)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 187 << " " << (b->insert(280)) << std::endl;
std::cout << "Line no:" << 188 << " " << ((b->insert(116))==false) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->insert(269)) << std::endl;
std::cout << "Line no:" << 190 << " " << (a->remove(168)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 192 << " " << (b->remove(399)) << std::endl;
std::cout << "Line no:" << 193 << " " << ((a->remove(91))==false) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->remove(18)) << std::endl;
std::cout << "Line no:" << 195 << " " << (a->remove(355)) << std::endl;
std::cout << "Line no:" << 196 << " " << (b->remove(116)) << std::endl;
std::cout << "Line no:" << 197 << " " << (b->insert(143)) << std::endl;
std::cout << "Line no:" << 198 << " " << ((b->remove(470))==false) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(154)) << std::endl;
std::cout << "Line no:" << 200 << " " << (a->remove(442)) << std::endl;
*b=*a;
std::cout << "Line no:" << 202 << " " << (a->insert(30)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(279)) << std::endl;
std::cout << "Line no:" << 204 << " " << (b->insert(293)) << std::endl;
std::cout << "Line no:" << 205 << " " << (a->remove(279)) << std::endl;
std::cout << "Line no:" << 206 << " " << (b->remove(154)) << std::endl;
std::cout << "Line no:" << 207 << " " << ((a->remove(83))==false) << std::endl;
std::cout << "Line no:" << 208 << " " << (a->insert(379)) << std::endl;
std::cout << "Line no:" << 209 << " " << ((b->insert(116))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (a->insert(3)) << std::endl;
std::cout << "Line no:" << 211 << " " << (a->remove(30)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 213 << " " << (b->remove(116)) << std::endl;
std::cout << "Line no:" << 214 << " " << ((b->insert(218))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(248)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->remove(55)) << std::endl;
std::cout << "Line no:" << 217 << " " << (b->insert(88)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->remove(346)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->remove(248)) << std::endl;
std::cout << "Line no:" << 220 << " " << ((b->insert(293))==false) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->remove(378)) << std::endl;
std::cout << "Line no:" << 222 << " " << ((b->insert(55))==false) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(305)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 225 << " " << (a->remove(3)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(317)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->insert(471)) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->remove(243)) << std::endl;
std::cout << "Line no:" << 229 << " " << (b->insert(105)) << std::endl;
try{std::cout <<"Line no:" << 230 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getFloor(379) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getCeiling(379) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->getNext(379) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->get(379) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 237 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 238 << " " << (a->insert(134)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
