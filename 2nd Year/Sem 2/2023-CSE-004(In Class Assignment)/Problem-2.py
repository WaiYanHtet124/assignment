class Shoe:
    allowed_colors = ["black", "white", "brown", "red", "blue", "pink", "green", "yellow"]

    def __init__(self, brand, style, size, size_group, gender, color):
        size_ranges = {
            "child": range(1, 4),
            "teen": range(4, 7),
            "adult": range(7, 14)
        }

        if size not in size_ranges[size_group]:
            raise ValueError(f"Invalid size {size} for size group {size_group}")

        if color not in Shoe.allowed_colors:
            raise ValueError(f"Invalid color {color}, choose from {Shoe.allowed_colors}")

        self.brand = brand
        self.style = style
        self.size = size
        self.size_group = size_group
        self.gender = gender
        self.color = color

    def show_info(self):
        print(f"{self.brand} {self.style} ({self.color}) - Size {self.size} ({self.size_group})")


class ShoeFactory:
    def __init__(self):
        self.inventory = []

    def produce_batch(self, brand, style, size_group, gender, color, sizes):
        batch = []
        size_ranges = {
            "child": range(1, 4),
            "teen": range(4, 7),
            "adult": range(7, 14)
        }

        for size in sizes:
            if size in size_ranges[size_group] and color in Shoe.allowed_colors:
                shoe = Shoe(brand, style, size, size_group, gender, color)
                self.inventory.append(shoe)
                batch.append(shoe)
            else:
                print(f"Skipping invalid shoe: size={size}, color={color}")

        return batch

    def inventory_count(self):
        return len(self.inventory)

    def count_by_attribute(self, attr):
        counts = {}
        for shoe in self.inventory:
            key = getattr(shoe, attr)
            counts[key] = counts.get(key, 0) + 1
        return counts

    def clear_inventory(self):
        self.inventory = []

factory = ShoeFactory()
factory.clear_inventory()

factory.produce_batch("Stride", "sneaker", "adult", "male", "black", [8, 9, 10])
factory.produce_batch("TinySteps", "sandal", "child", "female", "pink", [1, 2])

print("Total inventory:", factory.inventory_count())
print("Counts by brand:", factory.count_by_attribute("brand"))
print("Counts by size group:", factory.count_by_attribute("size_group"))

print("\nAll shoes in inventory:")
for shoe in factory.inventory:
    shoe.show_info()
