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
> [!IMPORTANT]
> `id:` should be hyphen case, eg if you repo is `your-repo`, make sure you use hyphens for the id

In `shields/nice_shield_base/nice_shield_base.zmk.yml` rename these to your repo name:
```yaml
id: nice-shield-base
name: nice!view_shield_base
```
