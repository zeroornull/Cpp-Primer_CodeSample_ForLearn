//
// Created by xxp on 2022/4/17.
//

#ifndef FIRSTPROJECT_STONEWT_H
#define FIRSTPROJECT_STONEWT_H


class Stonewt {
private:
    enum {
        Lbs_per_stn = 14
    };
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);

    Stonewt(int stn, double lbs);

    Stonewt();

    ~Stonewt();

    void show_lbs() const;

    void show_stn() const;

    //
    bool operator<(const Stonewt &st) const {
        return pounds < st.pounds;
    }

    bool operator>(const Stonewt &st) const {
        return pounds > st.pounds;
    }

    bool operator==(const Stonewt &st) const {
        return pounds == st.pounds;
    }

    bool operator<=(const Stonewt &st) const {
        return pounds <= st.pounds;
    }

    bool operator>=(const Stonewt &st) const {
        return pounds >= st.pounds;
    }

    bool operator!=(const Stonewt &st) const {
        return pounds != st.pounds;
    }
};


#endif //FIRSTPROJECT_STONEWT_H
