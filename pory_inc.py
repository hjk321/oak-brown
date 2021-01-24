import os

dir = os.getcwd()
for dname, dirs, files in os.walk(dir + "/data/maps"):
# for dname, dirs, files in os.walk(dir + "/data/scripts"):
    for fname in files:
        # if not fname.lower().endswith('.inc'):
        if not fname.lower() == 'scripts.inc':
            continue
        fpath = os.path.join(dname, fname)
        with open(fpath) as f:
            s = f.read()
        s = 'raw `\n' + s + '`\n'
        with open(fpath, "w") as f:
            f.write(s)
        base = os.path.splitext(fname)[0]
        os.rename(fpath, os.path.join(dname, base + ".pory"))
        print('Converted ' + fpath.replace(dir, ''))
print('Done.')
