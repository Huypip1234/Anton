#include <bits/stdc++.h>

using namespace std;

// Muc tu:
// tieng anh: nghia tieng viet
struct MucTu
{
    string tuTiengAnh;
    string nghiaTiengViet;
};

struct TuDien
{
    MucTu *table; // Con tro toi hashTable (tu tieng anh - nghia tieng viet)
    int tableSize;
    bool *trong; // con tro toi mang check vi tri cac ptu trong hashTable:
    // trong[i] == true -> vi tri i dang trong (rong)
};

// Hashfunc: Bam x ra lay vi tri -> luu x vao vi tri do (theo quy luat)
// 1. Cong cac ky tu
// 2. Chia cho kich thuoc bang bam, lay phan du
int hamBam(string tuTiengAnh, int tableSize) // --> Return index in hashTable
{
    int hashVal = 0;                            // gia tri bam
    for (int i = 0; i < tuTiengAnh.size(); i++) // Duyet cac ky tu cua tu tieng anh
    {
        hashVal += tuTiengAnh[i]; // 1) Cong cac ky tu: Luu gia tri theo ASCII
    }
    return hashVal % tableSize; // 2) Chia size lay phan du: Chia size -> dam bao cac gia tri nam trong pham vi hashTable
}

// Init
void khoiTaoTD(TuDien &td, int size = 101)
{
    td.tableSize = size;
    td.table = new MucTu[size]; // Tao hashTable

    td.trong = new bool[size]; // Mang check vi tri cac ptu trong hashTable co rong ko (cap phat dong)
    for (int i = 0; i < size; i++)
    {
        td.trong[i] = true; // Ban dau tat ca deu rong
    }
}

// Ham huy tu dien
void huyTD(TuDien &td)
{
    delete[] td.table; //   delete hashTable
    delete[] td.trong; //   delete mang check vi tri ptu trong hashTable
}

// to lowerCase
string chuanHoaTuTiengAnh(string tuTiengAnh)
{
    for (char &c : tuTiengAnh)
    {
        c = tolower(c);
    }
    return tuTiengAnh;
}

// insert muc tu: Tham do tuyen tinh
void chenMucTu(TuDien &td, MucTu mt)
{
    mt.tuTiengAnh = chuanHoaTuTiengAnh(mt.tuTiengAnh); // to lowerCase

    int index = hamBam(mt.tuTiengAnh, td.tableSize);
    while (!td.trong[index]) // Dung do
    {
        index = (index + 1) % td.tableSize; // Tham do tuyen tinh
    }
    td.table[index] = mt;    // luu muc tu vao vi tri do
    td.trong[index] = false; // vi tri da ton tai muc tu (ko rong nua)
}

// Cai tien: xu li them trung lap + toi uu time
void chenMucTu2(TuDien &td, MucTu mt)
{
    mt.tuTiengAnh = chuanHoaTuTiengAnh(mt.tuTiengAnh);

    int index = hamBam(mt.tuTiengAnh, td.tableSize);
    int initialIndex = index; // Luu lai vi tri de ktra
    // neu !rong va ko bi trung lap tu -> tham do tiep
    while (!td.trong[index] && td.table[index].tuTiengAnh != mt.tuTiengAnh)
    {
        index = (index + 1) % td.tableSize; // tham do tuyen tinh
        if (index == initialIndex)
            return; // Thoat luon neu vong lap quay lai start
    }

    // Neu rong -> insert
    if (!td.trong[index])
    {
        td.table[index] = mt; // luu muc tu vao vi tri do
        td.trong[index] = false; // vi tri da ton tai muc tu (ko rong nua)
    }
    // Neu !rong nhung bi trung -> insert
    else
    {
        td.table[index].nghiaTiengViet = mt.nghiaTiengViet;
    }
}

// Lay nghia tieng Viet
string nghiaTiengViet(TuDien &td, string tuTiengAnh)
{
    int index = hamBam(tuTiengAnh, td.tableSize);
    int initialIndex = index; // Luu lai vi tri de ktra

    // Nếu vị trí ch đc sử dụng hoặc vị trí trừ TA này ko giống từ TA cần tìm thì tìm vị trí tiếp theo
    // --> Đến khi tìm đc từ vị trí từ TA đó thì out ra
    while (!td.trong[index] && td.table[index].tuTiengAnh != tuTiengAnh)
    {
        index = (index + 1) % td.tableSize; // Tham dò tuyến tính vị trí tiếp theo
        if (index == initialIndex)          // ktra xem đã quay lại vị trí băm ban đầu ch (tức đã duyệt hết ch)
            return "";                      // nếu duyệt hết rồi mà vxko tìm thấy trả về rỗng
    }

    // Ktra tiếp từ TA cần tìm
    if (!td.trong[index])                      // Nếu vị trí đã đc sử dụng tức chứa từ TA cần tìm
        return td.table[index].nghiaTiengViet; // Trả về từ TV tương ứng

    return ""; // ngc lại trả về rỗng
}

