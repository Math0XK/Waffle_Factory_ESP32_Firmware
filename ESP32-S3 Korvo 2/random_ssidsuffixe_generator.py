import random
import time

# Importer l'objet env de PlatformIO
Import("env")

# Génération d'un suffixe à 6 chiffres
random.seed(time.time())
suffix = random.randint(0, 999999)
suffix_str = f"{suffix:06d}"

# Ajouter le suffixe comme macro pour le code C++
env.Append(BUILD_FLAGS=[f'-DSSID_SUFFIX=\\"{suffix_str}\\"'])

print(f"[EXTRA SCRIPT] SSID_SUFFIX généré : {suffix_str}")
