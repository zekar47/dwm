#!/bin/sh

# Empty for now
/nix/store/$(ls -la /nix/store | grep 'mate-polkit' | grep '4096' | awk '{print $9}' | sed -n '$p')/libexec/polkit-mate-authentication-agent-1 & 