// cập nhật nghĩa tiếng việt
void capNhatNghiaTiengViet(TuDien &td, string tuTiengAnh, string nghiaTiengVietMoi)
{
    tuTiengAnh = chuanHoaTuTiengAnh(tuTiengAnh); // Chuẩn hóa từ tiếng Anh thành chữ thường

    int index = hamBam(tuTiengAnh, td.tableSize);
    int initialIndex = index;

    while (!td.trong[index] && chuanHoaTuTiengAnh(td.table[index].tuTiengAnh) != tuTiengAnh)
    {
        index = (index + 1) % td.tableSize;
        if (index == initialIndex)
        {
            cout << "Từ tiếng Anh không tồn tại trong từ điển." << endl;
            return; // Không tìm thấy từ tiếng Anh trong từ điển, in thông báo và thoát hàm
        }
    }

    // Tìm thấy từ tiếng Anh, thực hiện cập nhật nghĩa tiếng Việt tại vị trí này
    td.table[index].nghiaTiengViet = nghiaTiengVietMoi;
}

// số mục từ hiện có trong từ điển
int countMt(TuDien &td)
{
    int cnt = 0; // số mt ban đầu là 0
    for (int i = 0; i < td.tableSize; i++)
    { // duyệt từ đầu đến cuối
        if (!td.trong[i])
        {          // Nếu vị trí đó ko rỗng tức là có mt
            cnt++; // tăng lên 1
        }
    }
    return cnt; // trả về số lượng
}

void xoaMucTu(TuDien &td, string tuTiengAnh)
{
    int index = hamBam(tuTiengAnh, td.tableSize);
    int initialIndex = index;

    while (!td.trong[index] && td.table[index].tuTiengAnh != tuTiengAnh)
    {
        index = (index + 1) % td.tableSize;
        if (index == initialIndex)
        {
            cout << "Từ tiếng Anh không tồn tại trong từ điển." << endl;
            return; // Không tìm thấy từ tiếng Anh trong từ điển, in thông báo và thoát hàm
        }
    }

    // Tìm thấy từ tiếng Anh, thực hiện xóa mục từ tại vị trí này
    td.trong[index] = true;              // Đánh dấu vị trí là trống
    td.table[index].tuTiengAnh = "";     // Xóa từ tiếng Anh
    td.table[index].nghiaTiengViet = ""; // Xóa nghĩa tiếng Việt
}

int main()
{
    TuDien td;
    khoiTaoTD(td);

    // Create some muc tu
    MucTu mt1, mt2, mt3;

    mt1.tuTiengAnh = "computer";
    mt1.nghiaTiengViet = "may tinh";

    mt2.tuTiengAnh = "memory";
    mt2.nghiaTiengViet = "bo nho";

    mt3.tuTiengAnh = "hard disk";
    mt3.nghiaTiengViet = "dia cung";

    // insert muc tu
    chenMucTu(td, mt1);
    chenMucTu(td, mt2);
    chenMucTu(td, mt3);

    string tuTA, nghiaTV;

    // Yeu cau nhap tu tieng Anh de tra cuu tu dien
    cout << "Nhap tu tieng Anh: ";
    getline(cin, tuTA);

    // Tim nghia tieng Viet
    nghiaTV = nghiaTiengViet(td, tuTA);

    // In ket qua tra cuu
    if (nghiaTV == "")
        cout << "Tu vua nhap khong co trong tu dien" << endl;
    else
        cout << "Nghia cua tu vua nhap la: " << nghiaTV << endl;

    // Đếm số lượng mục từ
    cout << "So muc tu hien co trong tu dien: " << countMt(td) << endl;

    // Cap nhat
    capNhatNghiaTiengViet(td, "memory", "tri nho");
    cout << "Nghia moi cua tu memory: " << nghiaTiengViet(td, "memory");

    // xóa
    xoaMucTu(td, "hard disk");
    cout << "\nSo muc tu hien co trong tu dien: " << countMt(td) << endl;

    huyTD(td);

    return 0;
}
