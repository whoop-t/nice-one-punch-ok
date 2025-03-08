# nice-shield-base

> [!IMPORTANT]
> WIP

## Clone the repo into your own folder

1. Clone the base repo
```
git clone git@github.com:whoop-t/nice-shield-base.git your-repo-name
```
The above will clone the base repo into a folder of your choice. This should match the repo name you are going to create on github

2. Create new repo on github
On you github, create a new repo with the same name as your folder you cloned too

3. Set your locally cloned repo remote to the new repo you created on github
You need to attach your local clone to the remote repo, do this by running the command below
> [!NOTE]
> You can get this but using the Code button on your repo on Github 
```
git remote set-url origin git@github.com:YOUR-USER/your-repo-name.git
```

You can verify that it is pointing to the remote repo with `git remote -v`

4. Push the local files up to the remote repo
```
git push
```
Now you should see all the base files in your repo on github

## Renaming

After you have the code, you will need to rename some items to make sure it gets picked up as a module when it is used

1. Rename files
> [!IMPORTANT]
> Files should be underscore

- Rename `shields/nice_shield_base` to your repo name
- Rename `shields/nice_shield_base/nice_shield_base.conf` to your repo name
- Rename `shields/nice_shield_base/nice_shield_base.overlay` to your repo name
- Rename `shields/nice_shield_base/nice_shield_base.zmk.yml` to your repo name


2. Rename ids/variables in the code

In `Kconfig.shield`, update `nice_shield_base` to your shield
This will be your repo name but with underscores
```
config SHIELD_NICE_VIEW_SHIELD_BASE
    def_bool $(shields_list_contains,nice_shield_base)
```

> [!IMPORTANT]
> `id:` should be hyphen case, eg if you repo is `your-repo`, make sure you use hyphens for the id

In `shields/nice_shield_base/nice_shield_base.zmk.yml` rename these to your repo name:
```yaml
id: nice-shield-base
name: nice!view_shield_base
```

In `zephyr/module.yml` rename this to your repo name:
```yaml
name: "zmk-shield-nice!view-your-repo"
```
> [!NOTE]
> I dont think this one matters, but I like to update it

## Create 1-bit art

> [!IMPORTANT]
> WIP
> TODO Add guide to create the pixel art

## Add images

> [!NOTE]
> If you want animations, you can skip to the animation section
> This section is just for still images

> [!NOTE]
> This section also assumes you already have an image created from the previous step

### Rotate your image

This is a horizontal display so you need to rotate the image 90 degrees to the right

I just use [iloveimg](https://www.iloveimg.com/rotate-image), but feel free to use anything. Just make sure you are rotating it 90 degrees to the right

### Image to code conversion

Take your 1-bit art that your created or found and upload it to
[image2cpp](https://javl.github.io/image2cpp/)

The only option you need to change is `Code output format`, make sure its set to `Plain bytes`

Then click `Generate Code`
You will see the code, copy everything in the textfield

## Paste to code in repo

Depending on the image you are setting, you will need to update on of the following files:
1. `assests/left_image.c` (for your left half)
2. `assests/right_image.c` (for your right half)

You should see bytes already there, as well as a comments in the code above and below the bytes
Replace the bytes with your bytes from the conversion
```c
  // REPLACE THESE BYTES
  ...
  ...
  // END
```

Save the file

Thats it! Repeat for your other side if needed

## Push the code to you github remote repo

Once you have done all the changes you want, push the code to your remote github repo
```
git add .
git commit -m "Your commit message"
git push
```
