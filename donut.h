#ifndef DONUT_H
#define DONUT_H

#include "ray.h"
#include "hittable.h"

class Donut : public Hittable {
public:
    Donut() {}
    Donut(const Vec3& center, double majorRadius, double minorRadius, std::shared_ptr<Material> material);

    virtual bool hit(const Ray& ray, double t_min, double t_max, HitRecord& rec) const override;

private:
    Vec3 center;
    double majorRadius;
    double minorRadius;
    std::shared_ptr<Material> mat_ptr;
};

#endif // DONUT_H
