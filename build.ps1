$ErrorActionPreference = "Stop"

$mod_name = "taw_am1"

$version = Read-Host "Version Number"

$start_dir = Get-Location
$release_parent = "$PSScriptRoot\Release"
$release_path = "$release_parent\@$mod_name"
$addons_path = "$PSScriptRoot\addons"
$release_addons_path = "$release_path\addons"
$release_keys_path = "$release_path\keys"
$key_name = "${mod_name}_$version"
$include_patterns_path = "$PSScriptRoot\include.txt"

if (Test-Path $release_parent) {
    Remove-Item -Recurse "$release_parent"
}

New-Item "$release_path" -ItemType "directory" | Out-Null
New-Item "$release_keys_path" -ItemType "directory" | Out-Null
New-Item "$release_addons_path" -ItemType "directory" | Out-Null

# Create the private key
Set-Location "$release_parent"
&'C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools\DSSignFile\DSCreateKey.exe' "$key_name"
Set-Location "$start_dir"

# Move the public key to the release keys folder
Move-Item "$release_parent\$key_name.bikey" "$release_keys_path\"

$dirs = Get-ChildItem "$addons_path" | Where-Object { $_.PSIsContainer }
foreach ($d in $dirs) {
    $addon_name = $d.Name
    $addon_path = Join-Path -Path "$addons_path" -ChildPath "$addon_name"
    &'C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools\AddonBuilder\AddonBuilder.exe' "$addon_path" "$release_parent" -clear -sign="$release_parent\$key_name.biprivatekey" -include="$include_patterns_path" -prefix="x\$mod_name\addons\$addon_name"
    Move-Item "$release_parent\$addon_name.pbo" "$release_addons_path\taw_am1_$addon_name.pbo"
    Move-Item "$release_parent\$addon_name.pbo.$key_name.bisign" "$release_addons_path\taw_am1_$addon_name.pbo.$key_name.bisign"
}

# Delete the private key
Remove-Item "$release_parent\*.biprivatekey"

# Copy the un-PBO'd files to the release directory
Copy-Item "$PSScriptRoot\mod.cpp" "$release_path\"
Copy-Item "$PSScriptRoot\taw.paa" "$release_path\"