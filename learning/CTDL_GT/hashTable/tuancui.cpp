#include<bits/stdc++.h>

using namespace std;

// Muc tu trong tu dien
struct MucTu
{
    string tuTiengAnh;
    string nghiaTiengViet;
};

struct TuDien
{
    MucTu* table; // Con tro toi bang bam
    int tableSize; // Kich thuoc bang bam
    bool* trong;   // Neu trong[i] == true thi vi tri i trong bang bam
                   // dang trong
};

// Ham bam anh xa tu tieng Anh sang mot vi tri trong bang bam:
//   1. Cong cac ky tu
//   2. Chia cho kich thuoc bang bam va lay phan du
int hamBam(string tuTiengAnh, int tableSize) // --> Trả về vị trí trong bảng băm
{
    int hashVal = 0;  // Biến lưu giá trị băm
    for (int i = 0; i < tuTiengAnh.size(); i++)   // duyệt các kí tự của từTA
        hashVal += tuTiengAnh[i];  // Lưu giá trị theo bảng mã vào Ascii vào biến bắm

    return hashVal % tableSize;  // chia lấy dư --> Đảm bảo rằng giá trị băm nằm trong pham vi bảng băm
}

// Ham khoi tao tu dien
void khoiTaoTD(TuDien& td, int size = 101) // Kich thuoc bang bam ngam 
                                            // dinh la 101
{
    td.tableSize = size;	// Cập nhật kích thước từ điển là size
    td.table = new MucTu[size]; // cấp phát động cho mảng tới bảng băm có kích thước size
    td.trong = new bool[size];  // cấp phát động cho mảng lưu vi trí của các ptu trong bảng băm

    for (int i = 0; i < size; i++)
        td.trong[i] = true; // Duyệt tất cả các vị trí cho = true tưc đang rỗng
}

// Ham huy tu dien
void huyTD(TuDien& td)
{
    delete[] td.table;  // Giải phóng bộ nhớ cho mảng băm
    delete[] td.trong;  // Giải phóng bộ nhớ cho mảng lưu vị trí băm
}

// Hàm chuẩn hóa từ tiếng Anh thành dạng chữ thường
string chuanHoaTuTiengAnh(string tuTiengAnh)
{
    for (char& c : tuTiengAnh)
    {
        c = tolower(c); // Chuyển từ c sang chữ thường
    }
    return tuTiengAnh;
}

// Chen muc tu vao tu dien
void chenMucTu(TuDien& td, MucTu mt)  // Tham chiếu đến td để chèn mt cần chèn vào
{	
	mt.tuTiengAnh = chuanHoaTuTiengAnh(mt.tuTiengAnh);
    int index = hamBam(mt.tuTiengAnh, td.tableSize); // vị trí trong bảng băm
    while (!td.trong[index])  // Nếu vị trí đã đc sử dụng
        index = (index + 1) % td.tableSize;   // tham dò tuyến tính

    td.table[index] = mt; // lưu bảng băm vào vị trí thích hợp đã tìm đc
    td.trong[index] = false;  // vị trí đã có mt ko còn trỗng nx
}

// cải tiến chèn mục từ
void chenMucTu2(TuDien& td, MucTu mt)
{	
	mt.tuTiengAnh = chuanHoaTuTiengAnh(mt.tuTiengAnh);
    int index = hamBam(mt.tuTiengAnh, td.tableSize); // Vị trí trong bảng băm
    int initialIndex = index; // lưu lại vị trí để ktra

	// Nếu vị trí ch đc sử dụng hoặc vị trí trừ TA này ko giống từ TA cần tìm thì tìm vị trí tiếp theo
    while (!td.trong[index] && td.table[index].tuTiengAnh != mt.tuTiengAnh)
    {
        index = (index + 1) % td.tableSize;  // thăm dò tuyến tính
        if (index == initialIndex)
            return; // Không chèn mục từ mới nếu vòng lặp quay lại điểm bắt đầu
    }
	// Nếu ch sử dụng
    if (!td.trong[index])
    {
        // Tìm thấy vị trí trống, chèn mục từ mới vào từ điển
        td.table[index] = mt; // Lưu bảng băm vào vị trí thích hợp đã tìm được
        td.trong[index] = false; // Vị trí đã có mục từ, không còn trống nữa
    }
    else  // Nếu đã sử dụng và tìm thấy
    {
        // Từ tiếng Anh đã tồn tại trong từ điển, thực hiện cập nhật nghĩa tiếng Việt
        td.table[index].nghiaTiengViet = mt.nghiaTiengViet;
    }
}


// Lay nghia tieng Viet
string nghiaTiengViet(TuDien& td, string tuTiengAnh)
{
    int index = hamBam(tuTiengAnh, td.tableSize);   // vị trí băm cần tìm trong bảng băm
    int initialIndex = index;  // lưu lại vị trí băm để kiểm tra
	
	// Nếu vị trí ch đc sử dụng hoặc vị trí trừ TA này ko giống từ TA cần tìm thì tìm vị trí tiếp theo 
	// --> Đến khi tìm đc từ vị trí từ TA đó thì out ra 
    while (!td.trong[index] && td.table[index].tuTiengAnh != tuTiengAnh) 
    {
        index = (index + 1) % td.tableSize;  // Tham dò tuyến tính vị trí tiếp theo
        if (index == initialIndex)   // ktra xem đã quay lại vị trí băm ban đầu ch (tức đã duyệt hết ch)
            return ""; // nếu duyệt hết rồi mà vxko tìm thấy trả về rỗng
    }
    
	// Ktra tiếp từ TA cần tìm
    if (!td.trong[index])  // Nếu vị trí đã đc sử dụng tức chứa từ TA cần tìm
        return td.table[index].nghiaTiengViet;   // Trả về từ TV tương ứng

    return ""; // ngc lại trả về rỗng
}

// cập nhật nghĩa tiếng việt
void capNhatNghiaTiengViet(TuDien& td, string tuTiengAnh, string nghiaTiengVietMoi)
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



//số mục từ hiện có trong từ điển
int countMt(TuDien& td)
{
    int cnt = 0; // số mt ban đầu là 0
    for (int i = 0; i < td.tableSize; i++){   // duyệt từ đầu đến cuối
        if (!td.trong[i]){   // Nếu vị trí đó ko rỗng tức là có mt
            cnt++;    // tăng lên 1
        }
    }
    return cnt;   // trả về số lượng
}

void xoaMucTu(TuDien& td, string tuTiengAnh)
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
    td.trong[index] = true; // Đánh dấu vị trí là trống
    td.table[index].tuTiengAnh = ""; // Xóa từ tiếng Anh
    td.table[index].nghiaTiengViet = ""; // Xóa nghĩa tiếng Việt
}



int main()
{
    TuDien td;
    khoiTaoTD(td);

    // Tao mot vai muc tu
    MucTu mt1, mt2, mt3;
    mt1.tuTiengAnh = "computer";
    mt1.nghiaTiengViet = "may tinh";
    mt2.tuTiengAnh = "memory";
    mt2.nghiaTiengViet = "bo nho";
    mt3.tuTiengAnh = "hard disk";
    mt3.nghiaTiengViet = "dia cung";

    // Chen cac muc tu vao tu dien
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
	capNhatNghiaTiengViet(td,"memory","tri nho");
	cout << "Nghia moi cua tu memory: " << nghiaTiengViet(td,"memory");
	
	// xóa
	xoaMucTu(td,"hard disk");
	cout << "\nSo muc tu hien co trong tu dien: " << countMt(td) << endl;   
	  
    huyTD(td);

    return 0;
}
