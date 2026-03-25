#include <fstream>

void save_cheat_configuration(const char* filename) {
    std::ofstream ofs(filename);
    if (ofs.is_open()) {
        ofs << "cheat_active=1\n";
        ofs.close();
    }
}

void load_cheat_configuration(const char* filename) {
    std::ifstream ifs(filename);
    if (ifs.is_open()) {
        // leitura de configurações
        ifs.close();
    }
}