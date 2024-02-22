#include <iostream>
#include "../your_code/ScapegoatTree.cpp"
int main() {
ScapegoatTree<int> *a=new ScapegoatTree<int>;
std::cout << "Line no:" << 5 << " " << ((a->remove(307))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 7 << " " << (a->insert(416)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 9 << " " << ((a->remove(399))==false) << std::endl;
std::cout << "Line no:" << 10 << " " << (a->remove(416)) << std::endl;
std::cout << "Line no:" << 11 << " " << (a->insert(252)) << std::endl;
std::cout << "Line no:" << 12 << " " << ((a->insert(252))==false) << std::endl;
std::cout << "Line no:" << 13 << " " << ((a->insert(252))==false) << std::endl;
std::cout << "Line no:" << 14 << " " << (a->insert(246)) << std::endl;
std::cout << "Line no:" << 15 << " " << (a->remove(252)) << std::endl;
std::cout << "Line no:" << 16 << " " << (a->insert(132)) << std::endl;
std::cout << "Line no:" << 17 << " " << ((a->remove(395))==false) << std::endl;
std::cout << "Line no:" << 18 << " " << ((a->remove(35))==false) << std::endl;
std::cout << "Line no:" << 19 << " " << (a->insert(486)) << std::endl;
std::cout << "Line no:" << 20 << " " << ((a->remove(59))==false) << std::endl;
ScapegoatTree<int> *b=new ScapegoatTree<int>;
*a=*b;
std::cout << "Line no:" << 23 << " " << (b->insert(270)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 25 << " " << ((a->insert(132))==false) << std::endl;
std::cout << "Line no:" << 26 << " " << ((a->insert(246))==false) << std::endl;
std::cout << "Line no:" << 27 << " " << (a->remove(132)) << std::endl;
std::cout << "Line no:" << 28 << " " << (b->insert(270)) << std::endl;
std::cout << "Line no:" << 29 << " " << (a->insert(409)) << std::endl;
std::cout << "Line no:" << 30 << " " << (a->remove(486)) << std::endl;
std::cout << "Line no:" << 31 << " " << ((a->insert(409))==false) << std::endl;
std::cout << "Line no:" << 32 << " " << ((b->insert(270))==false) << std::endl;
std::cout << "Line no:" << 33 << " " << ((a->insert(246))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 35 << " " << (b->insert(422)) << std::endl;
std::cout << "Line no:" << 36 << " " << (b->remove(270)) << std::endl;
std::cout << "Line no:" << 37 << " " << (a->remove(409)) << std::endl;
std::cout << "Line no:" << 38 << " " << ((a->remove(356))==false) << std::endl;
std::cout << "Line no:" << 39 << " " << (a->insert(15)) << std::endl;
std::cout << "Line no:" << 40 << " " << (b->remove(422)) << std::endl;
std::cout << "Line no:" << 41 << " " << (b->insert(108)) << std::endl;
std::cout << "Line no:" << 42 << " " << (b->insert(379)) << std::endl;
std::cout << "Line no:" << 43 << " " << (b->insert(169)) << std::endl;
std::cout << "Line no:" << 44 << " " << ((a->insert(246))==false) << std::endl;
std::cout << "Line no:" << 45 << " " << (a->remove(15)) << std::endl;
std::cout << "Line no:" << 46 << " " << (a->remove(246)) << std::endl;
std::cout << "Line no:" << 47 << " " << ((b->remove(73))==false) << std::endl;
*a=*a;
std::cout << "Line no:" << 49 << " " << (b->remove(379)) << std::endl;
std::cout << "Line no:" << 50 << " " << (a->insert(209)) << std::endl;
std::cout << "Line no:" << 51 << " " << (a->insert(234)) << std::endl;
std::cout << "Line no:" << 52 << " " << (a->insert(247)) << std::endl;
std::cout << "Line no:" << 53 << " " << (b->remove(169)) << std::endl;
try{std::cout <<"Line no:" << 54 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 55 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 56 << " " << a->getFloor(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 57 << " " << a->getCeiling(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 58 << " " << a->getNext(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 59 << " " << a->get(247) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 60 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 61 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
a->printPretty();
std::cout << "Line no:" << 63 << " " << ((b->insert(270))==false) << std::endl;
std::cout << "Line no:" << 64 << " " << (a->insert(347)) << std::endl;
std::cout << "Line no:" << 65 << " " << (a->remove(209)) << std::endl;
std::cout << "Line no:" << 66 << " " << (a->remove(247)) << std::endl;
std::cout << "Line no:" << 67 << " " << (b->remove(108)) << std::endl;
a->printPretty();
*a=*b;
std::cout << "Line no:" << 70 << " " << (b->insert(42)) << std::endl;
std::cout << "Line no:" << 71 << " " << ((b->remove(83))==false) << std::endl;
b->printPretty();
a->printPretty();
std::cout << "Line no:" << 74 << " " << (b->insert(365)) << std::endl;
std::cout << "Line no:" << 75 << " " << (b->remove(42)) << std::endl;
a->printPretty();
b->printPretty();
std::cout << "Line no:" << 78 << " " << (a->insert(322)) << std::endl;
*a=*b;
std::cout << "Line no:" << 80 << " " << ((a->insert(365))==false) << std::endl;
std::cout << "Line no:" << 81 << " " << (b->remove(270)) << std::endl;
std::cout << "Line no:" << 82 << " " << ((a->remove(453))==false) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 85 << " " << (a->remove(365)) << std::endl;
std::cout << "Line no:" << 86 << " " << ((b->insert(365))==false) << std::endl;
std::cout << "Line no:" << 87 << " " << (b->insert(175)) << std::endl;
std::cout << "Line no:" << 88 << " " << (b->remove(175)) << std::endl;
std::cout << "Line no:" << 89 << " " << ((b->remove(134))==false) << std::endl;
std::cout << "Line no:" << 90 << " " << (b->insert(238)) << std::endl;
std::cout << "Line no:" << 91 << " " << ((b->insert(238))==false) << std::endl;
std::cout << "Line no:" << 92 << " " << (b->insert(170)) << std::endl;
std::cout << "Line no:" << 93 << " " << (a->insert(28)) << std::endl;
std::cout << "Line no:" << 94 << " " << (a->insert(374)) << std::endl;
std::cout << "Line no:" << 95 << " " << (b->remove(238)) << std::endl;
std::cout << "Line no:" << 96 << " " << (b->insert(77)) << std::endl;
*b=*b;
a->printPretty();
std::cout << "Line no:" << 99 << " " << (b->insert(65)) << std::endl;
std::cout << "Line no:" << 100 << " " << (a->insert(449)) << std::endl;
std::cout << "Line no:" << 101 << " " << (b->insert(397)) << std::endl;
std::cout << "Line no:" << 102 << " " << (b->insert(332)) << std::endl;
std::cout << "Line no:" << 103 << " " << ((b->insert(332))==false) << std::endl;
std::cout << "Line no:" << 104 << " " << (b->insert(269)) << std::endl;
std::cout << "Line no:" << 105 << " " << (b->insert(302)) << std::endl;
std::cout << "Line no:" << 106 << " " << (b->insert(303)) << std::endl;
std::cout << "Line no:" << 107 << " " << (a->insert(490)) << std::endl;
std::cout << "Line no:" << 108 << " " << (b->remove(397)) << std::endl;
std::cout << "Line no:" << 109 << " " << (b->remove(365)) << std::endl;
b->printPretty();
b->printPretty();
try{std::cout <<"Line no:" << 112 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 113 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 114 << " " << a->getFloor(449) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 115 << " " << a->getCeiling(449) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 116 << " " << a->getNext(449) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 117 << " " << a->get(449) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 118 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 119 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 120 << " " << (b->insert(301)) << std::endl;
std::cout << "Line no:" << 121 << " " << (b->insert(428)) << std::endl;
std::cout << "Line no:" << 122 << " " << (b->insert(166)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 124 << " " << (a->insert(348)) << std::endl;
std::cout << "Line no:" << 125 << " " << (a->remove(270)) << std::endl;
std::cout << "Line no:" << 126 << " " << (a->insert(444)) << std::endl;
std::cout << "Line no:" << 127 << " " << (b->remove(170)) << std::endl;
std::cout << "Line no:" << 128 << " " << ((a->insert(449))==false) << std::endl;
*b=*b;
std::cout << "Line no:" << 130 << " " << (b->insert(457)) << std::endl;
std::cout << "Line no:" << 131 << " " << (b->insert(453)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 133 << " " << (a->remove(490)) << std::endl;
std::cout << "Line no:" << 134 << " " << (a->remove(28)) << std::endl;
a->printPretty();
std::cout << "Line no:" << 136 << " " << (a->insert(363)) << std::endl;
std::cout << "Line no:" << 137 << " " << (a->insert(270)) << std::endl;
std::cout << "Line no:" << 138 << " " << (a->insert(45)) << std::endl;
std::cout << "Line no:" << 139 << " " << (a->remove(270)) << std::endl;
std::cout << "Line no:" << 140 << " " << ((a->remove(412))==false) << std::endl;
std::cout << "Line no:" << 141 << " " << ((b->remove(447))==false) << std::endl;
std::cout << "Line no:" << 142 << " " << (b->insert(342)) << std::endl;
std::cout << "Line no:" << 143 << " " << ((a->remove(150))==false) << std::endl;
std::cout << "Line no:" << 144 << " " << (a->insert(32)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 146 << " " << (b->insert(261)) << std::endl;
*b=*a;
std::cout << "Line no:" << 148 << " " << ((b->insert(45))==false) << std::endl;
std::cout << "Line no:" << 149 << " " << (b->remove(449)) << std::endl;
std::cout << "Line no:" << 150 << " " << ((a->remove(392))==false) << std::endl;
std::cout << "Line no:" << 151 << " " << (b->remove(348)) << std::endl;
std::cout << "Line no:" << 152 << " " << (b->remove(363)) << std::endl;
std::cout << "Line no:" << 153 << " " << (b->insert(101)) << std::endl;
std::cout << "Line no:" << 154 << " " << ((a->insert(45))==false) << std::endl;
std::cout << "Line no:" << 155 << " " << ((a->remove(376))==false) << std::endl;
b->printPretty();
std::cout << "Line no:" << 157 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 158 << " " << (b->insert(200)) << std::endl;
b->printPretty();
b->printPretty();
std::cout << "Line no:" << 161 << " " << (a->insert(400)) << std::endl;
std::cout << "Line no:" << 162 << " " << ((b->remove(360))==false) << std::endl;
std::cout << "Line no:" << 163 << " " << (b->insert(449)) << std::endl;
std::cout << "Line no:" << 164 << " " << ((a->insert(32))==false) << std::endl;
a->printPretty();
std::cout << "Line no:" << 166 << " " << ((b->insert(101))==false) << std::endl;
*a=*b;
*b=*a;
std::cout << "Line no:" << 169 << " " << (b->insert(467)) << std::endl;
a->printPretty();
try{std::cout <<"Line no:" << 171 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 172 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 173 << " " << a->getFloor(200) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 174 << " " << a->getCeiling(200) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 175 << " " << a->getNext(200) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 176 << " " << a->get(200) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 177 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 178 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 179 << " " << ((a->remove(49))==false) << std::endl;
std::cout << "Line no:" << 180 << " " << (a->remove(45)) << std::endl;
std::cout << "Line no:" << 181 << " " << (a->insert(6)) << std::endl;
std::cout << "Line no:" << 182 << " " << (b->insert(128)) << std::endl;
std::cout << "Line no:" << 183 << " " << (b->insert(391)) << std::endl;
std::cout << "Line no:" << 184 << " " << ((a->remove(308))==false) << std::endl;
std::cout << "Line no:" << 185 << " " << (a->insert(106)) << std::endl;
std::cout << "Line no:" << 186 << " " << (a->insert(239)) << std::endl;
std::cout << "Line no:" << 187 << " " << (a->remove(200)) << std::endl;
std::cout << "Line no:" << 188 << " " << (b->insert(62)) << std::endl;
std::cout << "Line no:" << 189 << " " << (b->remove(467)) << std::endl;
std::cout << "Line no:" << 190 << " " << (b->remove(444)) << std::endl;
std::cout << "Line no:" << 191 << " " << (b->insert(157)) << std::endl;
std::cout << "Line no:" << 192 << " " << ((b->remove(356))==false) << std::endl;
std::cout << "Line no:" << 193 << " " << (a->remove(101)) << std::endl;
std::cout << "Line no:" << 194 << " " << (b->insert(23)) << std::endl;
std::cout << "Line no:" << 195 << " " << ((b->remove(440))==false) << std::endl;
std::cout << "Line no:" << 196 << " " << ((a->remove(58))==false) << std::endl;
std::cout << "Line no:" << 197 << " " << (a->insert(339)) << std::endl;
std::cout << "Line no:" << 198 << " " << (b->insert(6)) << std::endl;
std::cout << "Line no:" << 199 << " " << (a->insert(178)) << std::endl;
std::cout << "Line no:" << 200 << " " << ((b->remove(488))==false) << std::endl;
std::cout << "Line no:" << 201 << " " << ((b->remove(180))==false) << std::endl;
std::cout << "Line no:" << 202 << " " << (a->insert(380)) << std::endl;
std::cout << "Line no:" << 203 << " " << (b->remove(200)) << std::endl;
std::cout << "Line no:" << 204 << " " << ((a->insert(106))==false) << std::endl;
std::cout << "Line no:" << 205 << " " << ((a->insert(6))==false) << std::endl;
std::cout << "Line no:" << 206 << " " << (a->remove(6)) << std::endl;
std::cout << "Line no:" << 207 << " " << (a->remove(32)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 209 << " " << ((b->remove(84))==false) << std::endl;
std::cout << "Line no:" << 210 << " " << (b->insert(168)) << std::endl;
std::cout << "Line no:" << 211 << " " << (b->insert(120)) << std::endl;
std::cout << "Line no:" << 212 << " " << (a->insert(413)) << std::endl;
b->printPretty();
std::cout << "Line no:" << 214 << " " << ((b->remove(22))==false) << std::endl;
std::cout << "Line no:" << 215 << " " << (b->insert(141)) << std::endl;
std::cout << "Line no:" << 216 << " " << (a->insert(210)) << std::endl;
std::cout << "Line no:" << 217 << " " << (a->remove(339)) << std::endl;
std::cout << "Line no:" << 218 << " " << (a->insert(191)) << std::endl;
std::cout << "Line no:" << 219 << " " << (b->remove(23)) << std::endl;
std::cout << "Line no:" << 220 << " " << (a->remove(191)) << std::endl;
std::cout << "Line no:" << 221 << " " << (b->insert(202)) << std::endl;
std::cout << "Line no:" << 222 << " " << (a->remove(106)) << std::endl;
std::cout << "Line no:" << 223 << " " << (a->insert(264)) << std::endl;
std::cout << "Line no:" << 224 << " " << (a->insert(192)) << std::endl;
std::cout << "Line no:" << 225 << " " << (a->insert(52)) << std::endl;
std::cout << "Line no:" << 226 << " " << (a->insert(224)) << std::endl;
std::cout << "Line no:" << 227 << " " << (a->remove(210)) << std::endl;
std::cout << "Line no:" << 228 << " " << (b->insert(250)) << std::endl;
try{std::cout <<"Line no:" << 229 << " " << a->getMin() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 230 << " " << a->getMax() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 231 << " " << a->getFloor(413) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 232 << " " << a->getCeiling(413) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 233 << " " << a->getNext(413) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 234 << " " << a->get(413) << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 235 << " " << a->getHeight() << std::endl;}catch(NoSuchItemException a){;}
try{std::cout <<"Line no:" << 236 << " " << a->getSize() << std::endl;}catch(NoSuchItemException a){;}
std::cout << "Line no:" << 237 << " " << (a->insert(495)) << std::endl;
a->print(preorder);
a->print(inorder);
a->print(postorder);
a->removeAllNodes();
a->printPretty();
return 0;
}
