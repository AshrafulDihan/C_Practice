
#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char name[50];
    int  age;
    char gender[10];
    char contact[20];
    char history[200];
} Patient;

Patient p[MAX];
int total = 0;

/* ----------- small helpers (keep it simple) ----------- */
void read_line(const char *msg, char *buf, int sz) {
    printf("%s", msg);
    if (fgets(buf, sz, stdin)) buf[strcspn(buf, "\n")] = 0;
}

int read_int(const char *msg) {
    char t[32];
    read_line(msg, t, sizeof(t));
    int x = 0; sscanf(t, "%d", &x);
    return x;
}

void print_one(int i) {
    printf("\n[Patient %d]\n", i + 1);
    printf("Name   : %s\n", p[i].name);
    printf("Age    : %d\n", p[i].age);
    printf("Gender : %s\n", p[i].gender);
    printf("Contact: %s\n", p[i].contact);
    printf("History: %s\n", p[i].history);
}

/* ----------------- core features ----------------- */
void add_patient(void) {
    if (total >= MAX) { puts("Patient limit full."); return; }

    read_line("Name: ",    p[total].name,    sizeof(p[total].name));
    p[total].age = read_int("Age : ");
    read_line("Gender: ",  p[total].gender,  sizeof(p[total].gender));
    read_line("Contact: ", p[total].contact, sizeof(p[total].contact));
    read_line("History: ", p[total].history, sizeof(p[total].history));

    total++;
    puts("Added.");
}

void show_all(void) {
    if (!total) { puts("No patients."); return; }
    for (int i = 0; i < total; i++) print_one(i);
}

void search_patients(void) {
    if (!total) { puts("No data to search."); return; }

    int opt = read_int("Search by (1.Name 2.Contact 3.Number): ");
    int found = 0;

    if (opt == 1) {
        char key[50]; read_line("Enter Name: ", key, sizeof(key));
        for (int i = 0; i < total; i++)
            if (strcmp(p[i].name, key) == 0) { print_one(i); found = 1; }
    } else if (opt == 2) {
        char key[20]; read_line("Enter Contact: ", key, sizeof(key));
        for (int i = 0; i < total; i++)
            if (strcmp(p[i].contact, key) == 0) { print_one(i); found = 1; }
    } else if (opt == 3) {
        int n = read_int("Enter Patient Number: ");
        if (n > 0 && n <= total) { print_one(n - 1); found = 1; }
    }

    if (!found) puts("No match.");
}

void update_patient(void) {
    if (!total) { puts("No data to update."); return; }

    /* pick record to edit */
    int sel = read_int("Find by (1.Name 2.Contact 3.Number): ");
    int idx = -1;

    if (sel == 1) {
        char key[50]; read_line("Name: ", key, sizeof(key));
        for (int i = 0; i < total; i++) if (!strcmp(p[i].name, key)) { idx = i; break; }
    } else if (sel == 2) {
        char key[20]; read_line("Contact: ", key, sizeof(key));
        for (int i = 0; i < total; i++) if (!strcmp(p[i].contact, key)) { idx = i; break; }
    } else if (sel == 3) {
        int n = read_int("Patient Number: ");
        if (n > 0 && n <= total) idx = n - 1;
    }

    if (idx == -1) { puts("Patient not found."); return; }
    print_one(idx);

    /* choose fields to edit */
    int f = read_int("Edit (1.Name 2.Age 3.Gender 4.Contact 5.History 6.ALL): ");
    if (f == 1 || f == 6) read_line("New Name: ", p[idx].name, sizeof(p[idx].name));
    if (f == 2 || f == 6) p[idx].age = read_int("New Age : ");
    if (f == 3 || f == 6) read_line("New Gender: ", p[idx].gender, sizeof(p[idx].gender));
    if (f == 4 || f == 6) read_line("New Contact: ", p[idx].contact, sizeof(p[idx].contact));
    if (f == 5 || f == 6) read_line("New History: ", p[idx].history, sizeof(p[idx].history));

    puts("Updated.");
}

void delete_one(void) {
    if (!total) { puts("No data."); return; }
    int n = read_int("Delete Patient Number: ");
    if (n <= 0 || n > total) { puts("Invalid number."); return; }
    int i = n - 1;
    for (int j = i; j < total - 1; j++) p[j] = p[j + 1];
    total--;
    puts("Deleted.");
}

void delete_all(void) { total = 0; puts("All cleared."); }

/* ---------------- file I/O (sequential, not random) ---------------- */
void save_data(void) {
    FILE *f = fopen("patients.txt", "w");
    if (!f) { puts("Save error."); return; }
    fprintf(f, "%d\n", total);
    for (int i = 0; i < total; i++)
        fprintf(f, "%s\n%d\n%s\n%s\n%s\n",
                p[i].name, p[i].age, p[i].gender, p[i].contact, p[i].history);
    fclose(f);
    puts("Saved.");
}

void load_data(void) {
    FILE *f = fopen("patients.txt", "r");
    if (!f) return;
    if (fscanf(f, "%d\n", &total) != 1) { total = 0; fclose(f); return; }
    if (total > MAX) total = MAX;                   // safety
    for (int i = 0; i < total; i++) {
        fgets(p[i].name,    sizeof(p[i].name),    f);    p[i].name[strcspn(p[i].name, "\n")] = 0;
        fscanf(f, "%d\n",  &p[i].age);
        fgets(p[i].gender,  sizeof(p[i].gender),  f);    p[i].gender[strcspn(p[i].gender, "\n")] = 0;
        fgets(p[i].contact, sizeof(p[i].contact), f);    p[i].contact[strcspn(p[i].contact, "\n")] = 0;
        fgets(p[i].history, sizeof(p[i].history), f);    p[i].history[strcspn(p[i].history, "\n")] = 0;
    }
    fclose(f);
}

/* -------------------- menu -------------------- */
int main(void) {
    load_data();
    while (1) {
        printf("\n--- Patient Management --- (Total: %d)\n", total);
        puts("1.Add  \n2.Show  \n3.Search  \n4.Update");
        puts("5.DeleteOne  \n6.DeleteAll  \n7.Save  \n0.Exit");
        int c = read_int("Choice: ");

        if      (c == 1) add_patient();
        else if (c == 2) show_all();
        else if (c == 3) search_patients();
        else if (c == 4) update_patient();
        else if (c == 5) delete_one();
        else if (c == 6) delete_all();
        else if (c == 7) save_data();
        else if (c == 0) { puts("Bye."); break; }
        else puts("Invalid.");
    }
    return 0;
}
